#include"header.h"
#include"DS.h"
#include"declaration.h"

void* insertBeg(void *arg)
{
	Linklist *strt;
        Node *new;

#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	strt = (Linklist*)arg;
        if(strt->start == NULL)
        {
                strt->start = (*afp[12])(0);  //creatNode()
        }
       else
	{
	       new = (*afp[12])(0);  //creatNode()
	       new->next = strt->start;
	       strt->start = new;
	}
#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
