/* Form definition file generated by fdesign on Wed Jun 13 19:12:19 2018 */

#include <stdlib.h>
#include "creditcard.h"


/***************************************
 ***************************************/

FD_inputdata *
create_form_inputdata( void )
{
    FL_OBJECT *obj;
    FD_inputdata *fdui = ( FD_inputdata * ) fl_malloc( sizeof *fdui );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->inputdata = fl_bgn_form( FL_NO_BOX, 618, 414 );

    obj = fl_add_box( FL_FLAT_BOX, 0, 0, 618, 414, "" );
    fl_set_object_resize( obj, FL_RESIZE_NONE );

    obj = fl_add_text( FL_NORMAL_TEXT, 80, 90, 450, 80, "You can easily find out now! All you need to do is enter its information\nhere and we will scan thousands of hacker databases to see if any of\nthem match yours." );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );

    obj = fl_add_text( FL_NORMAL_TEXT, 0, 40, 618, 50, "Is your credit card number in a hacker's database?" );
    fl_set_object_lcolor( obj, FL_BROWN );
    fl_set_object_lsize( obj, FL_MEDIUM_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );
    fl_set_object_lstyle( obj, FL_NORMAL_STYLE + FL_EMBOSSED_STYLE );
    fl_set_object_resize( obj, FL_RESIZE_NONE );

    fdui->iName = obj = fl_add_input( FL_NORMAL_INPUT, 260, 200, 240, 20, "Name of Cardholder" );

    fdui->iNumber = obj = fl_add_input( FL_NORMAL_INPUT, 260, 230, 240, 20, "Credit Card Number" );

    fdui->iDate = obj = fl_add_input( FL_NORMAL_INPUT, 260, 260, 90, 20, "Expiration Date" );
    fl_set_input_format(obj, FL_INPUT_MMDD, '/');

    fdui->iZip = obj = fl_add_input( FL_NORMAL_INPUT, 260, 290, 90, 20, "Zip Code" );

    obj = fl_add_bitmap( FL_NORMAL_BITMAP, 420, 270, 100, 80, "" );

    obj = fl_add_button( FL_NORMAL_BUTTON, 50, 350, 520, 50, "SCAN DATABASE" );
    fl_set_object_color( obj, FL_RED, FL_COL1 );
    fl_set_object_lstyle( obj, FL_NORMAL_STYLE + FL_EMBOSSED_STYLE );
    fl_set_object_callback( obj, cb_ScanDatabase, 0 );

    fl_end_form( );

    fdui->inputdata->fdui = fdui;

    return fdui;
}

/***************************************
 ***************************************/

FD_scandb *
create_form_scandb( void )
{
    FL_OBJECT *obj;
    FD_scandb *fdui = ( FD_scandb * ) fl_malloc( sizeof *fdui );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->scandb = fl_bgn_form( FL_NO_BOX, 409, 183 );

    obj = fl_add_box( FL_FLAT_BOX, 0, 0, 409, 183, "" );
    fl_set_object_resize( obj, FL_RESIZE_NONE );

    obj = fl_add_text( FL_NORMAL_TEXT, 30, 30, 300, 50, "Scanning databases..." );
    fl_set_object_lcolor( obj, FL_RED );
    fl_set_object_lsize( obj, FL_MEDIUM_SIZE );
    fl_set_object_lstyle( obj, FL_NORMAL_STYLE + FL_EMBOSSED_STYLE );

    obj = fl_add_bitmap( FL_NORMAL_BITMAP, 280, 20, 90, 70, "" );

    fdui->pProgress = obj = fl_add_slider( FL_HOR_PROGRESS_BAR, 30, 90, 340, 30, "" );
    fl_set_object_color( obj, FL_COL1, FL_OLIVE );
    fl_set_object_return( obj, FL_RETURN_CHANGED );
    fl_set_slider_bounds( obj, 0, 1.0 );
    fl_set_slider_value( obj, 0 );
    fl_set_slider_size( obj, 1.0 );
    fl_set_slider_step( obj, 1 );
    fl_set_slider_increment( obj, 0.01, 0.01 );

    fdui->tStatus = obj = fl_add_text( FL_NORMAL_TEXT, 30, 130, 360, 20, "Now scanning database 0 of 3728... 0 matches found" );

    fl_end_form( );

    fdui->scandb->fdui = fdui;

    return fdui;
}

/***************************************
 ***************************************/

FD_success *
create_form_success( void )
{
    FL_OBJECT *obj;
    FD_success *fdui = ( FD_success * ) fl_malloc( sizeof *fdui );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->success = fl_bgn_form( FL_NO_BOX, 409, 183 );

    obj = fl_add_box( FL_FLAT_BOX, 0, 0, 409, 183, "" );
    fl_set_object_resize( obj, FL_RESIZE_NONE );

    obj = fl_add_bitmap( FL_NORMAL_BITMAP, 20, 30, 60, 50, "" );

    obj = fl_add_text( FL_NORMAL_TEXT, 80, 40, 260, 30, "Your card number was not found in any\nof the hacker's databases!" );

    fdui->bOK = obj = fl_add_button( FL_NORMAL_BUTTON, 150, 110, 90, 40, "OK" );

    fl_end_form( );

    fdui->success->fdui = fdui;

    return fdui;
}