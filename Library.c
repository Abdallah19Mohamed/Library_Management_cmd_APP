#include"Library.h"
#include <conio.h>


u32 INDEX;
u32 counter;								

u32 AddBook(struct library *pntr)
{
	printf ("Enter Book name : ");
	scanf (" %[^\n]%*c",pntr[INDEX].book_name);
	printf ("Enter author name : ");
	scanf (" %[^\n]%*c",pntr[INDEX].author_name);
	printf ("Enter price = ");
	scanf ("%f",&pntr[INDEX].price);
	printf("\n Your Book Added Successfully \n \n");
	counter++;
	INDEX++;
}


void ViewBooks(struct library  *pntr)
{
	u16 i;
	for( i=0; i<counter ; i++ )
	{
		printf("*****************************************\n");
		
		printf("Book %d  : \n \n",i+1);
		printf ("Book Name = %s\n",pntr[i].book_name);
		printf ("Author Name = %s\n",pntr[i].author_name);
		printf ("Price = %.2f\n\n",pntr[i].price);
	}	
	
}

void RemoveBook(struct library *pntr,int var)
{
	u16 j;
	printf(" \t Book Number %d Deleted \n", var+1 );

	for( j=0; j<counter-1 ; j++ ) 
	{
		pntr[var] = pntr[var+1] ;
		var++;
	}
	INDEX--;   				       
	
	counter--;
}
