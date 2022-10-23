#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

#include <iostream>

#include "main.hpp"

int main()
{
    std::cout << hexDigest() << std::endl;
    return 0;
}
