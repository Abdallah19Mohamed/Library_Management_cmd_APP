#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "main.h"
int main()
{
   struct library book[100];
   u8 book_name[30];
   u8 choice;
   u32 n;
   
   extern u32 counter;
   
	    printf("======================================================================\n");
		printf("                       WELCOME TO MY LIBRARY                             \n");
	    printf("======================================================================\n");


   while(1)
   {
	   printf("\n");
      printf("To  Add new book press  '1' \n");
      printf("To View the books press '2' \n");
      printf("Number of books press   '3' \n");
	  printf("To Delete a book press  '4' \n");
      printf("To Exit press   '5' \n \n ");
	  printf("**************************************************\n");

      printf ("Your Choice is : ");
      scanf("%d",&choice);
	  
      switch (choice){
        case 1:
		
				AddBook(book);				
				break;
      
		case 2:
		
			  	if(counter==0)
				{
					printf("\n Sorry The Library Is Empty :( \n \n");
				}
				else
				{
					ViewBooks(book);							
				}
				break;
				
	    case 3:
		
				if(counter==0)
				{
					printf("The Library Is Empty !!\n\n");
				}
				else
				{
					printf("No of books in library : (%d)\n\n", counter);
				}
				break;

		case 4:
		
				printf("Enter Number Of Book Your Want To Remove \n");
				scanf("%d",&n);		
				RemoveBook(book,n-1);
				break;
				
		case 5:
		
				printf("GOOD BYE \n");
				printf("Do not forget to rank our project  \n");

				exit(0);
	  }
   }
}