#include <iostream>
#include <string>
#include "basics.hpp"

void
test_countChar(std::string c)
{
  //printf("\n~~~~ %s() ~~~~\n", __func__);
  std::cout << "\n~~~~" << __func__ << "() ~~~~\n";
  const std::string msg="Here is a sentence!";
  const int count=s4prc::countChar(msg, c);
  //printf("<%s> contains %d <%c>\n", msg, count, c);
  std::cout << "<" << msg << "> contains " << count << " <" << c << ">\n";
}

int main(int argc, char const *argv[])
{
	test_countChar("a");
	test_countChar("e");
	return 0;
}