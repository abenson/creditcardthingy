#include <stdlib.h>
#include <time.h>

#include "creditcard.h"


/***************************************
 ***************************************/

FD_inputdata *fd_inputdata;
FD_scandb *fd_scandb;
FD_success *fd_success;

int main(int argc, char *argv[])
{
    srand(time(NULL));

    fl_initialize( &argc, argv, 0, 0, 0 );
    fd_inputdata = create_form_inputdata( );
    fd_scandb = create_form_scandb( );
    fd_success = create_form_success( );

    /* Fill-in form initialization code */

    /* Show the first form */

    fl_show_form(fd_inputdata->inputdata,
        FL_PLACE_CENTER,
        FL_FULLBORDER,
        "Credit Card Security" );

    while(fl_do_forms() != fd_success->bOK) ;

    if ( fl_form_is_visible( fd_inputdata->inputdata ) )
        fl_hide_form( fd_inputdata->inputdata );
    fl_free( fd_inputdata );
    if ( fl_form_is_visible( fd_scandb->scandb ) )
        fl_hide_form( fd_scandb->scandb );
    fl_free( fd_scandb );
    if ( fl_form_is_visible( fd_success->success ) )
        fl_hide_form( fd_success->success );
    fl_free( fd_success );
    fl_finish( );

    return 0;
}
