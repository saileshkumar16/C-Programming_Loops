#include <stdio.h>
#include <math.h>
int main() {
    
    int num = 98985;
    
    int ld = num % 10; // 5(unit digit)
    
    int digits = (int)log10(num); // log(98765) ~ 4.99 -> 4
    int power = pow(10,digits); // 10^4
    
    
    int fd = num / power; // 9(first digit)
    
    int md = num % power; // 8765
    
    md = md / 10; // 876 middle number
    
    int res = (ld * power) + (md * 10) + (fd*1); 
    
    printf("%d",res);

    return 0;
}
