#pragma once
#include <string>

/* Ability to log a message on the screen.
 * Loggable is an Abstract class  */
class Loggable
{
public:
    virtual void log(const std::string &message) const = 0;
};
