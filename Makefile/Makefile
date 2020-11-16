# Refer : https://bowbowbow.tistory.com/12

Execute : memoObject calendarObject mainObject
	gcc -o ExecuteDaily memo.o calendar.o main.o
	echo "Execute"
memoObject : 
	gcc -c -o memo.o memo.c
	echo "memoObject"
calendarObject : 
	gcc -c -o calendar.o calendar.c
	echo "calendarObject"
mainObject : main.c
	gcc -c -o main.o main.c
	echo "mainObject"

clean :
	rm *.o ExecuteDaily
	echo "clean"
	