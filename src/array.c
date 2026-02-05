#include "../include/array.h"
#include "../include/utils.h"

User ** create_array ( int size )
{
    User ** users = ( User ** ) malloc ( size * sizeof ( User * ) );

    if ( ! users ) return null;

    for ( int i = 0; i < size; i ++ )
    {
        users [ i ] = malloc ( 1 * sizeof ( User ) );

        // int response_register_user = register_user ( users [ i ] );

        // users [ i ] -> name_user [ strcspn ( users [ i ] -> name_user, "\n" ) ] = '\0';
        // users [ i ] -> password_user [ strcspn ( users [ i ] -> password_user, "\n" ) ] = '\0';

        // printf ( "%d\n", response_register_user );

        users [ i ] -> name_user = null;
        users [ i ] -> password_user = null;
    }

    // print_users ( users, size );

    print_test ( "users created\n" );

    return users;
}

void print_users ( User ** users, int size )
{
    if ( users == null )
    {
        print_test ( "Error to print!\n" );
    }

    for ( int i = 0; i < size; i ++ )
    {
        printf ( "User [ %d ] -> Username: %s Password: %s\n", i, users [ i ] -> name_user, users [ i ] -> password_user );
    }
}

void free_users ( User ** users, int size ) 
{
    for ( int i = 0; i < size; i ++ )
    {
        free ( users [ i ] -> name_user );
        free ( users [ i ] -> password_user );
        free ( users [ i ] );
    }

    free ( users );

    print_test ( "end free\n" );
}

void push ( User ** users, int size )
{
    print_test ( "enter added\n" );

    int index = 0;

    while ( index < size && users [ index ] -> name_user != null && users [ index ] -> password_user != null )
    {
        index ++;

        print_test ( "while added\n" );
    }

    User * new_user = register_user (  );

    users [ index ] = new_user;

    print_test ( "added\n" );
}