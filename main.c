#include"header.h"
#include"DS.h"
#include"declaration.h"

int main()
{
	Linklist *llist;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	init();
	llist=NULL;
	while(1)
		llist=(*afp[0])((void*)llist);
#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
