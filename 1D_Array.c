#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r[1000],i,s,a=0;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        scanf("%d",&r[i]);
    }
     for(i=1;i<=s;i++)
    {
        a+=r[i];
    }
     printf(" %d ",a);
    return 0;
}
