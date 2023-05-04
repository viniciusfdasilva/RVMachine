SYSTEM_NAME=RVMachine
TARGET=rvmachine
CC=g++
OBJS=error.hpp vmachine.hpp system.hpp globals.hpp system.cpp vmachine.cpp main.cpp

run:
	@echo "Compiling and running\n"
	@$(CC) $(OBJS) -o $(TARGET)

	@./$(TARGET) run teste.txt

test:
	@echo "Compiling and running\n"
	@$(CC) $(OBJS) -o $(TARGET)

	@./$(TARGET) run teste.txt

stop:
	@echo "Stoping virtual machine\n"
	@./$(TARGET) stop 456

clean:
	@rm -rf *.o *.out *.gch $(TARGET)
	@echo "Project is cleaned!"
