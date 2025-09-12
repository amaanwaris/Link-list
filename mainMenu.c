#include"header.h"
#include"DS.h"
#include"declaration.h"

void* mainMenu(void *arg)
{
	int i;
	char *mmenu[]={ "___MAIN MENU___",
		"1: Create Linklist:",
		"2: Insert Node:",
		"3: Delete Node:",
		"4: Display Linklist:",
		"5: Sort Linklist:",
		"6: Rotote Linklist:",
		"0: Exit Program:",
		"Please Enter Your Choice:"};
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif
	printf("%s\n",(*mmenu+0));
	for(i=1 ; i < 7 ; i++)
	{
		if((i==1) && (arg == NULL))
			printf("%s\n",*(mmenu+i));
		else if ((i >= 2) && (i <= 6) && (arg != NULL))
			printf("%s\n",*(mmenu+i));
	}
	printf("%s\n",*(mmenu+7));
	printf("%s\n",*(mmenu+8));

	scanf("%d",&i);

	if (i==0)
		(*afp[1])((void*)"success");
	if (i==1)
		arg = (*afp[i+1])(arg);
	else if( (i>=2) && (i<=6))
		(*afp[i+1])(arg);

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return arg;
}
