#include <iostream>
#include "my_lib.h"
#include "config.hpp"
using namespace std;

int main()
{
    cout << project_name << endl;
    cout << project_version << endl;
    print_hello_world();
    return 0;
}