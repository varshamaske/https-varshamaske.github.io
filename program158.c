
 #include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<io.h>
 
 int main()
 {
	int fd = 0;	// fd - file discriptor.
    char Fname[30];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
    fd = creat("LB17.txt",0777);

    if(fd == -1)
	{
	   printf("Unable to create file");	
	}	
    else
    {
		printf("file succesfully created\n");
	}	
	return 0;
 }
 