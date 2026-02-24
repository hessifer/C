#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() { printf("I am a thread with thread ID: %d\n", gettid()); }
