# @file Makefile
# @author Kyle Byassee
# @date 2022-09-06
# @brief Makefile
# 
# A Makefile for employee

# The build target
TARGET = employee

# The compiler g++
CC = g++

# General compilation flags - Compiles with all errors and warnings
CFLAGS = -g -Wall -Wextra

# Compiles and Assembles without Linking
CFLAGSC = $(CFLAGS) -c

# Compiles and Links
CFLAGSO = $(CFLAGS) -o $(TARGET)

default: all
all: $(TARGET)

$(TARGET): Employee.o Supervisor.o Officer.o main.o
	$(CC) $(CFLAGSO) Employee.o Supervisor.o Officer.o main.o

# First, the rule to create Employee.o
Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGSC) Employee.cpp

# Second, the rule to create Supervisor.o
Supervisor.o: Supervisor.cpp Supervisor.h Employee.h
	$(CC) $(CFLAGSC) Supervisor.cpp

# Third, the rule to create Officer.o
Officer.o: Officer.cpp Officer.h Employee.h
	$(CC) $(CFLAGSC) Officer.cpp

# Then, the rule to create main.o
main.o: main.cpp Employee.h Supervisor.h Officer.h
	$(CC) $(CFLAGSC) main.cpp

# Invoked with 'make clean'
clean:
	$(RM) $(TARGET) *.o *~
