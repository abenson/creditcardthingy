/* Header file generated by fdesign on Wed Jun 13 19:12:19 2018 */

#ifndef FD_inputdata_h_
#define FD_inputdata_h_

#include <forms.h>

/* Callbacks, globals and object handlers */

void cb_ScanDatabase( FL_OBJECT *, long );




/* Forms and Objects */

typedef struct {
    FL_FORM   * inputdata;
    void      * vdata;
    char      * cdata;
    long        ldata;
    FL_OBJECT * iName;
    FL_OBJECT * iDate;
    FL_OBJECT * iZip;
    FL_OBJECT * iNumber;
} FD_inputdata;

FD_inputdata * create_form_inputdata( void );

typedef struct {
    FL_FORM   * scandb;
    void      * vdata;
    char      * cdata;
    long        ldata;
    FL_OBJECT * pProgress;
    FL_OBJECT * tStatus;
} FD_scandb;

FD_scandb * create_form_scandb( void );

typedef struct {
    FL_FORM   * success;
    void      * vdata;
    char      * cdata;
    long        ldata;
    FL_OBJECT * bOK;
} FD_success;

FD_success * create_form_success( void );

#endif /* FD_inputdata_h_ */