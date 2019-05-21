#include<iostream>
#include"DoubleLinkList.h"
using namespace std;

//双链表建表
DuLinkList CreateDuLink() {
	int length;
	DuLinkList dlink = (DuLinkList)malloc(sizeof(DuLinkList));
	dlink->data = 0;
	dlink->prior = NULL;
	dlink->next = NULL;
	
	DuLinkList p = dlink;

	printf("请输入要创建链表的长度:");
	scanf_s("%d", &length);

	for (int i = 1; i < length + 1;i++) {
		DuNode* s = (DuNode *)malloc(sizeof(DuNode));
		s->data = i;
		p->next = s;
		s->prior = p;
		s->next = NULL;
		p = s;
	}
	return dlink;
}
//双链表查找
//按值查找
DuNode* GetElem(DuLinkList dlink, int x) {
	DuNode* p = dlink->next;
	while (p != NULL && p->data != x)
	{
		p = p->next;
	}
	return p;
}
//按序号查找
DuNode* LocationElem(DuLinkList dlink, int i) {
	int j = 1;
	DuNode* p = dlink->next;
	if (i == 1) { return dlink; }
	if (i < 1) { return NULL; }
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}
//双链表插入
bool InsertDuLink(DuLinkList dlink, int i, int x) {
	if (i < 1) { return false; }
	DuNode* s = (DuNode*)malloc(sizeof(DuNode));
	DuNode* p = LocationElem(dlink, i-1);
	s->data = x;
	s->next = p->next;
	p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}
//双链表删除
bool DeleteDuLink(DuLinkList dlink, int i) {
	if (i < 1) { return false; }
	DuNode* p = LocationElem(dlink, i - 1);
	DuNode* q = p->next;
	p->next = q->next;
	q->next->prior = p;
	free(q);
	return true;
}
//显示双链表内容
void DisplayDuLink(DuLinkList dlink) {
	DuLinkList p = dlink->next;
	cout << "当前链表为：";
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}