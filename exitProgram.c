#include"header.h"
#include"DS.h"
#include"declaration.h"

void* exitProgram(void* arg)
{
#ifdef DEBUG
        printf("%s: Begin.\n",__func__);
#endif
	if (strncmp((char*)arg, "success", 7)==0)
		exit(EXIT_SUCCESS);
	else if (strncmp((char*)arg, "failure", 7)==0)
		exit(EXIT_FAILURE);
	else 
		printf("%s: ERROR: Invalid Exit Status.\n",__func__);
	
#ifdef DEBUG
        printf("%s: End.\n",__func__);
#endif
	return 0;
}
