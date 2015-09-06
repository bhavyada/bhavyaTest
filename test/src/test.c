/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
int main(){
float a=0.0f,b=1.0f,c=2.0f;float *d;
    float * arr[]={&a,&b,&c};
    b=a+c;
    d = arr[1];
    printf("%f",*arr[2]);
    return 0;
}
