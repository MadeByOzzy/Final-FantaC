#include "BattleSystem.h"



/*
* Function: enqueue
* Add an int to the back of the queue
*
* Params:
*  queue - pointer to the queue to update
*  value - int to add to the queue
*/
void enqueue(Queue* queue, int value)
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

   // add the int to the back of the queue
   queue->items[next_rear] = value;
}


/*
* Function: dequeue
* Grab the first int off of the queue
*
* Params:
*  queue - pointer to the queue
*
* Returns:
*  The first int off of the queue,
*  or -1 if queue is empty.
*/
int dequeue(Queue* queue)
{
   // check for underflow
   if (queue->front == -1)
   {
      printf("Queue underflow error\n");
      return -1;
   }

   // grab the int at the front of the queue
   int return_value = queue->items[queue->front];

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
   return return_value;
}


