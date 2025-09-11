#include "greeting_utils.h"
#include <string>

namespace GreetingUtils{
    std::string create_message(const std::string& name)
    {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg)
    {
        char* c_str = new char[msg.size() + 1];
        std::copy(msg.c_str(), msg.c_str() + msg.size() + 1, c_str);
        return c_str;
    }
}

