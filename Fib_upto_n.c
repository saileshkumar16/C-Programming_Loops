#include <stdio.h>

int main() {
    
int a = 0;
int b = 1;
int c=0;

int  n =20; // n terms range

for(int i =1; i<=n; i++)
{
    printf(" %d",c);
    a = b;
    b = c;
    c = a + b;
}

    return 0;
}
