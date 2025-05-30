#ifndef __LITELOGGER_H__
#define __LITELOGGER_H__

#include <stdio.h>
#include <time.h>

#include "ll_time.h"
#include "ll_builtins.h"


typedef struct LiteLogger {
    void (*error)(const char*);    
    void (*warn)(const char*);
    void (*info)(const char*);
    void (*successfull)(const char*);
    void (*critical)(const char*);
} LiteLogger_t;


static inline int
liteLogger_init(struct LiteLogger* liteLogger){
    (liteLogger)->successfull = &__ll_scsfl;
    (liteLogger)->error = &__ll_error;
    (liteLogger)->warn = &__ll_warn;
    (liteLogger)->info = &__ll_info;
    (liteLogger)->critical = &__ll_crtcl;
    return 1;
}

#endif //__LITELOGGER_H__