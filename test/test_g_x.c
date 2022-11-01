#include "../src/functions.h"
#include <assert.h>
int main(){

    //Testing g(x) function with values
    //x1 = 0
    //x2 = 2
    //iterations 4000
    //g(x) area from 0 to 2 should be 2.469
    double a = trap(0,2,4000,g_x);
    printf("got %lf expected %lf\n", a, 2.469);
    assert(a>2.45 && a < 2.47);

    //Testing g(x) function with values
    //x1 = 0
    //x2 = 2
    //iterations 4000
    //g(x) area from 7 to 9 should be 105.633
    double b = trap(7,9,4000,g_x);
    printf("got %lf expected %lf\n", b, 105.633);
    assert(b>105.6 && b < 105.7);
}