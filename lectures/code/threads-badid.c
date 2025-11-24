#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <pthread.h>
#define NUM_THREADS 100

void *thread_count(void* args) {
  int myid = *((int*) args); 
  printf("hello I'm thread %d with pthread_id %lu\n",
      myid, pthread_self());
 
  return (void *)0;
}

int main(int argc, char *argv[]) {
  pthread_t threads[NUM_THREADS];
  int i = 0;

  for (i = 0; i < NUM_THREADS; i++) {
    pthread_create(&threads[i], NULL, thread_count, &i); 
  }

  for (i = 0; i < NUM_THREADS; i++) {
    pthread_join(threads[i], NULL); 
  }

  return 0;
}

