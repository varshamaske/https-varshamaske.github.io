
 // Accept N numbers from user and return smallest number of that numbers.
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int Minimum(int Arr[],int iSize) 
 {
   int i = 0, iMin = Arr[0];

   for(i = 1; i < iSize; i++)
    {
	 if((Arr[i] < iMin))
	 {
		iMin = Arr[i];
	 }
    } 
    return iMin;
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
   
   iRet = Minimum(ptr,iLength);
   
   printf("est number is : %d\n",iRet);
   
   free(ptr);
   return 0; 
 }