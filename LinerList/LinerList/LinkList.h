//�ṹ��
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//�������п�
bool isEmpty(LinkList link);
//��������
//ͷ�巨
LinkList CreatLink1();
//β�巨
LinkList CreatLink2();
//���������
//��ֵ����
LNode* GetElem(LinkList link, int i);
//����Ų���
LNode* LocateElem(LinkList link, int x);
//���������
bool InsetLink(LinkList link, int i, int x);
//������ɾ��
bool DeleteLink(LinkList link, int i);
//��ʾ����������
void DisplayLink(LinkList link);
