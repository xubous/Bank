#ifndef UTILS_H
#define UTILS_H

#define null NULL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct User
{
    int id;
    char * name_user;
    char * password_user;
    double cash;
} User;

void print_test ( char * arg );
// char * create_string ( );
User * register_user ( );
void clear_buffer ( );
int length ( char * str );
int compare_two ( char * str01, char * str02 );
double get_cash ( User * user );
void deposit ( User * user );
void withdraw ( User * user );
void print_statement ( User * user );


#endif