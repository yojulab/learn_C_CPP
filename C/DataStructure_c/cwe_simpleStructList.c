#include <stdlib.h>
#include <stdio.h>
struct NODE{
	struct NODE *next;
	int value;
};
	
int main(void)
{
	struct NODE  *head = NULL; /* must initialize it to NULL */
	head = malloc(sizeof(struct NODE));
  	head -> value = 587;
	head -> next = NULL;
	
	struct NODE *temp01 = NULL; /* must initialize it to NULL */
	temp01 = malloc(sizeof(struct NODE));
	temp01 -> value = -472;
	temp01 -> next = NULL;
	head -> next = temp01;

	struct NODE *temp02 = NULL; /* must initialize it to NULL */
	temp02 = malloc(sizeof(struct NODE));
	temp02 -> value = 321;
	temp02 -> next = NULL;
	temp01 -> next = temp02;

	struct NODE *temp03 = NULL; /* must initialize it to NULL */
	temp03 = malloc(sizeof(struct NODE));
	temp03 -> value = 121;
	temp03 -> next = NULL;
	temp02 -> next = temp03;

	printf("\nPrint the whole list: ");
	int count = 0;
	while (head != NULL)
	{
		printf("%d ", head -> value);
		head = head -> next;
		count++;
	}
	while (head != NULL)
	{
		free(head -> next);
	}

	printf("\n memory count : %d\n", count);
	return EXIT_SUCCESS;
}