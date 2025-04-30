#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){

    pid_t child_pid;

    child_pid = fork();
    if(child_pid ==0){
        //child process
        printf("child process: PID = %d\n",getpid());
        sleep(2);
        printf("child process: My parent PID = %d\n",getpid());
    }else if(child_pid > 0){
        //parent process
        printf("Parent Process: PID =%d\n",getpid());
        printf("Parent Process: Terminating\n");
        
    }else{
        printf("fork failed\n");
        return 1;
    }
    
}