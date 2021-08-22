#include <future>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

// g++ -std=c++17  example_2.cpp -pthread -o exe

class Vehicle {
  public:
    Vehicle(int id) : _id(id) {}

  private:
    int _id;
};

class WaitingVehicles {
  public:
    WaitingVehicles() {}

    // getters / setters
    void printSize() {
      _mutex.lock();
      std::cout << "#vehicles = " << _vehicles.size() << std::endl;
      _mutex.unlock();
    }

    // typical behaviour methods
    void pushBack(Vehicle &&v) {
      _mutex.lock();
      _vehicles.emplace_back(std::move(v));  // data race would cause an exception
      _mutex.unlock();
    }

  private:
    std::vector<Vehicle>
      _vehicles;  // list of all vehicles waiting to enter this intersection
    std::mutex _mutex;
};

int main() {
  std::shared_ptr<WaitingVehicles> queue(new WaitingVehicles);
  std::vector<std::future<void>> futures;

  for (int i = 0; i < 1000; ++i) {
    Vehicle v(i);
    futures.emplace_back(std::async(
        std::launch::async, &WaitingVehicles::pushBack, queue, std::move(v)));
  }

  for (std::future<void> &ftr : futures) {
    ftr.wait();
  }

  queue->printSize();

  return 0;
}
