#ifndef HEADER_H
#define HEADER_H

typedef struct{
int led_no;
int *status;
} led;
led* init(int n);
void sett(led* l);
void reset(led* l);
void toggle(led* l,int n,int m);
#endif
