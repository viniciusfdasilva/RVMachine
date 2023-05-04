#include <iostream>
#include "system.hpp"

using namespace std;

void help()
{
   cout << SYSTEM_NAME << ": " << SYSTEM_DESCRIPTION    << endl;
   cout << "Version " << SYSTEM_VERSION                 << endl;
   cout << "Development by " << SYSTEM_AUTHOR           << endl;
   cout << "Usage: danix [OPTIONS]..."          << endl << endl;
   cout << "run        Start virtual machine [FILE]..." << endl;
   cout << "stop       Stop virtual machine <pid>"      << endl;
   cout << "--help     Display this help and exit"      << endl;
   cout << "--version  Display system version and exit" << endl;
}

void version()
{
    cout << "System released in " << SYSTEM_YEAR_RELEASED                             << endl << endl;
    cout << "System last version year released " << SYSTEM_YEAR_LAST_VERSION_RELEASED << endl; 
    cout << "Version " << SYSTEM_VERSION                                              << endl;
}