#include <string>

#include "logcommand.h"
#include "log2console.h"
#include "log2file.h"
#include "print.h"

int main()
{
    Log2File file_logger;
    print(file_logger);
    
    Log2Console console_logger;
    print(console_logger);
    
    return 0;
}
