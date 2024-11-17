# Complier and flags define
CC = gcc
CXX = g++
CFLAGS += -g -Wall
CXXFLAGS += -g -Wall

EXEC = run


# Source and includes files
INC = -Iinc/

SRC_C =

SRC_CPP = \
	main.cpp  \
	src/BAI_1.cpp \
	src/BAI_2.cpp \
	src/BAI_3.cpp \
	src/BAI_4.cpp \
	src/BAI_5.cpp \


# Method for converting source files to object files
OBJ_C = $(SRC_C:.c=.o)
OBJ_CPP = $(SRC_CPP:.cpp=.o)
OBJS = $(OBJ_C) $(OBJ_CPP)


# Pattern rule for compiling C source files
%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Pattern rule for compiling C++ source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@
	

# build target
$(EXEC):  $(OBJ_C) $(OBJ_CPP)
	$(CXX) $(CFLAGS) $(CXXFLAGS) $(OBJS) $(INC) -o $@
	$(OBJ_CLEAN_CMD)

# SHELL = cmd.exe
# define OS for cleaning method
ifeq ($(OS),Windows_NT)
    EXEC_EXT = .exe
    OBJ_CLEAN_CMD = del /F /Q $(subst /,\,$(OBJS))
    EXEC_CLEAN_CMD = del /F /Q $(EXEC)$(EXEC_EXT)
else
    EXEC_EXT =
    OBJ_CLEAN_CMD = rm -f $(OBJS)
    EXEC_CLEAN_CMD = rm -f $(EXEC)
endif


# clean file
clean:
	$(EXEC_CLEAN_CMD)
	$(OBJ_CLEAN_CMD)

# clean only object files
oclean:
	$(OBJ_CLEAN_CMD)