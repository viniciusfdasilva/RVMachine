#include <exception>
#include <iostream>
#include <stdexcept>
#include <unistd.h>

#include "vmachine.hpp"
#include "error.hpp"
#include "system.hpp"

#include "globals.hpp"

using namespace std;

int main(int argc, char** argv)
{
    try{

        string first_argument = argv[1];

        if(first_argument == RUN_CMD)
        {
            string program_path = argv[2];

            if(!program_path.empty())
            {
                __pid_t pid = VMachine().start(program_path);
                cout << "VMachine is started with pid [ " << pid << " ]" << endl; 
            }else{
                __PATH_NOT_FOUND_EXCEPTION__
            }
        }else if(first_argument == STOP_CMD)
        {

            __pid_t vmachine_id = atoi(argv[2]);

            VMachine().stop(vmachine_id);

        }else if(first_argument == VERSION_FLAG)
        {
            version();
        }else if(first_argument == HELP_FLAG){
        
            help();
        
        }else
        {
            __COMMAND_NOT_RECOGNIZED_EXCEPTION__
        }
    }catch(std::logic_error e)
    {
        __ARGUMENT_NOT_BE_EMPTY_EXCEPTION__
    }
}