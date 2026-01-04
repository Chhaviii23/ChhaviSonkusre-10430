#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    int count = 0;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    
    printf("Total Divisor = %d\n", count);

    printf("NAME :- Chhavi Sonkusre \nERP :- 10430");
    
    return 0;
}
