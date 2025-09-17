#include"header.h"
#include"DS.h"
#include"declaration.h"

void* deleteBeg(void *arg)
{
	Linklist *pll;
	Node *sec;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	pll = (Linklist*)arg;
	if(pll->start == NULL)
        	printf("%s: Linklist Empty.\n",__func__);
	else
	{
		sec = pll->start->next;
		free(pll->start);
		pll->start = sec;
	}


#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
