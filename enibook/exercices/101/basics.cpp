#include <iostream>
#include <string>
#include "basics.hpp"

namespace s4prc {

int
countChar(const std::string txt,
          std::string c)
{
  int count=0;
  for(const std::string &e: txt)
  {
    std::cout << "\n comparing " << c << " to " << &e << " \n";
    if(c==&e) count++;
  }
  return count;
}

} // namespace s4prc