//----------------------------------------------------------------------------

#include "module.hpp"
#include <cstdio> // standard C header-file
#include <cmath> // standard C header-file
#include <iostream>

namespace s4prc {

void
dummyFunction(void)
{
  std::cout<<"~~~~ "<<__func__<<"() ~~~~\n";
}

double
useArgs(int argc,
        char **argv)
{
  double sqrSum=0.0;
  for(int i=0; i<argc; ++i)
  {
    std::cout<<"argv["<<i<<"]=<"<<argv[i]<<">\n";
    double value;
    if(std::sscanf(argv[i], " %lg ", &value)==1)
    {
      sqrSum+=value*value;
    }
  }
  return std::sqrt(sqrSum);
}

} //namespace s4prc

//----------------------------------------------------------------------------
