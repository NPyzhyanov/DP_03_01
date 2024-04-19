#ifndef LOG2CONSOLE_H
#define LOG2CONSOLE_H

class Log2Console : public LogCommand
{
public:
    explicit Log2Console() {}
    void print(const std::string &message) override;
};

#endif // LOG2CONSOLE_H
