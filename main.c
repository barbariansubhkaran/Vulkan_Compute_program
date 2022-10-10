#include "compute.h"
int main(int ac, char **av)
{
   CreateDeviceAndComputeQueue();
   CreateCommandPool();
   PrepareCommandBuffer();
   Compute();


   DestroyCommandPoolAndLogicalDevice();

  return 0;
}
