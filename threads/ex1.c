#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<unistd.h>

pthread_t ntid;

void print_id(const char *s)
{
  
    pid_t pid;
	pthread_t tid;

	pid = getpid();
	tid = pthread_self();

	printf("%s PID %u tid %u\n", s, (unsigned int)pid,(unsigned int)tid);

}

void* thr_fun(void * args)
{
	
		print_id("New thread:... ");
		return ((void *)0);
}


int main()
{

	if(pthread_create(&ntid, NULL, thr_fun, NULL) != 0)
		printf("Cant create thread \n");
	print_id("Main thread...");
	sleep(1);
	exit(0);
}

