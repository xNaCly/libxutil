#include <string.h> 
#include <stdlib.h>

#include "xstring.h"

int s_is_equal(const char *str, const char *str1) {
    if (s_is_empty(str) || s_is_empty(str1)) return 0;
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
        return 0;
    }
    return (int)l;
}

double s_to_double(char *str){
    char *ptr;
    double l;

    l = strtod(str, &ptr);
    if(strcmp(ptr, str) == 0){
        return 0;
    }
    return l;
}
