#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name that you want to creat \n");
    scanf("%s",Fname);

    fd = creat(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to creat\n");
        return -1;
    }
    else
    {
        printf("File is succesfuly creat %d\n" ,fd);
    }

    
    return 0;
}