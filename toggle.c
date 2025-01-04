#include <stdio.h>
#include "header.h"
int main(){
    int m,n;
    printf("Enter the number of led s");
    scanf("%d",&n);
    printf("Enter the number of times to toggle");
    scanf("%d",&m);

    led* leds=init(n);
    toggle(leds,n,m);


}
