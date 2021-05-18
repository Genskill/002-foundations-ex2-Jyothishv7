#include <stdio.h>
#include <cs50.h>

void main()

{
 
 int pat =get_int("enter the pattern u need(1 or 2)\n");
 int rows =get_int("Enter the number of rows =\n ")
 if(pat == 1)
 {
  for(int x=0; x<rows; ++x)
  {
   for(int y=x; y< rows; ++y)
   {
     printf("#");
   }
   printf("\n");
  }
 }

 else if(pat == 2)
 {
 	for(int i=0; i<=rows;++i)
 	{
 		for(int j=0;j<rows;++j)
 		{ 
 			if((i+j)<=(rows-1))
 			 printf(" ");
 			else
 			 printf("#");
 		}
 		printf("\n");
 	}
 }
