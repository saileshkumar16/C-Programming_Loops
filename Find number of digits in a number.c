#include <stdio.h>

int main() {
    // Write C code here
int n = 1234;
int count = 0;
while(n!=0)
{
    n = n / 10;
    count++;
}

printf("%d",count);
    return 0;
}
