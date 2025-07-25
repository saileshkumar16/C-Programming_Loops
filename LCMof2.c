#include <stdio.h>

int main() {
    
    int a = 10;
    int b= 15;
    
    int lcm;
    
    for(lcm = 1; lcm <= a*b ; lcm++)
    {
        if(lcm%a == 0 && lcm%b ==0)
        break;
    }
    
    printf("%d",lcm);
    return 0;
}
