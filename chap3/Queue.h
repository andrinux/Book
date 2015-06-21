#ifndef _Queue_H
#define _Queue_H

struct QueueRecord{
	int Capacity;
	int Front;
	int Back;
	int Size;
	ElementType *Array;	
};

typedef struct QueueRecord *Queue;

int isEmpty(Queue Q);
int isFull(Queue Q);
Queue CreateQueue(int maxElement);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(Queue Q, ElementType x);
ElementType front();
ElementType back();
void Dequeue(Queue Q);
ElementType FrontAndDequeue(Queue Q); 

#endif