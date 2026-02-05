#include "../include/array.h"
#include "../include/utils.h"

void test ( )
{
    // char * test_string = create_string ( );
    // print_test ( "%s\n", test_string );
    // free ( test_string );

    // int return_register_user = register_user ( );
    // print_test ( "%d", return_register_user );

    User ** users = create_array ( 1 );

    push ( users, 1 );

    free_users ( users, 1 );

    // print_users ( users, 1 );
}

int main ( )
{
    test ( );

    return 0;
}