#include "../include/utils.h"

void clear_buffer ( )
{
    while ( getchar ( ) != '\n' ) getchar ( );
}

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

int length ( char * str )
{
    int size = 0;

    if ( str == null ) return size;

    while ( str [ size ] != '\0' ) size ++;

    return size;
}

int compare_two ( char * str01, char * str02 )
{
    int size01 = length ( str01 );
    int size02 = length ( str02 );
    
    if ( size01 != size02 ) return 1;

    int size = size01;

    for ( int i = 0; i < size; i ++ )
    {
        if ( str01 [ i ] != str02 [ i ] )
        {
            return 1;
        }
    }

    return 0;
}

double get_cash ( User * user )
{
    if ( user == null ) return 0.0;

    return user -> cash;
}

void deposit ( User * user )
{
    if ( user == null )
    {
        print_test ( "Error: user null\n" );
        return;
    }

    double value = 0;

    printf ( "Write value to deposit:\n" );
    scanf ( "%lf", & value );
    getchar ( );

    if ( value <= 0 )
    {
        print_test ( "Invalid value\n" );
        return;
    }

    user -> cash += value;

    print_test ( "Deposit done\n" );
}

void withdraw ( User * user )
{
    if ( user == null )
    {
        print_test ( "Error: user null\n" );
        return;
    }

    double value = 0;

    printf ( "Write value to withdraw:\n" );
    scanf ( "%lf", & value );
    getchar ( );

    if ( value <= 0 )
    {
        print_test ( "Invalid value\n" );
        return;
    }

    if ( value > user -> cash )
    {
        print_test ( "Not enough cash\n" );
        return;
    }

    user -> cash -= value;

    print_test ( "Withdraw done\n" );
}

void print_statement ( User * user )
{
    if ( user == null )
    {
        print_test ( "Error: user null\n" );
        return;
    }

    printf ( "----- Statement -----\n" );
    printf ( "User: %s\n", user -> name_user );
    printf ( "Cash: %.2lf\n", user -> cash );
    printf ( "---------------------\n" );
}

// char * create_string ( )
// {
//     char * string = ( char * ) malloc ( 5 * sizeof ( char ) );

//     if ( ! string ) return null;

//     fgets ( string, 5, stdin );

//     return string;
// }