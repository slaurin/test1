#include <iostream>

int main(int argc, char const *argv[])
{

    if (argc < 1)
    {
        std::cout << "No arguments" << std::endl;
        return 1;
    }

    std::cout << "Hello, " << argv[1] << std::endl;

    return 0;
}
