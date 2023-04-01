#include "RunUnitTests.h"

int RunUnitTests()
{
   // init
   printf("===== Running Final-FantaC unit tests ======\n");
   int errorCount = 0;

   // unit tests
   errorCount += test_Queue();
   errorCount += test_BattleSystem();

   // finish up
   if (errorCount == 0)
   {
      printf("===== All unit tests completed successfully! =====\n");
   }
   else
   {
      printf("===== %d errors :( =====\n", errorCount);
   }
   return errorCount;
}


