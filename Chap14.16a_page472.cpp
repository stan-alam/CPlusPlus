#include <iostream>
#include <stdlib>

const QMAX = 10;
struct Queue {

	int item[10];
	int front, rear, counter;
};
void enqueue(Queue &portqueue, int id) {
	portqueue.item[portqueue.rear]=id;
	portqueue.rear++;
	portqueue.counter++;
}
char dequeue(Queue portqueue ) {
	int item;
	portqueue.counter--;
	item=portqueue.item[portqueue.front]; //not finished { 10.20.2016 }
}