//
// Created by Hunter on 12/18/2020.
//

#ifndef TILEGAME_LOGGER_HPP
#define TILEGAME_LOGGER_HPP
#include <iostream>
#include <string>

enum LogLevel {
    SILLY,
    FINE,
    INFO,
    WARNING,
    ERROR
};

class Logger {
private:
    LogLevel logLevel;
    std::ostream& defaultOutput = std::cout;
    static std::string getPrefix(LogLevel);
public:
    explicit Logger(LogLevel);
    Logger(LogLevel, std::ostream&);
    void log(const std::string &message) const;
    void log(LogLevel, const std::string&) const;
    void log(std::ostream &os, LogLevel level, const std::string &message) const;
};


#endif //TILEGAME_LOGGER_HPP
