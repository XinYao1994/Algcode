#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int input[11];
    int i, mon, day, year;
    while(scanf("%d-%d-%d", &year, &mon, &day)!=EOF){
        mon=mon-1;
        if((year%100!=0 && year%4==0) || (year%400==0)){
            for(i=0; i<mon; i++){
                day += m[i];
            }
        }
        else{
            for(i=0; i<mon; i++){
                day += n[i];
            }
        }
        printf("%d\n", day);
    }
    return 0;
}
