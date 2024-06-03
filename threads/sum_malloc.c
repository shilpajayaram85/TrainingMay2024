

// thread0.c
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

//long long sum =0;
void * sum_runner(void *arg)
{

	long long *limit_ptr = (long long *) arg;
	long long limit = *limit_ptr;
	long long sum = 0;
	free(arg);
	long long i;
	for(i=0; i < limit; i++)
		sum+=i;

	long long *answer = malloc (sizeof (*answer));
	*answer = sum;
	pthread_exit(answer);
}
int main(int argc, char **argv )
{		
		if(argc < 2)
		{
			printf("Usage: %s <num> \n", argv[0]);
			exit(-1);
		}
		//long long limit = atoll(argv[1]);
		long long *limit = malloc(sizeof(*limit));
		*limit = atoll(argv[1]);
		pthread_t tid;
		pthread_attr_t attr;
		pthread_attr_init(&attr);
		pthread_create(&tid, &attr, sum_runner, limit);


			///do some other stuff here

		long long *result;
        pthread_join(tid,(void **)&result );
		printf("SUM = %lld\n",*result ); 
		free(result);
		return 0;
}

