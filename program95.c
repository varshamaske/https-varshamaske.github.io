
 // Accept N numbers from user and check whether it contains 11 or not.
 
 #include<stdio.h>
 #include<stdlib.h>

 int CheckLastOcc(int Arr[], int iSize, int iNo) 
 {
   int i = 0, iIndex = -1;

   for(i = 0; i < iSize; i++)
   {
	  if(Arr[i] == iNo)
	   {
		 iIndex = i;
	   }
   }
 	 return iIndex;
 }

 int main()
 {
   int *ptr = NULL, iRet = 0, iValue = 0;
   int i = 0, iLength = 0; 
   
   printf("Enter number of elements\n");
   scanf("%d",&iLength);
   
   ptr = (int *)malloc(sizeof(int)*iLength);
   
   printf("Enter numbers\n");
   
   for(i = 0; i < iLength; i++)
   {
	   scanf("%d",&ptr[i]);
   }
   
   printf("Enter number to search\n");
   scanf("%d",&iValue);
   
   iRet = CheckLastOcc(ptr, iLength, iValue);
   
   if(iRet == -1)
   {
	 printf("There is no such number\n");
   }
   else
   {
	 printf("Number is there at index : %d\n",iRet);
   }
   
   free(ptr);
   return 0; 
 }