/*
 * stackSource.c
 *
 *  Created on: Feb 6, 2020
 *      Author: user
 */

#include "stackHeader.h"

struct stack* stackInit(int size){

	struct stack *asd = (struct stack*)malloc(sizeof(struct stack));

	asd->maxSize = size;
	asd->top = -1;
	asd->data = (int*)malloc(sizeof(int) * size);

	return asd;
}

int stackIsEmpty(struct stack *asd) {

   if(asd->top == -1)
      return 1;
   else
      return 0;
}

int stackIsFull(struct stack *asd) {

   if(asd->top == asd->maxSize)
      return 1;
   else
      return 0;
}

int stackPop(struct stack *asd) {
   int data;

   if(!stackIsEmpty(asd)) {
      data = asd->data[asd->top];
      asd->top = asd->top - 1;
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int stackPush(struct stack *asd, int x) {

   if(!stackIsFull(asd)) {
      asd->top = asd->top + 1;
      asd->data[++asd->top] = x;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int stackTop(struct stack *asd){
	if(!stackIsEmpty(asd))
		return asd->data[asd->top];
	else
		return 0;
}
