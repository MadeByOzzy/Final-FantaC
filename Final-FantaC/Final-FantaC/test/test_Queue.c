#include "test_Queue.h"

int test_Queue()
{
   // init
   printf("== Starting test_Queue()\n");
   srand(time(NULL));

   // initialize a queue
   Queue queue;
   queue.rear = -1;
   queue.front = -1;
   
   // test 1 value
   int control_val = rand();
   enqueue(&queue, control_val);
   int test_val = dequeue(&queue);
   if (test_val != control_val)
   {
      printf("test_Queue() FAIL because test_val(%d) != control_val(%d)\n", test_val, control_val);
      return 1;
   }

   /////////////////////////////////////////////
   // test half the range
   /////////////////////////////////////////////

   // allocate memory
   int half_range = QUEUE_MAX_SIZE / 2;
   int* test_array = (int*)malloc(half_range * sizeof(int));

   // populate both the queue and the test array
   for (int i = 0; i < half_range; i++)
   {
      int currVal = rand();
      test_array[i] = currVal;
      enqueue(&queue, currVal);
   }

   // check the queue vs the test array
   for (int i = 0; i < half_range; i++)
   {
      int queue_value = dequeue(&queue);
      if (test_array[i] != queue_value)
      {
         printf("test_Queue() FAIL because queue_value(%d) != test_array[%d](%d)\n", queue_value, i, test_array[i]);
         return 1;
      }
   }

   // free up the memory
   free(test_array);

   ///////////////////////////////////////////////
   // finish up
   printf("== test_Queue() finished successfully!\n");
   return 0;
}
