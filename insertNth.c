#include"header.h"
#include"DS.h"
#include"declaration.h"

void* insertNth(void *arg)
{
	int i;
	int n;
	Linklist *strt;
	Node *cur, *new;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
        printf("%s:Enter the node  no where you insert the node\n",__func__);
	scanf("%d",&n);
	strt=(Linklist*)arg;
	if(n > strt->noofNodes)
	{
        	printf("%s:node id error:! \n",__func__);
		return 0;
	}
	cur = strt->start;
	for(i=1 ; i<n ; i++)
	{
		if(cur->next)
			cur = cur->next;
	}
	new = (*afp[12])(0);  //creatnode;
	new->next = cur->next;
	cur->next = new;


#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
