ead_exit(ead_exit(#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

int g = 0;

void *myThreadFun(void *args) {
     int s = 0;
    int myid = *((int *) args);
	
    g++;
    s++;

    printf("Thread Id %d Static %d  Global %d\n", myid, s, g);
    pthread_exit(NULL);
}

int main() {
    int i;
      pthread_t tid[3];
    int thread_ids[3];

    for (i = 0; i < 3; i++) {
        thread_ids[i] = i;  // Assign a unique ID to each thread
        pthread_create(&tid[i], NULL, myThreadFun, (void *)&thread_ids[i]);
    }

/*    for (i = 0; i < 3; i++) {
        pthread_join(tid[i], NULL);  // Wait for all threads to complete
    }*/
	pthread_exit(NULL);
    return 0;
}

