//
// Created by Hunter on 12/18/2020.
//

#include "Logger.hpp"
#include <iostream>
#include <string>

Logger::Logger(LogLevel level) : logLevel(level) { }

Logger::Logger(LogLevel level, std::ostream& output) : logLevel(level), defaultOutput(output) { }

void Logger::log(std::ostream& os, LogLevel level, const std::string& message) const {
    if (level >= logLevel) {
        os << getPrefix(level) << message << std::endl;
    }
}

/**
 * Logs a message with the given LogLevel. It will only be displayed if the given LogLevel is a greater priority than
 * the LogLevel the Logger was constructed with.
 *
 * @param level The level to log at.
 * @param message The message to log if the LogLevel is high enough.
 */
void Logger::log(LogLevel level, const std::string& message) const {
    log(defaultOutput, level, message);
}

/**
 * Logs a message at level INFO.
 *
 * @param message The message to log.
 */
void Logger::log(const std::string& message) const {
    log(INFO, message);
}

/**
 * Generates a prefix based on the logging level.
 *
 * @param level The level to return the prefix for.
 * @return The prefix generated based on the level.
 */
std::string Logger::getPrefix(LogLevel level) {
    if (level == SILLY) {
        return "[SILLY] ";
    }
    else if (level == FINE) {
        return "[FINE] ";
    }
    else if (level == INFO) {
        return "[INFO] ";
    }
    else if (level == WARNING) {
        return "[WARNING] ";
    }
    else if (level == ERROR) {
        return "[ERROR] ";
    }
}
