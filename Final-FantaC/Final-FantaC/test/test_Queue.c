#include "test_Queue.h"

int test_Queue()
{
   // init
   printf("== Starting test_Queue() ==\n");

   // initialize a queue
   Queue queue;
   queue.rear = -1;
   queue.front = -1;
   

   // finish up
   printf("== test_Queue() finished successfully! ==\n");
   return 0;
}
