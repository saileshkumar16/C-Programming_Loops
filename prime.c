#include <stdio.h>

int main() {
    
    int n = 11;
    int count=0;
    
    for(int i=1; i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    
    if(count>2)
    printf("%d is not a prime",n);
    else
    printf("%d is a prime",n);

    return 0;
}
