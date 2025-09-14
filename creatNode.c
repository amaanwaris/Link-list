#include"header.h"
#include"DS.h"
#include"declaration.h"

void* creatNode(void *arg)
{
	Node *new;
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	new = (Node*)malloc(sizeof(struct node));
	if(!new)
	{
		perror("malloc");
		(*afp[1])((void*)"failure");
	}
	new->next = NULL;
	printf("%s : Enter data for new Node:\n",__func__);
	scanf("%d", &new->info);
#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return (void*)new;
}
