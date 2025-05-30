#ifndef __LITELOGGER_TIME_H__
#define __LITELOGGER_TIME_H__

//print current time
static inline void
__ll_pcts(const char* _color_code){
    time_t __current_time;
    time(&__current_time);
    struct tm* __time_info = localtime(&__current_time);
    
    printf("%s[%d-%02d-%02d-%02d-%02d-%02d]\t", 
        _color_code,
        __time_info->tm_year + 1900,
        __time_info->tm_mon,
        __time_info->tm_mday,
        __time_info->tm_hour,
        __time_info->tm_min,
        __time_info->tm_sec
    );
}

#endif //__LITELOGGER_TIME_H__