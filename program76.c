
 // Accept five numbers from user and perform addition of that numbers.
 
 #include<stdio.h>
 
 int Addition(int *Brr,int iSize) 
 {
   int iCnt = 0, iSum = 0;
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
    {
	  iSum = iSum + Brr[iCnt];
    } 
   return iSum;
 }

 int main()
 {
   int Arr[5];                // Array of 5 integers
   int iSum = 0;
   int iCnt = 0, iRet = 0;

   printf("Enter numbers\n");

   for(iCnt = 0; iCnt < 5; iCnt++)
    {
	  scanf("%d",&Arr[iCnt]);
    }

   iRet = Addition(Arr,5);  // Addition(100)
   
   printf("Addition is :%d\n",iRet);   
	
   return 0; 
 }