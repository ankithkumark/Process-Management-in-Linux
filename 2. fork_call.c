#include<stdio.h>
#include<unistd.h>

int main(){
	int x = 5;
	printf("Start of program... \n");
	printf("Parent Process - PID = %d, and PPID = %d \n", getpid(), getppid());

	x = fork();
	printf("PID = %d, PPID = %d, x = %d \n", getpid(), getppid(), x);
	printf("End of program... \n");

	sleep(8);
	return 0;
}
