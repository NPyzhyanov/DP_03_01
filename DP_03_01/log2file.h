#ifndef LOG2FILE_H
#define LOG2FILE_H

#include <fstream>

class Log2File : public LogCommand
{
public:
    explicit Log2File();
    ~Log2File();
    void print(const std::string &message) override;
    
private:
    std::ofstream file;
    
};

#endif // LOG2FILE_H
