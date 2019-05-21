#include<iostream>
#include"SequenceStack.h"

int main() {
	SqStack* stack = (SqStack*)malloc(sizeof(SqStack));
	InitStack(stack);
	for (int i = 1; i <= 5;i++) {
		Push(stack, i);
	}
	DisplayStack(stack);
	Pop(stack);
	DisplayStack(stack);

	return 0;
}