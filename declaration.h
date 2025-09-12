#define NOF 7

int init();

extern void* (*afp[NOF])(void*);

extern void* mainMenu(void*);
extern void* exitprogram(void*);

extern void* creatLinklist(void*);

extern void* insertNode(void*);
extern void* deleteNode(void*);
extern void* sortLinklist(void*);
extern void* displayLinklist(void*);
extern void* rotateLinklist(void*);
