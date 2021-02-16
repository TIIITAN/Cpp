#include "basics.hpp"

namespace s4prc {

Fraction
add(Fraction f,
    int i)
{
  Fraction result={f.numer+i*f.denom, f.denom}; // (a/b)+c = (a+c*b)/b
  return result;
}

Interval add(Interval i, double a) {
	Interval result{i.low+a, i.high+a};
	return result;
}

Fraction operator+(Fraction f, int a) {
	return add(f, a);
}

Interval operator+(Interval i, double a) {
	return add(i, a);
}

Fraction
multiply(Fraction f,
         int i)
{
  Fraction result={f.numer*i, f.denom}; // (a/b)*c = (a*c)/b
  return result;
}

Interval multiply(Interval i, double a) {
	Interval result{i.low*a, i.high*a};
	return result;
}

Fraction operator*(Fraction f, int a) {
	return multiply(f, a);
}

Interval operator*(Interval i, double a) {
	return multiply(i, a);
}

Interval
divide(Interval i,
       double d)
{
  Interval result={i.low, i.low+(i.high-i.low)/d}; // reduce range
  return result;
}

Fraction divide(Fraction f, int i) {
	Fraction result{f.numer, f.denom*i};
	return result;
}

Fraction operator/(Fraction f, int a) {
	return divide(f, a);
}

Interval operator/(Interval i, double a) {
	return divide(i, a);
}

} //s4prc