#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k)
 {
  //Write your code here.
  int i,j,a,o,x,maxand=0,maxor=0,maxxor=0;
  for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          a=i&j;
          o=i|j;
          x=i^j;
          
          if(maxand<a && a<k)
          {
              maxand=a;
          }
          if(maxor<o && o<k)
          {
              maxor=o;
          }
          if(maxxor<x && x<k)
          {
              maxxor=x;
          }   
      }
      
  }
 
}

int main() {
    int n, kmaxand,maxor,maxxor;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    printf("%d\n%d\n%d",maxand,maxor,maxxor);
 
    return 0;
}

