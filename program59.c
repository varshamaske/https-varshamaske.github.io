 
  // Input : 6
  
  // Output : A  B  C  D  E  F 
  

 #include<stdio.h>

 void Display(int iNo)
  {
	int iCnt = 0;
	char ch = '\0';
	
	for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
	  {
		  printf("%c\n",ch);
	  }
  }
 
 int main()
  {
   int iValue = 0;
   
   printf("Enter number\n");
   scanf("%d",&iValue);
   
   Display(iValue);
   
   return 0;
  }  
	
 