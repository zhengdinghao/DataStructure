#include<iostream>
#include"SequenceStack.h"
using namespace std;

//��ʼ��
void InitStack(SqStack* stack) {
	stack->top = -1;
}
//��ջ��
bool IsEmpty(SqStack* stack) {
	return(stack->top == -1 ? true : false);
}
//��ջ��
bool IsFull(SqStack* stack) {
	return(stack->top==MaxSize-1?true:false);
}
//��ջ
bool Push(SqStack* stack, int x) {
	if (IsFull(stack)) { return false; }
	stack->StackElement[++stack->top] = x;
	return true;
}
//��ջ
bool Pop(SqStack* stack) {
	if (IsEmpty(stack)) { return false; }
	stack->top--;
	return true;
}
//ȡջ��Ԫ��
int GetTop(SqStack* stack) {
	if (IsEmpty(stack)) { return false; }
	return stack->StackElement[stack->top];
}
//��ʾջ��Ԫ��
void DisplayStack(SqStack *stack) {
	cout << "��ǰջ��Ԫ�أ�";
	int top = stack->top;
	while (top!=-1)
	{
		cout << stack->StackElement[top] << " ";
		top--;
	}
	cout << endl;
}
