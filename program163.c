
 #include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<io.h>
 #include<fcntl.h>
 
 int main()
 {
	int fd = 0, iRet = 0;	// fd - file descriptor.
    char Fname[30];
	char Data[6];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
    fd = open(Fname,O_RDWR);

    if(fd == -1)
	{
	   printf("Unable to open file");	
	   return -1;
	}	
    else
    {
		printf("file succesfully opened with FD : %d\n",fd);
	}

    iRet = read(fd,Data,6);

    write(1,Data,iRet);	
	
	return 0;
 }
 