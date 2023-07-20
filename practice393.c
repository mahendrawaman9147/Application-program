#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the name that you want to create a file\n");
    scanf("%s",Fname);

    fd = creat(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully open %d\n",fd);
    }
    close(fd);
    return 0;
}