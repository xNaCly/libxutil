#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "libxutil.h"

int f_is_dir(char *path){
    struct stat st;
    if (!f_exists(path))
        return 0;
    return S_ISDIR(st.st_mode);
}

int f_exists(char *path) {
    struct stat st;
    if (path == NULL || s_is_empty(path))
        return 0;
    return stat(path, &st) == 0;
}

void xlog(const char *str, Log_level log_level) {
        switch (log_level) {
            case SUCCESS:
                printf("%s%ssuccess:%s %s\n", ANSI_COLOR_BLACK_FG, ANSI_COLOR_GREEN,
                       ANSI_RESET, str);
                break;
            case WARN:
                printf("%s%swarning:%s %s\n", ANSI_COLOR_BLACK_FG, ANSI_COLOR_YELLOW,
                       ANSI_RESET, str);
                break;
            case ERROR:
                printf("%s%serror:%s %s\n", ANSI_COLOR_BLACK_FG, ANSI_COLOR_RED,
                       ANSI_RESET, str);
                break;
            case DEBUG:
                printf("%s%sdebug:%s %s\n", ANSI_COLOR_BLACK_FG, ANSI_COLOR_MAGENTA,
                       ANSI_RESET, str);
                break;
            case INFO:
            default:
                printf("%s%sinfo:%s %s\n", ANSI_COLOR_BLACK_FG, ANSI_COLOR_BLUE,
                       ANSI_RESET, str);
        }
}

void throw_error(const char *text, int error) {
    char error_text[sizeof(text) * 50];
    sprintf(error_text, "%s, err: %d", text, error);
    xlog(error_text, ERROR);
    exit(EXIT_FAILURE);
}

void throw_warning(const char *text, int error) {
    char error_text[sizeof(text) * 50];
    sprintf(error_text, "%s, err: %d", text, error);
    xlog(error_text, WARN);
}

int s_is_equal(const char *str, const char *str1) {
    if (s_is_empty(str) || s_is_empty(str1)) throw_error("string is empty", -1);
    return strcmp(str, str1) == 0;
}

int s_starts_with(const char *str, const char *start) {
    return strncmp(start, str, strlen(start)) == 0;
}

int s_is_empty(const char *str) {
    if (!str)
        return 1;
    return str[0] == '\0' || str[0] == ' ';
}

int s_to_int(char *str){
    char *ptr;
    long l;

    l = strtol(str, &ptr, 10);
    if(strcmp(ptr, str) == 0){
        throw_error("xutils: Can't convert str to int", -1);
        
    }
    return (int)l;
}

double s_to_double(char *str){
    char *ptr;
    double l;

    l = strtod(str, &ptr);
    if(strcmp(ptr, str) == 0){
        throw_error("xutils: Can't convert str to double", -1);
    }
    return l;
}
