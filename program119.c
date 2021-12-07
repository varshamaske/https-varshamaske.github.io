
 #include<stdio.h>
 #include<stdbool.h>
 
 void Count(char *str)
 {
  int cCnt = 0,sCnt = 0;
	
	while(*str != '\0')
	{
      if((*str >= 'A')&&(*str <= 'Z'))
	  {
		cCnt++;
	  }
	  else if((*str >= 'a')&&(*str <= 'z'))
	  {
		sCnt++;
	  }
	str++;
	}
	printf("Capital letters are : %d\n",cCnt);
	printf("Small letters are : %d\n",sCnt);
 }
 
 int main()
  {
   char Arr[20];
   
   printf("Enter String\n");
   scanf("%[^'\n']s",Arr);
   
   Count(Arr);
   
	return 0;
  }