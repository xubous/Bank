#include "../include/utils.h"

int register_user ( User * user )
{
    // char * name_user = malloc ( 20 );
    // char * password_user = malloc ( 20 );

    if ( ! user ) return - 1;

    user -> name_user = malloc ( 20 );
    user -> password_user = malloc ( 20 );

    printf ( "Write a nick:\n" );
    fgets ( user -> name_user, 20, stdin );
    printf ( "Write a password:\n" );
    fgets ( user -> password_user, 20, stdin );

    if ( user -> name_user == null && user -> password_user == null ) return 1;

    // printf ( "USER : %s", user -> name_user );
    // printf ( "PASSWORD : %s", user -> password_user );

    return 0;
}

char * create_string ( )
{
    char * string = ( char * ) malloc ( 5 * sizeof ( char ) );

    if ( ! string ) return null;

    fgets ( string, 5, stdin );

    return string;
}