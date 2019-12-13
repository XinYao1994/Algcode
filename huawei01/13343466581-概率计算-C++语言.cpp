#include <iostream>
#include <stdio.h>
#include <math.h>

/*
客车早上从A站发车的时刻和频率为：
出发时刻           8:00     8:03     8:05
频率               0.5       0.3       0.2


小明早上到达B站的时刻和频率为：
到站时刻           8:18     8:20     8:22     8:24
频率               0.4       0.3       0.1       0.2
*/
using namespace std;

/*
double nd(int mu, int sigma, int x){
    return exp(-(x-mu)*(x-mu)/(2*mu*mu))/(sigma * power(2*pi, 0.5));
}
*/
double normalCDF(double x){
    return erfc(-x/sqrt(2))/2;
}
int main()
{
    double p = 0.0;
    //p += 0.4 * (0.5 * (1-normalCDF(-1.0)) + 0.3 * (1-normalCDF(-2.5)) + 0.2 * (1-normalCDF(-3.5)));
    //p += 0.3 * (0.5 * (1-normalCDF(0.0)) + 0.3 * (1-normalCDF(-1.5)) + 0.2 * (1-normalCDF(-2.5)));
    //p += 0.1 * (0.5 * (1-normalCDF(1.0)) + 0.3 * (1-normalCDF(-0.5)) + 0.2 * (1-normalCDF(-1.5)));
    //p += 0.2 * (0.5 * (1-normalCDF(2.0)) + 0.3 * (1-normalCDF(0.5)) + 0.2 * (1-normalCDF(-0.5)));

    //p += 0.5 * (0.4 * (1-normalCDF(-1.0)) + 0.3 * (1-normalCDF(0.0)) + 0.1 * (1-normalCDF(1.0)) + 0.2 * (1-normalCDF(2.0)));
    //p += 0.3 * (0.4 * (1-normalCDF(-2.5)) + 0.3 * (1-normalCDF(-1.5)) + 0.1 * (1-normalCDF(-0.5)) + 0.2 * (1-normalCDF(0.5)));
    //p += 0.2 * (0.4 * (1-normalCDF(-3.5)) + 0.3 * (1-normalCDF(-2.5)) + 0.1 * (1-normalCDF(-1.5)) + 0.2 * (1-normalCDF(-0.5)));

    //printf("%.12f\n", normalCDF(-1.0)+normalCDF(1.0));
    //printf("%.12f\n", normalCDF(-1.5)+normalCDF(1.5));

    p += (1-normalCDF(-1.0)) * (0.5*0.4) + (1-normalCDF(0.0)) * (0.5*0.3) + (1-normalCDF(1.0)) * (0.5*0.1) + (1-normalCDF(2.0)) * (0.5*0.2) + (1-normalCDF(-2.5)) * (0.3*0.4+0.2*0.3);
    p += (1-normalCDF(-1.5)) * (0.3*0.3 + 0.2*0.1) + (1-normalCDF(-0.5)) * (0.3*0.1+0.2*0.2) + (1-normalCDF(0.5)) * (0.3*0.2) + (1-normalCDF(-3.5)) * (0.2*0.4);

    //p += normalCDF(1.0) * (0.5*0.4) + 0.5 * (0.5*0.3) + (1-normalCDF(1.0)) * (0.5*0.1) + (1-normalCDF(2.0)) * (0.5*0.2) + normalCDF(2.5) * (0.3*0.4+0.2*0.3);
    //p += normalCDF(1.5) * (0.3*0.3 + 0.2*0.1) + normalCDF(0.5) * (0.3*0.1+0.2*0.2) + (1-normalCDF(0.5)) * (0.3*0.2) + normalCDF(3.5) * (0.2*0.4);

    // 可以合并同类项减少计算量
    //p += normalCDF(1.0) * (0.5*0.4) + 0.5 * (0.5*0.3) + (1-normalCDF(1.0)) * (0.5*0.1) + (1-normalCDF(2.0)) * (0.5*0.2) + normalCDF(2.5) * (0.3*0.4+0.2*0.3);
    //p += normalCDF(1.5) * (0.3*0.3 + 0.2*0.1) + normalCDF(0.5) * (0.3*0.1+0.2*0.2) + (1-normalCDF(0.5)) * (0.3*0.2) + normalCDF(3.5) * (0.2*0.4);

    printf("%.12f\n", p);
    return 0;
}
