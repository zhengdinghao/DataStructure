#define MaxSize 50//�������
//�ṹ��
typedef struct {
	int StackElement[MaxSize];
	int top;
}SqStack;
//��ʼ��
void InitStack(SqStack* stack);
//��ջ��
bool IsEmpty(SqStack* stack);
//��ջ��
bool IsFull(SqStack* stack);
//��ջ
bool Push(SqStack* stack, int x);
//��ջ
bool Pop(SqStack* stack);
//ȡջ��Ԫ��
int GetTop(SqStack* stack, int* x);
//��ʾջ��Ԫ��
void DisplayStack(SqStack *stack);
