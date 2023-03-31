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
//const int QUEUE_MAX_SIZE = 100;

/*
* Struct CharacterQueue
* A queue for Character structs
*/
typedef struct {
   int characters[QUEUE_MAX_SIZE];
   int front;
   int rear;
} CharacterQueue;

/*
* Function: enqueue
* Add a Character to the back of the queue
* 
* Params:
*  queue - pointer to the queue to update
*  character - character to add to the queue
*/
void enqueue(CharacterQueue* queue, Character character);


/*
* Function: dequeue
* Grab the first character off of the queue
* 
* Params:
*  queue - pointer to the queue
* 
* Returns:
*  The first character off of the queue,
*  or an empty character if queue is empty.
*/
Character dequeue(CharacterQueue* queue);


