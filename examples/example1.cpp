#include <hello_world.hpp>

int main(int argc, cahr** argv)
{
  string name;
  std::cout << "Enter your name";
  std::cin >> name;
  std::cout << std::endl;
  hello_world(name);
}
