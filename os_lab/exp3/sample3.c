#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int main(){
    char data[] = "this line will be written to the file\n";
    int fd;

    fd = open("file.txt",O_WRONLY | O_CREAT | O_APPEND,0644);
    write(fd,data,strlen(data));
    close(fd);
    return 0;
}