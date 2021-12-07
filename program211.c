
 #include<stdio.h>
 #include<stdlib.h>
 
 typedef struct node
 {
	int data; 
    struct node *next;	 
 }NODE, *PNODE, **PPNODE;
 
 void Display(PNODE Head, PNODE Tail)
 {
	if((Head == NULL)&&(Tail == NULL))
	{
		return;
	}
	
	do
	{
	   printf("|%d|->", Head -> data);
	   Head = Head -> next;
	}while(Head != Tail -> next);
	 
	 printf("\n");
 }
 
 int Count(PNODE Head, PNODE Tail)
 {
	int iCnt = 0;
    do
	{
	   iCnt++;
	   Head = Head -> next;
	}while(Head != Tail -> next);
	
	return iCnt; 
 }
 
 void InsertFirst(PPNODE Head, PPNODE Tail, int no)
 {
	PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));	
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((*Head == NULL)&&(*Tail == NULL)) // LL is empty
	{
	  *Head = newn;
	  *Tail = newn;
	}
	else
	{
	  newn -> next = *Head;
      *Head = newn;	  
	}
	 (*Tail) -> next = *Head;  // To maintain circular nature
 }
 
 void InsertLast(PPNODE Head, PPNODE Tail, int no)
 {
	PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));	
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((*Head == NULL)&&(*Tail == NULL)) // LL is empty
	{
	  *Head = newn;
	  *Tail = newn;
	}
	else
	{
	   (*Tail) -> next = newn;
       *Tail = newn;	   
	}
	 (*Tail) -> next = *Head;  // To maintain circular nature  
 }
 
 void DeleteFirst(PPNODE Head, PPNODE Tail)
 {
	if((*Head == NULL)&&(*Tail == NULL))
	{
		return;
	}	
    else if(*Head == *Tail)
	{
      free(*Head);
      *Head = NULL;
      *Tail = NULL;	  
	}
    else
	{
	  *Head = (*Head) -> next;
	  free((*Tail) -> next);
	  (*Tail) -> next = *Head;
	}		
	 
 }
 
  void DeleteLast(PPNODE Head, PPNODE Tail)
 {
	 PNODE temp = *Head;
	 
	 if((*Head == NULL)&&(*Tail == NULL))
	{
		return;
	}	
    else if(*Head == *Tail)
	{
      free(*Head);
      *Head = NULL;
      *Tail = NULL;	  
	}
    else
	{
	   while(temp -> next != (*Tail))
	   {
		  temp = temp -> next;
	   }
       free(*Tail);
       *Tail = temp;
       (*Tail) -> next = *Head;   
	}
	 
 }
 
  void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
 {
	int size = 0;
	PNODE newn = NULL;
	PNODE temp = *Head;
	int i = 0;
	
	size = Count(*Head, *Tail);
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((ipos < 1)||(ipos > size+1))
	{
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(Head, Tail, no);
	}
	else if(ipos == size+1)
	{
		InsertLast(Head, Tail, no);
	}
	else
	{	
		for(i = 1; i < ipos - 1; i++)
		{
			temp = temp -> next;
		}
		
		newn -> next = temp -> next;
		temp -> next = newn;
	}
	 
 }
 
  void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
 {
	int size = 0;
	PNODE temp = *Head;
	PNODE targated = NULL;
	int i = 0;
	
	size = Count(*Head, *Tail);
	
	if((ipos < 1)||(ipos > size))
	{
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst(Head, Tail);
	}
	else if(ipos == size)
	{
		DeleteLast(Head, Tail);
	}
	else
	{	
		for(i = 1; i < ipos - 1; i++)
		{
			temp = temp -> next;
		}
        targated = temp -> next;	
        temp -> next = targated -> next;
		free(targated);
	} 
	 
 }
 int main()
 {
	 PNODE first = NULL;
	 PNODE last = NULL;
	 int iRet = 0;
	 
	 InsertFirst(&first, &last, 51);
	 InsertFirst(&first, &last, 21);
	 InsertFirst(&first, &last, 11);
	 
	 InsertLast(&first, &last, 101);
	 
	 InsertAtPos(&first, &last, 55, 3);
	 
	 Display(first, last);
	 
	 iRet = Count(first, last);
	 
	 printf("Number of elements are : %d\n", iRet);
	 
	 DeleteAtPos(&first, &last, 3);
	 
	 DeleteFirst(&first, &last);
	 
	 DeleteLast(&first, &last);
	 
	 Display(first, last);
	 
	 iRet = Count(first, last);
	 
	 printf("Number of elements are : %d\n", iRet);
	 
	 return 0;
 }