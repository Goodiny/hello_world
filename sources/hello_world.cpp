#include <hello_world.hpp>

void hello_world()
{
  std::cout << "Hello world" << std::endl;
}

void hello_world(const string& name)
{
  std::cout << "Hello world from " << name << std::endl;
}
