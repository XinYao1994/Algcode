#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    /* 153 370 371 407
    int i=0;
    for(i=100; i<1000; i++){
        int a = i/100;
        int b = (i - a * 100) / 10;
        int c = i % 10;
        if(a*a*a+b*b*b+c*c*c == i){
            printf("%d ", i);
        }
    }
    */
    int num;
    while(scanf("%d", &num)!=EOF){
        if(num==153){
            printf("True\n");
        }
        else if(num==370){
            printf("True\n");
        }
        else if(num==371){
            printf("True\n");
        }
        else if(num==407){
            printf("True\n");
        }
        else{
            printf("False\n");
        }
    }
}
