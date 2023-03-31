#include "BattleSystem.h"



/*
* Function: enqueue
* Add a Character to the back of the queue
*
* Params:
*  queue - pointer to the queue to update
*  character - character to add to the queue
*/
void enqueue(CharacterQueue* queue, Character character)
{
   // check for queue overflow
   int next_rear = (queue->rear + 1) % QUEUE_MAX_SIZE;
   if (next_rear == queue->front)
   {
      printf("Queue overflow error\n");
      return;
   }

   // if this is the first element in the queue, set queue.front to 0
   if (queue->front == -1)
   {
      queue->front = 0;
   }

   // update rear index
   queue->rear = next_rear;

   // add the character to the back of the queue
   queue->characters[next_rear] = character;
}


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
Character dequeue(CharacterQueue* queue)
{
   // check for underflow
   Character empty_character;
   if (queue->front == -1)
   {
      printf("Queue underflow error\n");
      return empty_character;
   }

   // grab the character at the front of the queue
   Character character = queue->characters[queue->front];

   // check if the queue is now empty
   if (queue->front == queue->rear)
   {
      queue->front = -1;
      queue->rear = -1;
   }
   // otherwise, increment the front index
   else
   {
      queue->front = (queue->front + 1) % QUEUE_MAX_SIZE;
   }

   // finish up
   return character;
}


