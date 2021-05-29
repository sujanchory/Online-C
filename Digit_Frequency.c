#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1000];
    int i,num[10]={0};
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        
        if(str[i]>=48 && str[i]<=57)
        {
         num[str[i]-48]++;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    
    return 0;
}

