#include <hello_world.hpp>

using namespace std;

void hello_world()
{
  cout << "Hello world << endl;
}

void hello_world(const string& name)
{
  cout << "Hello world from " << name << endl;
}
