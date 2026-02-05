#include "../include/array.h"
#include "../include/utils.h"

User ** create_array ( int size )
{
    User ** users = ( User ** ) malloc ( size * sizeof ( User * ) );

    if ( ! users ) return null;

    for ( int i = 0; i < size; i ++ )
    {
        users [ i ] = malloc ( 1 * sizeof ( User ) );

        int response_register_user = register_user ( users [ i ] );

        users [ i ] -> name_user [ strcspn ( users [ i ] -> name_user, "\n" ) ] = '\0';
        users [ i ] -> password_user [ strcspn ( users [ i ] -> password_user, "\n" ) ] = '\0';

        printf ( "%d\n", response_register_user );
    }

    print_users ( users, size );

    return users;
}

void print_users ( User ** users, int size )
{
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
}

void push ( User ** users, int size, User * new_user )
{
    int index = 0;

    while ( index < size && users [ index ] -> name_user != null && users [ index ] -> password_user != null )
    {
        index ++;
    }

    users [ index ] = new_user;
}