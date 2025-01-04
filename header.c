#include <stdio.h>
#include <stdlib.h>
#include "header.h"
*led init(int n){
    led *l = (led *)malloc(n * sizeof(led));
    for(int i=0;i<n;i++){
        led[i].led_no=i+1;
        led[i].status= malloc(sizeof(bool));
        *(led[i].status)=0;
    }
    return l;
}
void sett(led* l){
    *(led->status) = 1;

}
void reset(led* l){
    *(led->status) = 0;

}
void toggle(led* l,int n,int m){
    for(int i=0;i<m;i++){
        int a[n]=0;
        int x=i;
        for(int j=n-1;j>=0;j++){
            if(x!=0){
                a[j]=x%2;
                x=x/2;
            }
            else
                break;
        }
        for(int k=0;k<n;k++){
        if(a[k]==1){
            sett((l+i));
            printf("LED %d : ON",*((led+i)->led_no));
        }
        if(a[k]==0){
            reset((l+i));
            printf("LED %d : OFF",*((led+i)->led_no));
        }
        }
}
