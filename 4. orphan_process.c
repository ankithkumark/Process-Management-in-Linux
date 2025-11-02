// An orphan process is the one whose parent process has finished or terminated, though it remains running itself.
// Any orphaned process will be immediately adopted by the special init system process.

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	printf("	PID		PPID \n");
	if(fork() == 0){
		printf("CP - 	%d 		%d\n", getpid(), getppid());
		sleep(5);
		printf("CP - 	%d 		%d\n", getpid(), getppid());
	}
	else{
		printf("PP - 	%d 		%d\n", getpid(), getppid());
		sleep(1);
		printf("Parent process completed... \n");
	}
	exit(0);
}
