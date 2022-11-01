#include "functions.h"

int main(void) {
    double a = 0, b = M_PI, //Input to calculate area under g(x)
    a2 = -2, b2 = 2,  //Input to calculate area under g(x)
    u, o;
    int v[] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,2048}, //Array of values for 'n' to show the difference in approximation
    n;                                                                                                     //low and high number of intervals using the trapezoidal rule

    for (int i = 0; i < (sizeof(v) /
                         sizeof(int)); ++i) { //loop to approximate area for g(x) and h(x) for the given values a and b for each number of intervals in v[]
        n = v[i];
        u = trap(a, b, n, g_x);
        o = trap(a2, b2, n, h_x);
        printf("area of g(x) at %d intervals %lf\n", v[i], u);
        printf("area of h(x) at %d intervals %lf\n", v[i], o);

    }
}



