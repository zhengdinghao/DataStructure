//�ṹ��
typedef struct DuNode {
	int data;
	struct DuNode* prior;
	struct DuNode* next;
}DuNode,*DuLinkList;
//˫������
//ͷ�巨
DuLinkList CreateDuLink();
//˫�������
//��ֵ����
DuNode* GetElem(DuLinkList dlink, int x);
//����Ų���
DuNode* LocationElem(DuLinkList dlink, int i);
//˫�������
bool InsertDuLink(DuLinkList dlink, int i,int x);
//˫����ɾ��
bool DeleteDuLink(DuLinkList dlink, int i);
//��ʾ˫��������
void DisplayDuLink(DuLinkList dlink);