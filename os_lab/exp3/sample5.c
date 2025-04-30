#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 11

int main(){

    // int fd;
    // char buffer[BUFFER_SIZE];

    // fd = open("destination.txt",O_RDONLY);

    // lseek(fd,10,SEEK_SET);

    // read(fd,buffer,BUFFER_SIZE-1);
    // buffer[BUFFER_SIZE-1] = '\0';

    // printf("%s\n",buffer);
    // close(fd);
    // return 0;


    pid_t child_pid;

    child_pid = fork();

    if(child_pid ==0){
        //child process

        printf("child process: PID = %d\n",getpid());
    }else if(child_pid>0){
        printf("parent process: PID = %d\n",getpid());
    }else{
        //fork failed
        // perror("fork failed");
        printf("fork failed\n");
        return 1;
    }

    return 0;

}