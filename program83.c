
 // Accept N numbers from user and return summation of odd numbers.
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int CountRange(int Arr[],int iSize) 
 {
   int iCnt = 0, i = 0, iSum = 0;
 
   for(i = 0; i < iSize; i++)
    {
	 if((Arr[i] > 10)&&(Arr[i] < 20))
	 {
		iCnt++;
	 }
    } 
    return iCnt;
 }

 int main()
 {
   int *ptr = NULL;
   int i = 0, iLength = 0; 
   int iRet = 0;
   
   printf("Enter number of elements\n");
   scanf("%d",&iLength);
   
   ptr = (int *)malloc(sizeof(int)*iLength);
   
   printf("Enter numbers\n");
   
   for(i = 0; i < iLength; i++)
   {
	   scanf("%d",&ptr[i]);
   }
   
   iRet = CountRange(ptr,iLength);
   
   printf("Count is : %d\n",iRet);
   
   free(ptr);
   return 0; 
 }