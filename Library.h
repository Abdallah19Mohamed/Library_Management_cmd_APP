#ifndef _LIBRARY_DS
#define _LIBRARY_DS

#include <stdio.h>
#include <strings.h>
#include<stdlib.h>
#include "STD_TYPES.h"

struct library{
   u8 book_name[40];
   u8 author_name[40];
   f32 price;
};

u32 AddBook(struct library *pntr);
void ViewBooks(struct library  *pntr);
void RemoveBook(struct library *pntr,int var);

#endif
