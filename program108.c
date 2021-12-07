
 #include<stdio.h>
 
 void DisplayTable()
 {
	 int iCnt = 0;
	 
	 printf("ASCII table is \n");
	 printf("***********************************\n");
	 printf("Decimal\tCharacter\n");
	 printf("***********************************\n");
	 for(iCnt = 0; iCnt <= 127; iCnt++)
	 {
		 printf("%d\t%c\n",iCnt,iCnt);
	 }
	 
 }
 int main()
  {
   
   DisplayTable();
	
   return 0;
	
  }