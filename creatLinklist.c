#include"header.h"
#include"DS.h"
#include"declaration.h"

void* creatLinklist(void *arg)
{
	Linklist *strt;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif

	strt = (struct linklist*)malloc(sizeof(struct linklist));
	if(!strt)
	{
		perror("malloc");
		(*afp[1])((void*)"failure");
	}
	strt->noofNodes=0;
	strt->sizeofBytes=0;
	strt->start=NULL;

#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return (void*)strt;
}
