#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int MAX(int a,int b){
    if(a>b)
     return a;
    else 
     return b;}
  
int main() 
{

    int n,i,j;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      for(i=-n+1;i<n;i++)
      {
          for(j=-n+1;j<n;j++)
          {
              printf("%d ",MAX(abs(i),abs(j))+1);
          }
          printf("\n");
      }
    return 0;
}

