#include "lab11.h"
#include<stdio.h>
#include<stdlib.h>


void Function4(){
    int i = 0;
    int *p = malloc(sizeof(int) * ARRAY_SIZE);
    if(p == NULL){
        fprintf(stderr, "function4(): Error allocation p\n");
        exit(-1);
    }
    printf("In functin4()...\n");
    //Initialize the array
    for(i = 0; i<ARRAY_SIZE; i++){
        p[i] = i;
    }
    //print part of the array
    for(i = 0; i<PARTIAL_SIZE; i++){
        printf("function4(): %s = %d, %s = %d", PR(i),i, PR(p[i]),p[i]);
        printf("\n");
    }
    free(p);
}