#include <fstream>
#include <string>

#include "logcommand.h"
#include "log2file.h"

Log2File::Log2File()
{
    file.open("../DP_03_01/log.txt");
}

Log2File::~Log2File()
{
    file.close();
}

void Log2File::print(const std::string &message)
{
    file << message << std::endl;
}
