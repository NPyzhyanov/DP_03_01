#include <iostream>
#include <string>

#include "logcommand.h"
#include "log2console.h"

void Log2Console::print(const std::string &message)
{
    std::cout << message << std::endl;
}
