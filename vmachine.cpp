#include "vmachine.hpp"
#include <unistd.h>

VMachine::VMachine()
{
    this->vmachine_status = false;
    this->vmachine_memory_used = 0;
    this->vmachine_cpu_used = 0;
}

bool VMachine::stop(__pid_t pid)
{
    string kill_cmd = "kill " + to_string(pid) + " > /dev/null";
    int system_response = system(kill_cmd.c_str());

    return system_response == 0 ? true : false;
}

__pid_t VMachine::start(string program_path)
{
    __pid_t id_process = fork();
    return id_process;
}

void VMachine::set_vmachine_status(bool vmachine_status)
{
    this->vmachine_status = vmachine_status;
}

bool VMachine::get_vmachine_status()
{
    return this->vmachine_status;
}

void VMachine::set_vmachine_cpu_used(int vmachine_cpu_used)
{
    this->vmachine_cpu_used = vmachine_cpu_used;
}

int VMachine::get_vmachine_cpu_used()
{
    return this->vmachine_cpu_used;
}

void VMachine::set_vmachine_memory_used(int vmachine_memory_used){
    this->vmachine_memory_used = vmachine_memory_used;
}

