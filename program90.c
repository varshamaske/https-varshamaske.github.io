
 // Accept N numbers from user and check whether it contains 11 or not.
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 
 bool CheckNumber(int Arr[],int iSize) 
 {
   int i = 0;
   bool bAns = false;
   for(i = 0; i < iSize; i++)
   {
	   if(Arr[i] == 11)
	   {
		 bAns = true;
		 break;
	   }
   }
    return bAns;
 }

 int main()
 {
   int *ptr = NULL, iRet = 0;
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
   
   bRet = CheckNumber(ptr,iLength);
   
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