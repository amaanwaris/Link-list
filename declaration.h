#define NOF 16

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

extern void* insertBeg(void*);
extern void* insertEnd(void*);
extern void* insertNth(void*);
extern void* insertkey(void*);

extern void* creatNode(void*);

extern void* deleteBeg(void*);
extern void* deleteEnd(void*);
extern void* deleteNth(void*);
extern void* deletekey(void*);
