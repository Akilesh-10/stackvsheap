/**
 *  Stack vs Heap experiment
Program:
int global_var = 10;
void test(){
int stack_var = 5;
int *heap_var = malloc(sizeof(int));
}
*/

// to make a real experiment we need to print the memory addresses

#include <stdio.h>
#include "stdlib.h"

int global_v = 10;

void test(){
    int stack_v = 5;
    int *heap_v = malloc(sizeof(int));
    
    printf("---------------Memory addresses--------------\n");
    printf("Global variable: %p\n",(void*)&global_v);
    printf("Stack variable: %p\n",(void*)&stack_v);
    printf("Heap Variable: %p\n",(void*)heap_v);

    free(heap_v);
}

int main(){
    test();
    return 0;
}