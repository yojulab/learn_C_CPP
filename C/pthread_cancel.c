#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h> 

int       thr_id = 1;
pthread_t p_thread[3];

void* do_loop1(void *data)
{
    int i;

    int me = *((int *)data);
    for (i = 0; i < 10; i++)
    {
        printf("%d - Got %d\n", me, i);
        sleep(1);
    }	
pthread_exit(0);

}

void* do_loop2(void *data)
{
    int i;

pthread_cancel(p_thread[0]);
pthread_cancel(p_thread[2]);
    int me = *((int *)data);
    for (i = 0; i < 10; i++)
    {
        printf("%d - Got %d\n", me, i);
        sleep(1);
    }	
pthread_exit(0);
}

void* do_loop3(void *data)
{
    int i;

    int me = *((int *)data);
    for (i = 0; i < 10; i++)
    {
        printf("%d - Got %d\n", me, i);
        sleep(1);

    }	

pthread_exit(0);
}

int main()
{
    int status;
    int a = 1;
    int b = 2;      
    int c = 3;      

while(1){
    thr_id = pthread_create(&p_thread[0], NULL, do_loop1, (void *)&a);
    thr_id = pthread_create(&p_thread[1], NULL, do_loop2, (void *)&b);
    thr_id = pthread_create(&p_thread[2], NULL, do_loop3, (void *)&c);

    pthread_join(p_thread[0], (void **) &status);
    pthread_join(p_thread[1], (void **) &status);
    pthread_join(p_thread[2], (void **) &status);

    printf("programing is end\n");
} 
   return 0;
}
