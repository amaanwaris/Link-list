#include"header.h"
#include"DS.h"
#include"declaration.h"

void* deleteNode(void *arg)
{
	int i;
	char *deletemenu[]={"__DeleteMenu__",
			"1: Delete Node at the Beginning",
			"2: Delete Node at End",
			"3: Delete After Nth Node",
			"4: Delete After Key value Node ",
			"Please Enter Your Choice:"};
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	for (i=0 ; i < 6 ; i++ )
		printf("%s\n", *(deletemenu+i));
	scanf("%d", &i);

	if ( (i>= 1) && (i<=4) )
		(*afp[i+12])(arg); 

#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
