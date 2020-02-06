/*
 ============================================================================
 Name        : day9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stackHeader.h"

int main(void)
{
   // push items on to the stack
	struct stack *asd = stackInit(6);

	stackPush(asd, 3);
	stackPush(asd, 5);
	stackPush(asd, 9);
	stackPush(asd, 1);
	stackPush(asd, 12);
	stackPush(asd, 15);


   // print stack data
   while(!stackIsEmpty(asd)) {
	  int data = stackPop(asd);
	  printf("Top element: %d\n",stackTop(asd));
	  printf("Pop-ed data: %d\n",data);
   }

   printf("Stack full: %s\n" , stackIsFull(asd)?"true":"false");
   printf("Stack empty: %s\n" , stackIsEmpty(asd)?"true":"false");

   return 0;
}
