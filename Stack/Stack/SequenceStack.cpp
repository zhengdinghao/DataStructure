#include<iostream>
#include"SequenceStack.h"
using namespace std;

//初始化
void InitStack(SqStack* stack) {
	stack->top = -1;
}
//判栈空
bool IsEmpty(SqStack* stack) {
	return(stack->top == -1 ? true : false);
}
//判栈满
bool IsFull(SqStack* stack) {
	return(stack->top==MaxSize-1?true:false);
}
//进栈
bool Push(SqStack* stack, int x) {
	if (IsFull(stack)) { return false; }
	stack->StackElement[++stack->top] = x;
	return true;
}
//出栈
bool Pop(SqStack* stack) {
	if (IsEmpty(stack)) { return false; }
	stack->top--;
	return true;
}
//取栈顶元素
int GetTop(SqStack* stack) {
	if (IsEmpty(stack)) { return false; }
	return stack->StackElement[stack->top];
}
//显示栈中元素
void DisplayStack(SqStack *stack) {
	cout << "当前栈中元素：";
	int top = stack->top;
	while (top!=-1)
	{
		cout << stack->StackElement[top] << " ";
		top--;
	}
	cout << endl;
}
