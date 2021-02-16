//----------------------------------------------------------------------------

#include "module.hpp"
#include <cstdio> // standard C header-file
#include <iostream>

int
main(int argc,
     char **argv)
{
  std::cout<<"~~~~ entering "<<__func__<<"() ~~~~\n";
  s4prc::dummyFunction();
  const double r=s4prc::useArgs(argc, argv);
  std::cout<<"useArgs() gave "<<r<<"\n";
  std::cout<<"~~~~ leaving "<<__func__<<"() ~~~~\n";
  return 0;
}

//----------------------------------------------------------------------------
