
 #include<stdio.h>
 #include<stdbool.h>
 
 char CapitalToSmall(char c)
 {
	if((c >= 'A')&&(c <= 'Z'))
	{
		return c + 32;
	}	
 }
 
 int main()
  {
   char ch = '\0', cRet = '\0';
   
   printf("Enter character\n");
   scanf("%c",&ch);
   
   cRet = CapitalToSmall(ch);
   printf("Small letter is : %c\n",cRet);
   
	return 0;
  }