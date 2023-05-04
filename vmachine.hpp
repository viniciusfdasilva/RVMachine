#ifndef __VMACHINE_H__

    #include<iostream>

    using namespace std;

    class VMachine{

    private:
    
        bool vmachine_status;
        int vmachine_memory_used;
        int vmachine_cpu_used;

    public:
        VMachine();

        bool stop(int pid);
        __pid_t start(string program_path);

        bool get_vmachine_status();
        void set_vmachine_status(bool vmachine_status);

        int get_vmachine_memory_used();
        void set_vmachine_memory_used(int vmachine_memory_used);

        int get_vmachine_cpu_used();
        void set_vmachine_cpu_used(int vmachine_cpu_used);

};

#endif