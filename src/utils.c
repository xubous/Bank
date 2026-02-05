#include "../include/utils.h"

void print_test ( char * arg )
{
    printf ( "%s", arg );
}

User * register_user ( )
{
    // char * name_user = malloc ( 20 );
    // char * password_user = malloc ( 20 );

    User * user = malloc ( sizeof ( User ) );

    if ( ! user ) return null;

    user -> name_user = malloc ( 20 );
    user -> password_user = malloc ( 20 );

    printf ( "Write a nick:\n" );
    fgets ( user -> name_user, 20, stdin );
    printf ( "Write a password:\n" );
    fgets ( user -> password_user, 20, stdin );

    if ( user -> name_user == null && user -> password_user == null ) return null;

    // printf ( "USER : %s", user -> name_user );
    // printf ( "PASSWORD : %s", user -> password_user );

    user -> name_user [ strcspn ( user -> name_user, "\n" ) ] = '\0';
    user -> password_user [ strcspn ( user -> password_user, "\n" ) ] = '\0';

    return user;
}

// char * create_string ( )
// {
//     char * string = ( char * ) malloc ( 5 * sizeof ( char ) );

//     if ( ! string ) return null;

//     fgets ( string, 5, stdin );

//     return string;
// }