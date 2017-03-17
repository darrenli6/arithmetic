#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Value{
	LinkListNode header;
	int v;
};
int main(int argc, char *argv[]) {
	
	LinkList* list=LinkList_Create();
	
	struct Value v1;
	struct Value v2;
	struct Value v3;
	
	v1.v=1;
	v2.v=2;
	v3.v=4;
	
	LinkList_Insert(list,(LinkListNode*)&v1,LinkList_Length(list));
	LinkList_Insert(list,(LinkListNode*)&v2,LinkList_Length(list));
	LinkList_Insert(list,(LinkListNode*)&v3,LinkList_Length(list));
	int i=0;
	for(i=0;i<LinkList_Length(list);i++)
	{
		struct Value* pv=(struct Value*)LinkList_Get(list,i);
		printf("%d\n",pv->v); 
	}
	printf("operation delete: \n");
	
	while(LinkList_Length(list))
	{
		struct Value* pv=(struct Value*)LinkList_Delete(list,0);
		printf("%d\n",pv->v);
	}
	
	LinkList_Destroy(list);
	
	
	
	return 0;
}
