#include "helloworld/helloworld.hpp"

namespace helloworld {

int add_one(int x){
  return x + 1;
}

extern "C" {
auto hello() -> const char * {
  return "Hello, World!";
}
}

} // namespace helloworld