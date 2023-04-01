#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

#include "Character.h"

#define QUEUE_MAX_SIZE 100

/*
* Struct Queue
* A queue for ints
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


