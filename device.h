#include <vulkan/vulkan.h>
#include <stdio.h>

extern VkDevice LogicalDevice;
extern VkQueue ComputingQueue;
extern VkCommandPool ComputeCmdPool;

void CreateDeviceAndComputeQueue(void);
void CreateCommandPool(void);
void DestroyCommandPoolAndLogicalDevice(void);
