#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

#define QUEUE_MAX_SIZE 100

/*
* Struct: Queue
* What is this!? A queue for ants!?
* No, this is a queue for ints
* 
* Initialize both 'front' and 'rear' to -1 upon creation. Example:
* 
* -- Code
* Queue queue;
* queue.front = -1;
* queue.rear = -1;
* --
*/
typedef struct {
   int items[QUEUE_MAX_SIZE];
   int front;
   int rear;
} Queue;

/*
* Function: enqueue
* Add an int to the back of the queue
*
* Params:
*  queue - pointer to the queue to update
*  value - int to add to the queue
*/
void enqueue(Queue* queue, int value);


/*
* Function: dequeue
* Grab the first item off the queue
*
* Params:
*  queue - pointer to the queue
*
* Returns:
*  The first int off of the queue,
*  or -1 if the queue is empty
*/
int dequeue(Queue* queue);
