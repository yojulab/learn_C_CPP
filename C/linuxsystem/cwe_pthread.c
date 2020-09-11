#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void * start_thread(void *message){
	printf("%s\n", (const char *) message);
	return message ;
}

int main (void){
	pthread_t thing1, thing2, thing3 ;
	const char *message1 = "Thing 1";
	const char *message2 = "Thing 2";
	const char *message3 = "Thing 3";
	
	pthread_create (&thing1, NULL, start_thread, (void*) message1);
	pthread_create (&thing2, NULL, start_thread, (void*) message2);
	pthread_create (&thing3, NULL, start_thread, (void*) message3);

	pthread_join(thing1, NULL);
	pthread_join(thing2, NULL);
	pthread_join(thing3, NULL);

	return 0;
}