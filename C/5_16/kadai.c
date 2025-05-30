#include <stdio.h>

float chouhoukei(float a,float b);

int main(void){
    float c=chouhoukei(4.45,2.7);
    printf("面積は%fです\n",c);
    return 0;
}

float chouhoukei(float a,float b){
    float c;
    c=a*b;

    return c;
    
}