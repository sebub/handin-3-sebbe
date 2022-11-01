#include <stdio.h>
#include <math.h>

double g_x(double a);

double h_x(double b);

/***
 * This function is used to calculate the sum part of the trapezoidal rule all parameters are passed to this function from trap().
 * @param a Start point on the x axis
 * @param h Length of subintervals
 * @param n Number of subintervals
 * @param funk The function you want to calculate area of
 * @return Sum of the given function [i=1 ... n] f(x_i)
 */
double get_sum(double a, double h, int n, double (*funk)(double));

/***
 * This function approximates the area under a given function from point a to point b using the trapezoidal rule.
 * @param a Start point on the x axis
 * @param b Endpoint on the x axis
 * @param n Number of subintervals the higher the value the more accurate result
 * @param funk The function you want to calculate area of
 * @return Approximated area under of the input function over the interval a to b
 */
double trap(double a, double b, int n, double (*funk)(double));


#ifndef HANDIN3_FUNCTIONS_H
#define HANDIN3_FUNCTIONS_H

#endif //HANDIN3_FUNCTIONS_H