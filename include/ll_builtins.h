#ifndef __LITELOGGER_BUILTINS_H__
#define __LITELOGGER_BUILTINS_H__

#define LL_RED_COLOR "\e[0;31m"
#define LL_GRN_COLOR "\e[0;32m"
#define LL_YLW_COLOR "\e[0;33m"
#define LL_WHT_COLOR "\e[0m"
#define LL_BRR_COLOR "\e[41m"

static inline void
__ll_error(const char* msg){
    __ll_pcts(LL_RED_COLOR);
    printf("%s\e[0m\n", msg);
}

static inline void
__ll_warn(const char* msg){
    __ll_pcts(LL_YLW_COLOR);
    printf("%s\e[0m\n", msg);
}

static inline void
__ll_info(const char* msg){
    __ll_pcts(LL_WHT_COLOR);
    printf("%s\n", msg);
}

static inline void
__ll_scsfl(const char* msg){
    __ll_pcts(LL_GRN_COLOR);
    printf("%s\e[0m\n", msg);
}

static inline void
__ll_crtcl(const char* msg){
    __ll_pcts(LL_BRR_COLOR);
    printf("%s\e[0m\n", msg);
}

#endif //__LITELOGGER_BUILTINS_H__