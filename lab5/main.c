#include <stdio.h>
#include <stdbool>
#ifndef QUEUESTATICS_FUNCTION_H





typedef struct

{
    int maxsize;
    int front, rear;
    int *items;

} QUEUE;

QUEUE* create(int capacity);
bool isEmpty;
bool is
