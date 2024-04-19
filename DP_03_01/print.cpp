#include <string>

#include "logcommand.h"

#include "print.h"

void print(LogCommand& logger)
{
    logger.print("Message from print function");
}
