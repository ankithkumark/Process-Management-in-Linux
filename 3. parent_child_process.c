// How to distinguish between the parent and child process using the return value of fork - 
//   non-zero (pid of child) - Parent process
//   0 - Child process

#include<stdio.h>
#include<unistd.h>

int main(){
	printf("Program to understand the fork() return value \n");

	if(fork() == 0){
		printf("Child Process - PID = %d \n", getpid());
		printf("Child Process - PPID = %d \n", getppid());
	}
	else{
		printf("Main Process - PID = %d \n", getpid());
		printf("Main Process - PPID = %d \n", getppid());
	}
  
	return 0;
}
