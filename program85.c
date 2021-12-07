
 // Accept N numbers from user and return Largest number of that numbers.
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int Maximum(int Arr[],int iSize) 
 {
   int iCnt = 0, i = 0, iMax = Arr[0];

   for(i = 0; i < iSize; i++)
    {
	 if((Arr[i] > iMax))
	 {
		iMax = Arr[i];
	 }
    } 
    return iMax;
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
   
   iRet = Maximum(ptr,iLength);
   
   printf("Largest number is : %d\n",iRet);
   
   free(ptr);
   return 0; 
 }