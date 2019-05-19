//结构体
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//单链表判空
bool isEmpty(LinkList link);
//单链表建表
//头插法
LinkList CreatLink1();
//尾插法
LinkList CreatLink2();
//单链表查找
//按值查找
LNode* GetElem(LinkList link, int i);
//按序号查找
LNode* LocateElem(LinkList link, int x);
//单链表插入
bool InsetLink(LinkList link, int i, int x);
//单链表删除
bool DeleteLink(LinkList link, int i);
//显示单链表内容
void DisplayLink(LinkList link);
