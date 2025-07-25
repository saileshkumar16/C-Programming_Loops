#include <stdio.h>

int main() {
    // Write C code here
int n = 100;
int sum = 0;
for(int i = 1; i<=n; i++)
{
    if(i%2!=0)
    {
        sum = sum + i;
    }
}

printf("%d",sum);
    return 0;
}
