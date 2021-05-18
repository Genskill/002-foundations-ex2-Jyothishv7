#include <stdio.h>
#include <cs50.h>

void main()

{
 int i,j;
 int pat =get_int("enter the pattern u need(1 or 2)\n");
 int rows =get_int("Enter the number of rows =\n ");
 if(pat == 1)
 {
  for(i=0; i<rows; ++i)
  {
   for(j=i; j< rows; ++j)
   {
     printf("#");
   }
   printf("\n");
  }
 }

 else if(pat == 2)
 {
  for(i=1; i<=rows; ++i)
   {
     for(j=i; j<rows; ++j)
       {
            printf(" ");
       }
        
     for(j=1; j<=i; ++j)
        {
            printf("#");
        }
        
        printf("\n");
    }
 }
 
}
