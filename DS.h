typedef struct node
{
	struct node *next;
	int info;
}Node;

typedef struct linklist
{
	struct node *start;
	int noofNodes;
	long sizeofBytes;
}Linklist;
