#ifndef ARRAY_H
#define ARRAY_H

#include "utils.h"

User ** create_array ( int size );
void print_users ( User ** users, int size );
void free_users ( User ** users, int size );
void push ( User ** users, int size, User * user );
int login ( User ** users, int size, User * user );

#endif