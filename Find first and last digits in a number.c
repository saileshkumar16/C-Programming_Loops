#include <stdio.h>

int main() {
    // Write C code here
int n = 4567;
int ld = n%10;


printf("%d\n",ld);

while(n>=10)
{
    n = n /10;
    
}

printf("%d\n",n);
    return 0;
}
