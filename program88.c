
 // Accept N numbers from user and return Largest number of that numbers.
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int Difference(int Arr[],int iSize) 
 {
   int i = 0, iMin = Arr[0],iMax = Arr[0];
   int iDiff = 0;
   for(i = 1; i < iSize; i++)
    {
	 if(Arr[i] > iMax)
	 {
		iMax = Arr[i];
	 }
	 else if(Arr[i] < iMin)
	 {
		 iMin = Arr[i];
	 }
    iDiff = iMax - iMin;
	} 
    return iDiff;
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
   
   iRet = Difference(ptr,iLength);
   
   printf("Difference is : %d\n",iRet);
   
   free(ptr);
   return 0; 
 }