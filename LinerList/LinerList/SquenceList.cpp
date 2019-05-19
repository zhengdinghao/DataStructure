#include"SquenceList.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

//˳�����
bool InitList(SqList* list) {
	list->data = (int*)malloc(sizeof(int) * LIST_INIT_SIZE);
	if (!list->data) { return false; }
	memset(list->data, 0, LIST_INIT_SIZE * sizeof(int));
	list->length = 0;
	list->listSize = LIST_INIT_SIZE;
	return true;
}
//˳������
bool InsertList(SqList* list, int i, int e) {
	int* p = NULL;
	if (i<1 || i>list->length + 1) { return false; }
	if (list->length >= list->listSize) {
		p = (int*)realloc(list->data, (list->listSize + LIST_INCREMENT) * sizeof(int));
		if (!list->data) { return false; }
		list->listSize += LIST_INCREMENT;
		list->data = p;
	}
	for (int j = list->length - 1; j >= i - 1; j--) {
		list->data[j + 1] = list->data[j];
	}
	list->data[i - 1] = e;
	list->length++;
	return true;
}
//˳���ɾ��
bool DeletList(SqList* list, int i, int* e) {
	if (i<1 || i>list->length) { return false; }
	(*e) = list->data[i - 1];
	for (int j = i; j < list->length; j++) {
		list->data[j - 1] = list->data[j];
	}
	list->length--;
	return true;
}
//˳������
int LocateList(SqList list, int i, int* e) {
	if (i < 1 || i > list.length) { return false; }
	(*e) = list.data[i - 1];
}
//��ʾ˳���
bool DisplayList(SqList list) {
	cout << "���Ա�Ĵ�СΪ��" << list.length << endl;
	cout << "���Ա������Ԫ��Ϊ��" << " ";
	for (int i = 0; i < list.length; i++) {
		cout << list.data[i] << " ";
	}
	cout << endl;
	return true;
}