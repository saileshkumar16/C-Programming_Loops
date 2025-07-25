#include <stdio.h>

int main()
{
    int num=1123;
    int digit;
    int freq[10] = {0};// To store count of digits 0–9
    
    while(num>0)
    {
        digit = num % 10;
        freq[digit] = freq[digit] + 1;
        num = num / 10;
    }
    
    for(int i=0;i<10;i++)
    {
        if(freq[i]>0)
        {
            printf("%d has printed %d times\n",i,freq[i]);
        }
    }
    return 0;
}
