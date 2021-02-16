#include <iostream>
#include "basics.hpp"

void
test_add()
{
  std::cout << "\n~~~~ " << __func__ << "() ~~~~\n";
  
  // ...test add() with a Fraction and an integer...
  s4prc::Fraction f1{1,2};
  int i = 1;

  s4prc::Fraction f2 = s4prc::add(f1, i);

  std::cout << "test add() : " << f1.numer << "/" << f1.denom << " + " << i << " = " << f2.numer << "/" << f2.denom << '\n';
  
  // ...test add() with an Interval and a real...
  s4prc::Interval i1{2.,5.};
  double a = 1.5;

  s4prc::Interval i2 = s4prc::add(i1, a);

  std::printf("test add() : [%f;%f] + %f = [%f;%f]\n", i1.low, i1.high, a, i2.low, i2.high);

  // ...test + with a Fraction and an integer...
  s4prc::Fraction f3 = f2 + i;

  std::printf("test + : %d/%d + %d = %d/%d\n", f2.numer, f2.denom, i, f3.numer, f3.denom);
  
  // ...test + with an Interval and a real...
  s4prc::Interval i3 = i2 + a;

  std::printf("test + : [%f;%f] + %f = [%f;%f]\n", i2.low, i2.high, a, i3.low, i3.high);
}

void
test_multiply()
{
  std::cout << "\n~~~~ " << __func__ << "() ~~~~\n";

  // ...test multiply() with a Fraction and an integer...
  s4prc::Fraction f1{1,2};
  int i = 1;

  s4prc::Fraction f2 = s4prc::multiply(f1, i);

  std::cout << "test multiply() : " << f1.numer << "/" << f1.denom << " * " << i << " = " << f2.numer << "/" << f2.denom << '\n';
  
  // ...test multiply() with an Interval and a real...
  s4prc::Interval i1{2.,5.};
  double a = 1.5;

  s4prc::Interval i2 = s4prc::multiply(i1, a);

  std::printf("test multiply() : [%f;%f] * %f = [%f;%f]\n", i1.low, i1.high, a, i2.low, i2.high);

  // ...test * with a Fraction and an integer...
  s4prc::Fraction f3 = f2 * i;

  std::printf("test * : %d/%d * %d = %d/%d\n", f2.numer, f2.denom, i, f3.numer, f3.denom);
  
  // ...test * with an Interval and a real...
  s4prc::Interval i3 = i2 * a;

  std::printf("test * : [%f;%f] * %f = [%f;%f]\n", i2.low, i2.high, a, i3.low, i3.high);
}

void
test_divide()
{
  std::cout << "\n~~~~ " << __func__ << "() ~~~~\n";

  // ...test divide() with an Interval and a real...
  s4prc::Fraction f1{1,2};
  int i = 1;

  s4prc::Fraction f2 = s4prc::divide(f1, i);

  std::cout << "test divide() : " << f1.numer << "/" << f1.denom << " / " << i << " = " << f2.numer << "/" << f2.denom << '\n';
  
  // ...test divide() with a Fraction and an integer...
  s4prc::Interval i1{2.,5.};
  double a = 1.5;

  s4prc::Interval i2 = s4prc::divide(i1, a);

  std::printf("test divide() : [%f;%f] / %f = [%f;%f]\n", i1.low, i1.high, a, i2.low, i2.high);

  // ...test / with an Interval and a real...
  s4prc::Fraction f3 = f2 / i;

  std::printf("test / : %d/%d / %d = %d/%d\n", f2.numer, f2.denom, i, f3.numer, f3.denom);
  
  // ...test / with a Fraction and an integer...
  s4prc::Interval i3 = i2 / a;

  std::printf("test / : [%f;%f] / %f = [%f;%f]\n", i2.low, i2.high, a, i3.low, i3.high);
}

int main(int argc, char const *argv[])
{
	test_add();
	test_multiply();
	test_divide();
	return 0;
}