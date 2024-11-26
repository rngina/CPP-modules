#include <iostream>
#include <cmath>

int main()
{
    std::cout << roundf( 42.42 * (1 << 8)) << std::endl;
    return 0;
}