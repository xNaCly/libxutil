#include <stdlib.h>
#include <stdio.h>

#include "xutil.h"


int main(void){
    char *str = "21";
    char *str1 = "21.29";
    char *feedback = malloc(sizeof(char)*1024);

    int i = s_to_int(str);
    double d = s_to_double(str1);

    snprintf(feedback, 1024, "Str1: %s --> converted int: %d", str, i);
    xlog(feedback, INFO);
    snprintf(feedback, 1024, "Str2: %s --> converted double: %f", str1, d);
    xlog(feedback, INFO);

    return EXIT_SUCCESS;
}
