#include "../include/array.h"
#include "../include/utils.h"

int menu_bank ( )
{
    int option = 0;

    printf ( "------------- Menu -------------\n" );
    printf ( "1 - Criar conta\n" );
    printf ( "2 - Login\n" );
    printf ( "3 - Saldo\n" );
    printf ( "4 - Deposito\n" );
    printf ( "5 - Retirada\n" );
    printf ( "6 - Extrato\n" );
    printf ( "7 - dev_opt -> print_users ( )\n" );
    printf ( "0 - Exit\n" );
    printf ( "--------------------------------\n" );
    printf ( "Choose One Option ...\n" );

    scanf ( "%d", & option );
    getchar ( );

    switch ( option )
    {
        case 1:
            return 1; break;
        
        case 2:
            return 2; break;

        case 3:
        return 3; break;

        case 4:
            return 4; break;

        case 5:
            return 5; break;

        case 6:
            return 6; break;

        case 7:
            return 7; break;

        default:
            return 0; break;
    }
}

void test ( )
{
    // char * test_string = create_string ( );
    // print_test ( "%s\n", test_string );
    // free ( test_string );

    // int return_register_user = register_user ( );
    // print_test ( "%d", return_register_user );

    // int option_menu_bank = menu_bank ( );

    // printf ( "Option choosed: %d\n", option_menu_bank );

    // User ** users = create_array ( 2 );
    // User * test_01 = malloc ( sizeof ( User ) );

    // test_01 -> name_user = "test_01";
    // test_01 -> password_user = "password_test_01";

    // push ( users, 1, test_01 );

    // free_users ( users, 1 );

User ** users = create_array ( 2 );

    User * logged = null;   // <<< AQUI fora do while

    while ( 1 )
    {
        int option_menu_bank = 0;

        system ( "clear" );

        option_menu_bank = menu_bank ( );

        User * test = null;

        if ( option_menu_bank == 0 ) break;

        switch ( option_menu_bank )
        {
            case 1:
            {
                test = register_user ( );
                push ( users, 2, test );
                clear_buffer ( );
                break;
            }

            case 2:
            {
                User * temp = malloc ( sizeof ( User ) );

                temp -> name_user = malloc ( 20 );
                temp -> password_user = malloc ( 20 );

                printf ( "Write nick:\n" );
                fgets ( temp -> name_user, 20, stdin );

                printf ( "Write password:\n" );
                fgets ( temp -> password_user, 20, stdin );

                temp -> name_user [ strcspn ( temp -> name_user, "\n" ) ] = '\0';
                temp -> password_user [ strcspn ( temp -> password_user, "\n" ) ] = '\0';

                int index = login ( users, 2, temp );

                if ( index != -1 )
                {
                    logged = users [ index ];   // <<< Agora persiste
                    print_test ( "Logged\n" );
                }
                else
                {
                    print_test ( "Not Logged\n" );
                }

                free ( temp -> name_user );
                free ( temp -> password_user );
                free ( temp );

                clear_buffer ( );
                break;
            }

            case 3:
            {
                if ( logged == null )
                {
                    print_test ( "Login first\n" );
                }
                else
                {
                    printf ( "Cash: %.2lf\n", get_cash ( logged ) );
                }

                clear_buffer ( );
                break;
            }

            case 4:
            {
                if ( logged == null )
                {
                    print_test ( "Login first\n" );
                }
                else
                {
                    deposit ( logged );
                }

                clear_buffer ( );
                break;
            }

            case 5:
            {
                if ( logged == null )
                {
                    print_test ( "Login first\n" );
                }
                else
                {
                    withdraw ( logged );
                }

                clear_buffer ( );
                break;
            }

            case 6:
            {
                if ( logged == null )
                {
                    print_test ( "Login first\n" );
                }
                else
                {
                    print_statement ( logged );
                }

                clear_buffer ( );
                break;
            }

            case 7:
            {
                print_users ( users, 2 );
                clear_buffer ( );
                break;
            }
        }
    }
    
    // print_users ( users, 1 );
}

int main ( )
{
    test ( );

    return 0;
}