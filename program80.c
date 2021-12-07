
 // Accept N numbers from user and count even number of that N numbers.
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int CountEven(int Arr[],int iSize) 
 {
   int iCnt = 0, i = 0;
 
   for(i = 0; i < iSize; i++)
    {
	 if((Arr[i] % 2) == 0)
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
   
   iRet = CountEven(ptr,iLength);
   
   printf("Number of even elements is : %d\n",iRet);
   
   free(ptr);
   return 0; 
 }