#include"header.h"
#include"DS.h"
#include"declaration.h"

void* deleteNth(void *arg)
{
        int i;
        int n;
        Linklist *strt;
        Node *cur, *nth;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
        printf("%s:Enter the node  no where you insert the node\n",__func__);
        scanf("%d",&n);
        strt=(Linklist*)arg;
        if(n > strt->noofNodes)
        {
                printf("%s:The node number you want to delete not present \n",__func__);
                return 0;
        }
	cur=strt->start;
	for(i=1; i<=n; i++)
	{
		if(cur->next)
		{
			nth = cur;
                        cur = cur->next;
		}
	}
       	  	nth->next=cur->next;
		free(cur);

#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
