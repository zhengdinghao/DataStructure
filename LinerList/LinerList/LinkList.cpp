#include<iostream>
#include<stdio.h>
#include"LinkList.h"
using namespace std;

//单链表判空
bool isEmpty(LinkList link) {
	if (link->next == NULL) {
		return true;
	}
	else
	{
		return false;
	}
}
//单链表建表
//头插法
LinkList CreatLink1() {
	int length, i;
	printf("请输入链表的长度：");
	scanf_s("%d", &length);
	LinkList link = (LinkList)malloc(sizeof(LNode));
	if (link == NULL) {
		return false;
	}
	else
	{
		link->next = NULL;
		LNode* p = link;//尾指针
		for (i = 0; i < length; i++) {
			LNode* s = (LNode*)malloc(sizeof(LNode));
			s->data = i;
			s->next = NULL;
			p->next = s;
			p = s;
		}
		return link;
	}
}
//尾插法
LinkList CreatLink2() {
	int length, i;
	printf("请输入链表的长度：");
	scanf_s("%d", &length);
	LinkList link = (LinkList)malloc(sizeof(LNode));
	if (link == NULL) {
		return false;
	}
	else
	{
		link->next = NULL;
		LNode* p = link;//尾指针
		for (i = 0; i < length; i++) {
			LNode* s = (LNode*)malloc(sizeof(LNode));
			s->data = i;
			p->next = s;
			p = s;
		}
		p->next = NULL;
		return link;
	}
}
//单链表查找
//按序号查找
LNode* LocateElem(LinkList link, int i) {
	int j = 1;
	LNode* p = link->next;
	if (i == 1) { return link; }
	if (i < 1) { return NULL; }
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}
//按值查找
LNode* GetElem(LinkList link, int x) {
	LNode* p = link->next;
	while (p != NULL && p->data != x)
	{
		p = p->next;
	}
	return p;
}
//单链表插入
bool InsetLink(LinkList link, int i, int x) {
	LNode* s, * p;
	p = GetElem(link, i - 1);
	s = (LNode*)malloc(sizeof(LNode));
	s->data = x;
	s->next = p->next;
	p->next = s;
	return true;
}
//单链表删除
bool DeleteLink(LinkList link, int i) {
	LNode* p, * q;
	p = GetElem(link, i - 1);
	q = p->next;
	p->next = q->next;
	free(q);
	return true;
}
//显示单链表内容
void DisplayLink(LinkList link) {
	LNode* p = link->next;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}