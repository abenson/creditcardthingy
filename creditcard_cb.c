#include <stdlib.h>
#include <unistd.h>

#include "creditcard.h"

extern FD_inputdata *fd_inputdata;
extern FD_scandb *fd_scandb;
extern FD_success *fd_success;

#define MSGBUFLEN 100

const char *tStatusMsg = "Now scanning database %d of 3728...";

/* Callbacks and freeobj handlers for form inputdata */

void cb_ScanDatabase(FL_OBJECT * obj, long data)
{
	int i;
	double b;

	fl_hide_form(fd_inputdata->inputdata);
    fl_show_form(fd_scandb->scandb,
    	FL_PLACE_CENTER,
    	FL_FULLBORDER,
    	"Credit Card Security");

    for(i=1; i<=3728; i++) {
    	b = i/3728.0;
    	usleep(rand() % 10000);
    	fl_set_slider_value(fd_scandb->pProgress, b);
    	fl_set_object_label_f(fd_scandb->tStatus, tStatusMsg, i);
    }
    fl_hide_form(fd_scandb->scandb);

    fl_show_form(fd_success->success,
    	FL_PLACE_CENTER,
    	FL_FULLBORDER,
    	"Success!");
}

