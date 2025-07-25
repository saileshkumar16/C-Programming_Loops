HCF of 2 numbers:

#include <stdio.h>
#include <math.h>

int main() 
{
    int a =12;
    int b = 18;
    
    int range = (a<b) ? a : b;
    int max=1;
    
    for(int i=2; i<=range;i++)
    {
        if(a%i==0 && b%i==0)
        max = i;
    }
    
    printf("%d",max);

    return 0;
}
