/*
 * stackHeader.h
 *
 *  Created on: Feb 6, 2020
 *      Author: user
 */

#ifndef STACKHEADER_H_
#define STACKHEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

typedef struct stack
{
	int maxSize;
	int top;
	int *data;
};

struct stack* stackInit(int size);

int stackIsEmpty(struct stack *asd);

int stackIsFull(struct stack *asd);

int stackPop(struct stack *asd);

int stackPush(struct stack *asd, int x);

int stackTop(struct stack *asd);

#endif /* STACKHEADER_H_ */
