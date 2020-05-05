#ifndef SHELL_COMMANDS_H
#define SHELL_COMMANDS_H

#define NUMBER_OF_COMMANDS 14
#include <stdint.h>

void execute_command(int command, char* parameter, uint8_t pid_key, int background);

static char* all_commands[] = 
{
    "mem",
    "kill",
    "test_mm",
    "block",
    "ps",
    "loop",
    "nice",
    "inforeg", 
    "help",
    "exception0", 
    "exception6",
    "printmem",
    "showTime",
    "test"
};

#endif