#include"header.h"
#include"DS.h"
#include"declaration.h"

void* deleteEnd(void *arg)
{
	Linklist *strt;
	Node *cur, *sl;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	strt = (Linklist*)arg;
	if(strt->start == NULL)
	{
		printf("Linklist Empty\n");
		return 0;
	}
	sl= cur  = strt->start;
	while(cur->next)
	{	
		sl=cur;
		cur = cur->next;
	}
	free(cur);
	sl->next=NULL;

#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
