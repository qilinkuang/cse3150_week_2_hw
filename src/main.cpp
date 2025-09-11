#include <iostream>
#include "greeting_utils.h"
#include <string>

using namespace GreetingUtils;
using namespace std;

int main() 
{
    string name;
    //cout << "Enter name: ";
    getline(cin, name);

    string greeting = create_message(name);
    char* c_greeting = format_as_c_string(greeting);

    cout << c_greeting << endl;

    delete[] c_greeting;
    return 0;
}

