#include "helloworld/helloworld.hpp"
#include <iostream>

int main(){
  int result = helloworld::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}