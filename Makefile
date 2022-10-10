
SOURCES = main.c compute.c device.c instance.c
HEADERS = compute.h device.h instance.h

TARGET = vulkan_compute

$(TARGET): $(SOURCES) $(HEADERS)
	gcc -g -O0 $(SOURCES) -lvulkan -o $(TARGET)
