#include <stdio.h>
#include <stdlib.h>

#include "xutil.h"

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
