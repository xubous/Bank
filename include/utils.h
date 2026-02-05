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

char * create_string ( );
int register_user ( User * user );

#endif