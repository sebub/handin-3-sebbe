#include "../src/functions.h"
#include <assert.h>
int main(){

    //Testing h(x) function with values
    //x1 = -2
    //x2 = 0
    //iterations 4000
    //g(x) area from -2 to 0 should be 3.14
    double a = trap(-2,0,4000,h_x);
    printf("got %lf expected %lf\n", a, 3.1415);
    assert(a>3.141 && a < 3.142);


    //Testing h(x) function with values
    //x1 = 0
    //x2 = 2
    //iterations 4000
    //g(x) area from 0 to 2 should be 3.14
    double b = trap(0,2,4000,h_x);
    printf("got %lf expected %lf\n", b, a);
    assert(b>3.140 && b < 3.143);
}
