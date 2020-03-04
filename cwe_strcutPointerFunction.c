#include <stdio.h>

struct member{
	char name[10];
	unsigned int grade;
} ;

void print_list(struct member*, int);
void read_list(struct member*, int);

int main(){
	const int size = 2;
	struct member *list;	
	
	read_list(list, size);
	
	print_list(list, size);
}

void print_list(struct member *list, int size){
	printf("Please, Member Information\n");
	for(int i=0; i<size; i++){
		printf("Name(String) : %s, Grade(number) : %d\n",(list+i)->name,(list+i)->grade);
	}
}

void read_list(struct member *list, int size){
	for(int i=0; i<size; i++){
		printf("Please, Input Member Information\n");
		printf("Name(String) : ");
		scanf("%s",&(list+i)->name);	
		printf("Grade(number) : ");
		scanf("%d",&(list+i)->grade);	
	}
}
