#define LIST_INIT_SIZE 100//���Ա�洢�ռ�ĳ�ʼ������
#define LIST_INCREMENT 10
//�ṹ��
typedef struct {
	int* data;//�洢�ռ����
	int length;//��ǰ����
	int listSize;//��ǰ����Ĵ洢����
}SqList;
//˳����ʼ��
bool InitList(SqList* list);
//˳���Ĳ���
bool InsertList(SqList* list, int i, int x);
//˳����ɾ��
bool DeletList(SqList* list, int i, int* x);
//˳���Ĳ���
int LocateList(SqList list, int i, int* x);
//��ʾ˳��������
bool DisplayList(SqList list);
