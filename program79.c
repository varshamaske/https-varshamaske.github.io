
 // Accept N numbers from user and return average of that N numbers.
 
 #include<stdio.h>
 #include<stdlib.h>
 
 float Average(int Arr[],int iSize) 
 {
   int i = 0, iSum = 0;
   float fResult = 0.0f;
   
   for(i = 0; i < iSize; i++)
    {
	  iSum = iSum + Arr[i];
    } 
   
   fResult = (float)iSum/(float)iSize;  // Explicite typecasting
   return fResult;
 }

 int main()
 {
   int *ptr = NULL;
   int i = 0, iLength = 0; 
   float fRet = 0.0f;
   
   printf("Enter number of elements\n");
   scanf("%d",&iLength);
   
   ptr = (int *)malloc(sizeof(int)*iLength);
   
   printf("Enter numbers\n");
   
   for(i = 0; i < iLength; i++)
   {
	   scanf("%d",&ptr[i]);
   }
   
   fRet = Average(ptr,iLength);
   
   printf("Average is : %0.2f\n",fRet);
   
   free(ptr);
   return 0; 
 }