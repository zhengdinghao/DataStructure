//结构体
typedef struct DuNode {
	int data;
	struct DuNode* prior;
	struct DuNode* next;
}DuNode,*DuLinkList;
//双链表建表
//头插法
DuLinkList CreateDuLink();
//双链表查找
//按值查找
DuNode* GetElem(DuLinkList dlink, int x);
//按序号查找
DuNode* LocationElem(DuLinkList dlink, int i);
//双链表插入
bool InsertDuLink(DuLinkList dlink, int i,int x);
//双链表删除
bool DeleteDuLink(DuLinkList dlink, int i);
//显示双链表内容
void DisplayDuLink(DuLinkList dlink);