#include<iostream>
#include<stdio.h>
#include"LinkList.h"
using namespace std;

//�������п�
bool isEmpty(LinkList link) {
	if (link->next == NULL) {
		return true;
	}
	else
	{
		return false;
	}
}
//��������
//ͷ�巨
LinkList CreatLink1() {
	int length, i;
	printf("����������ĳ��ȣ�");
	scanf_s("%d", &length);
	LinkList link = (LinkList)malloc(sizeof(LNode));
	if (link == NULL) {
		return false;
	}
	else
	{
		link->next = NULL;
		LNode* p = link;//βָ��
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
//β�巨
LinkList CreatLink2() {
	int length, i;
	printf("����������ĳ��ȣ�");
	scanf_s("%d", &length);
	LinkList link = (LinkList)malloc(sizeof(LNode));
	if (link == NULL) {
		return false;
	}
	else
	{
		link->next = NULL;
		LNode* p = link;//βָ��
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
//���������
//����Ų���
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
//��ֵ����
LNode* GetElem(LinkList link, int x) {
	LNode* p = link->next;
	while (p != NULL && p->data != x)
	{
		p = p->next;
	}
	return p;
}
//���������
bool InsetLink(LinkList link, int i, int x) {
	LNode* s, * p;
	p = GetElem(link, i - 1);
	s = (LNode*)malloc(sizeof(LNode));
	s->data = x;
	s->next = p->next;
	p->next = s;
	return true;
}
//������ɾ��
bool DeleteLink(LinkList link, int i) {
	LNode* p, * q;
	p = GetElem(link, i - 1);
	q = p->next;
	p->next = q->next;
	free(q);
	return true;
}
//��ʾ����������
void DisplayLink(LinkList link) {
	LNode* p = link->next;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}