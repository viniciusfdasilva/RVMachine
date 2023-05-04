#include<iostream>

using namespace std;

#define __PATH_NOT_FOUND_EXCEPTION__         cout << "Path not found"                                 << endl; exit(0);
#define __COMMAND_NOT_RECOGNIZED_EXCEPTION__ cout << "Invalid command!"                               << endl; exit(0);
#define __ARGUMENT_NOT_BE_EMPTY_EXCEPTION__  cout << "Argument not be empty! Try \"vmachine --help\"" << endl; exit(0);