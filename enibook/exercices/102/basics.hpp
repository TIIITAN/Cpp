#ifndef BASICS_HPP
#define BASICS_HPP

namespace s4prc {

struct Fraction
{
  int numer, denom;
};

struct Interval
{
  double low, high;
};

Fraction
add(Fraction f,
    int i);

Interval add(Interval i, double a);

Fraction operator+(Fraction f, int a);

Interval operator+(Interval i, double a);

Fraction
multiply(Fraction f,
         int i);

Interval multiply(Interval i, double a);

Fraction operator*(Fraction f, int a);

Interval operator*(Interval i, double a);

Interval
divide(Interval i,
       double d);

Fraction divide(Fraction f, int i);

Fraction operator/(Fraction f, int a);

Interval operator/(Interval i, double a);

} //s4prc
	
#endif