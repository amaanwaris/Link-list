#include"header.h"
#include"DS.h"
#include"declaration.h"

void* insertEnd(void *arg)
{
	Linklist *strt;
	Node *cur;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	strt = (Linklist*)arg;
	if(strt->start == NULL)
	{
		strt->start = (*afp[12])(0);  //creatNode()
		goto RET;
	}
	cur  = strt->start;
	while(cur->next)
		cur = cur->next;
	cur->next = (*afp[12])(0); 			 //creatNode;

RET:
#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
