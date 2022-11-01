#include "functions.h"

double g_x(double x)//defines the function g(x)
{
    return (pow(x, 2)) * (sin(x));
}

double h_x(double x)//defines the function g(x)
{
    return sqrt(4 - (pow(x, 2)));
}


double get_sum(double a, double h, int n, double (*funk)(double)) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {//Runs the loop for the number of intervals given
        sum += funk(a + h * i);  //increments sum by the given f(startpointx + length of interval * i)
    }
    return sum;
}

double trap(double a, double b, int n, double (*funk)(double)) {
    double h = (b - a) / n; //calculate the length of subintervals
    double sum = get_sum(a, h, n, funk); //calls function get_sum
    return (h / 2) * (funk(a) + funk(b) + (2 * (sum))); //Use the trapezoidal rule to get approximated area and returns it
}