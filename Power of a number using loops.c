#include <stdio.h>

int main()
{
    int num=2;
    int res = 1;
    int power = 3;
    int i;
    
    for(i=1; i<=power; i++)
    {
        printf("%d\n",i);
        res = res * num;
    }
    printf("%d",res);
    
  
    return 0;
}
