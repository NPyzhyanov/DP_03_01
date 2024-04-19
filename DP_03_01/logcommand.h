#ifndef LOGCOMMAND_H
#define LOGCOMMAND_H

class LogCommand
{
public:
    virtual ~LogCommand() = default;
    virtual void print(const std::string &message) = 0;
};

#endif // LOGCOMMAND_H
