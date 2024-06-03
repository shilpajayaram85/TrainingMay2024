#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

int count = 0;

void * showvar(void * arg)
{
	printf("%s %p\n", arg, &arg);
	count++;
	return NULL;
}

int main()
{
	pthread_t tid;
	showvar("main");
	showvar("main 2");
	pthread_create(&tid, NULL, showvar, "thread");
	sleep(1);
	printf("%d\n", count);
	return 0;
}
