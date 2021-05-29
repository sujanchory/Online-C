#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
     {
        scanf("%d", arr + i);
     }
     int st=0,en=num-1,temp=0;
     for(;st<en;st++,en--)
     {
         temp=arr[st];
         arr[st]=arr[en];
         arr[en]=temp;
         
     }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
