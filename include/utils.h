#ifndef UTILS_H
#define UTILS_H

#define null NULL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct User
{
    char * name_user;
    char * password_user;
} User;

void print_test ( char * arg );
// char * create_string ( );
User * register_user ( );

#endif