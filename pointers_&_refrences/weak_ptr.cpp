/*
It's much more similar to shared pointer except it'll not maintain a Reference counter.
In this case pointer will not have a strong hold on the object.
The reason is if suppose pointers are holding the object and requesting for other
objects then they may form a Deadlock.
*/
