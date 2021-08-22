#include <iostream>
#include <mutex>
#include <thread>

//g++ -std=c++17  example_4.cpp -pthread -o exe

std::mutex mutex1, mutex2;

void ThreadA() {
  // Creates deadlock problem
  mutex2.lock();
  std::cout << "Thread A" << std::endl;
  mutex1.lock();
  mutex2.unlock();
  mutex1.unlock();

  std::cout << "Finished Thread A" << std::endl;
}

void ThreadB() {
  // Creates deadlock problem
  mutex1.lock();
  std::cout << "Thread B" << std::endl;
  mutex2.lock();
  mutex1.unlock();
  mutex2.unlock();

  std::cout << "Finished Thread B" << std::endl;
}

void ExecuteThreads() {
  std::thread t1(ThreadA);
  std::thread t2(ThreadB);

  t1.join();
  t2.join();

  std::cout << "Finished" << std::endl;
}

int main() {
  ExecuteThreads();

  return 0;
}
