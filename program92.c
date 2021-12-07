
 // Accept N numbers from user and check whether it contains 11 or not.
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 
 bool CheckNumber(int Arr[], int iSize, int iNo) 
 {
   int i = 0;

   for(i = 0; i < iSize; i++)
   {
	   if(Arr[i] == iNo)
	   {
		 break;
	   }
   }
   if(i == iSize)
   {
     return false;
   }
   else
   {
	 return true;
   }
 }

 int main()
 {
   int *ptr = NULL, iRet = 0, iValue = 0;
   int i = 0, iLength = 0; 
   bool bRet = 0;
   
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
   
   bRet = CheckNumber(ptr, iLength, iValue);
   
   if(bRet == true)
   {
	 printf("Number is there\n");
   }
   else
   {
	 printf("Number is not there\n");
   }
   
   free(ptr);
   return 0; 
 }