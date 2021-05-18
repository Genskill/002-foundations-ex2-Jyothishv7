#include <stdio.h>
#include <cs50.h>

void main()

{
 int i,j;
 int pat =get_int("Enter type of pattern (1 or 2)");
 int rows =get_int("Number of rows");
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
