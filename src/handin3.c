#include <stdio.h>
#include <math.h>
double g_x(double a);
double h_x(double b);
double get_sum(double h, int n, double (*funk)(double));
double trap(double a, double b, int n, double (*test)(double));

int main(void)
{
   double a = 0,b = M_PI, a2= -2,b2 = 2,u,o;
   int v[] = {2,4,8,16,32,64,128}, n;

    for (int i = 0; i < 7; ++i) {
        n = v[i];
        u = trap(a,b,n,g_x);
        o = trap(a2,b2,n,h_x);
        printf("%lf\n",u);
        printf("%lf\n",o);
    }
}

double g_x(double a){
    return (pow(a,2)) * (sin(a));
}

double h_x(double b){
    if(b<2)
    return sqrt(4 - (pow(b,2)));
    else
    return sqrt(4 - (pow(b-2,2)));
}

double get_sum(double h, int n, double (*funk)(double)){
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += funk(h*i);
    }
    return sum;
}

double trap(double a, double b, int n, double (*test)(double)){
    double h = (b-a)/n;
    double sum = get_sum(h, n, test);
    return (h/2)*(test(a)+test(b) + 2 * (sum));


}