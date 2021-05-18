#include <stdio.h>
#include <cs50.h>

int main(void){
int i,j;
int pat=get_int("Enter type of pattern (1 or 2)");
int rows=get_int("Number of rows");
if(pat==1)
{
 for( i=rows;i>0;i--)
   {
     for( j=0;j<i;j++)
      { 
       printf("#");
      }
      printf("\n");
   }
 }
else if(pat==2)
{
  for(i=rows;i>0;i--)
    {
      for(j=0;j<rows;j++)
       {
         if(j>=i-1)
         {
          printf("#");
         }
         else
         printf(" ");
       }
      printf("\n");
     }
}
else
 printf("error");
};
