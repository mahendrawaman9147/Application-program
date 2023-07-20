#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name that you want to open \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is succesfuly opened with FD %d\n" ,fd);
    }

    close(fd);
    return 0;
}