#define MaxSize 50//最大容量
//结构体
typedef struct {
	int StackElement[MaxSize];
	int top;
}SqStack;
//初始化
void InitStack(SqStack* stack);
//判栈空
bool IsEmpty(SqStack* stack);
//判栈满
bool IsFull(SqStack* stack);
//进栈
bool Push(SqStack* stack, int x);
//出栈
bool Pop(SqStack* stack);
//取栈顶元素
int GetTop(SqStack* stack, int* x);
//显示栈中元素
void DisplayStack(SqStack *stack);
