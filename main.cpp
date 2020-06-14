#include <iostream>
#include "lib.h"

int main(int argc, char const *argv[])
{
  SomeLib s;
  std::cout << s.sum(2, 3) << std::endl;
  return 0;
}
