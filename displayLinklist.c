#include"header.h"
#include"DS.h"
#include"declaration.h"

void* displayLinklist(void *arg)
{
	int i;
	Linklist *pll;
	Node *cur;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	pll = (Linklist*)arg;
	cur=pll->start;
	if(cur== NULL)
	{
		printf("Linklist is Enpty\n");
		return 0;
	}
	i=1;
	printf("Linklist:\n");
	while(cur != NULL)
	{
		printf(" (%d -> %d)",i++,cur->info);
		cur= cur->next;
	}
	printf("\n");
#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
