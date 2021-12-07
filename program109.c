
 #include<stdio.h>
 
 void DisplayTable()
 {
	 int iCnt = 0;
	 
	 printf("ASCII table is \n");
	 printf("***********************************\n");
	 printf("Decimal\tHexadecimal\tOctal\tCharacter\n");
	 printf("***********************************\n");
	 for(iCnt = 0; iCnt <= 127; iCnt++)
	 {
		 printf("%d\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
	 }
	 printf("***********************************\n");
 }
 int main()
  {
   
   DisplayTable();
	
   return 0;
	
  }