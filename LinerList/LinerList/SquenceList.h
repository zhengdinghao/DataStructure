#define LIST_INIT_SIZE 100//线性表存储空间的初始分配量
#define LIST_INCREMENT 10
//结构体
typedef struct {
	int* data;//存储空间基质
	int length;//当前长度
	int listSize;//当前分配的存储容量
}SqList;
//顺序表初始化
bool InitList(SqList* list);
//顺序表的插入
bool InsertList(SqList* list, int i, int x);
//顺序表的删除
bool DeletList(SqList* list, int i, int* x);
//顺序表的查找
int LocateList(SqList list, int i, int* x);
//显示顺序表的内容
bool DisplayList(SqList list);
