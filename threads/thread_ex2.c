
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
struct varg
{
	int a;
	int b;
};

void *myThreadFun(void *args) {
	//int *ptr = (int *) args;
	//printf("%d\n", *ptr);

	//char *Name = (char *) args;
	//printf("%s\n", Name);

	struct varg  *ptr = (struct varg *) args;
	printf("%d\n%d\n", ptr->a, ptr->b);
}

int main() {
	int a =10;
	char Name[20] = "shilpa";
	struct varg arg;
	arg.a = 10;
	arg.b = 20;
	pthread_t tid;
	
	//pthread_create(&tid, NULL, myThreadFun, &a);

	//pthread_create(&tid, NULL, myThreadFun, Name);
	pthread_create(&tid, NULL, myThreadFun, &arg);
	pthread_exit(NULL);
    return 0;
}

