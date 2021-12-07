
 // Accept five numbers from user and perform addition of that numbers.
 
 #include<stdio.h>
 
 int main()
 {
   int Arr[5]; // Array of 5 integers
   int iSum = 0, iCnt = 0;

   printf("Enter numbers\n");

   for(iCnt = 0; iCnt < 5; iCnt++)
    {
	  scanf("%d",&Arr[iCnt]);
    }
 /*
    iSum = iSum + Arr[0];
    iSum = iSum + Arr[1];
    iSum = iSum + Arr[2];
    iSum = iSum + Arr[3];
    iSum = iSum + Arr[4];  
 */
 
   for(iCnt = 0; iCnt < 5; iCnt++)
    {
	  iSum = iSum + Arr[iCnt];
    } 
   
   printf("Addition is :%d\n",iSum);   
	
   return 0; 
 }