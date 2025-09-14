#include"header.h"
#include"DS.h"
#include"declaration.h"

void* insertNode(void *arg)
{
	int i;
	char *insertmenu[]={"__InsertMenu__",
			"1: Insert Node at the Eeginning",
			"2: Insert Node at End",
			"3: Insert After Nth Node",
			"4: Insert After Key value Node ",
			"Please Enter Your Choice:"};
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	for (i=0 ; i < 6 ; i++ )
		printf("%s\n", *(insertmenu+i));
	scanf("%d", &i);

	if ( (i>= 1) && (i<=4) )
		(*afp[i+7])(arg); 

#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
