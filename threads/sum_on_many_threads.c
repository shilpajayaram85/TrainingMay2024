

// thread0.c
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// long long sum =0;

struct sum_runner_struct {
  long long limit;
  long long answer;
};
void * sum_runner(void *arg)
{

	//long long *limit_ptr = (long long *) arg;
	long long sum = 0;
	struct sum_runner_struct  *arg_struct = (struct sum_runner_struct *) arg;
	long long limit = arg_struct->limit;
	long long i;
	//long long sum = 0;
	for(i=0; i < limit; i++)
		sum+=i;
	arg_struct->answer = sum;
	pthread_exit(0);
	// pthread_exit(&sum); 
}
int main(int argc, char **argv )
{		
		if(argc < 2)
		{
			printf("Usage: %s <num-1> <num-2> ... <num -n> \n", argv[0]);
			exit(-1);
		}
		int num_args = argc -1;
		pthread_t tid[num_args];
		struct sum_runner_struct args[num_args];
		for(int i = 0; i < num_args; i++){
		//struct sum_runner_struct args;
		args[i].limit = atoll(argv[i+1]);
		pthread_attr_t attr;
		pthread_attr_init(&attr);
		//long long limit = atoll(argv[i+1]);
		pthread_create(&tid[i], &attr, sum_runner, &args[i]);
        }
		
		for(int i = 0; i < num_args; i++){
			pthread_join(tid[i], NULL);
			printf("SUM = %lld\n", args[i].answer); 
		}
		return 0;
}

