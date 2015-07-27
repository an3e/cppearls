#include <iostream>

int main(int argc, char** argv)
{
    int x = 0x33;
    int bitand y = x;
    std::cout << "x = " << std::hex << x << "; y = " << std::hex << y << std::endl;
    x = x * 2;
    std::cout << "x = " << std::hex << x << "; y = " << std::hex << y << std::endl;
    return 0;
}
