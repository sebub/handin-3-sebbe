#include <stdio.h>
#include <math.h>
double g_x(double a);
double h_x(double b);
double get_sum(double a, double h, int n, double (*funk)(double));
double trap(double a, double b, int n, double (*test)(double));

int main(void)
{
   double a = 7,b = 8, a2= -2,b2 = 2,u,o;
   int v[] = {2,4,8,16,32,64,128,256,512, 1024, 2048}, n;


    for (int i = 0; i < (sizeof(v)/sizeof(int)); ++i) {
        n = v[i];
        u = trap(a,b,n,g_x);
        o = trap(a2,b2,n,h_x);
        printf("area of g(x) at %d intervals %lf\n",v[i], u);
        printf("area of h(x) at %d intervals %lf\n",v[i], o);
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

double get_sum(double a, double h, int n, double (*funk)(double)){
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += funk(a+h*i);
        //printf("%lf\n",sum);
    }
    //printf("%lf",sum);

    return sum;
}

double trap(double a, double b, int n, double (*test)(double)){
    double h = (b-a)/n;
    double sum = get_sum(a, h, n, test);
    return (h/2)*(test(a)+test(b) + (2 * (sum)));


}