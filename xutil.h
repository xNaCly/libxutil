#ifndef XUTIL_H
#define XUTIL_H

#define ANSI_COLOR_BLACK_FG "\x1b[97m"
#define ANSI_COLOR_RED "\x1b[91m"
#define ANSI_COLOR_GREEN "\x1b[92m"
#define ANSI_COLOR_YELLOW "\x1b[93m"
#define ANSI_COLOR_BLUE "\x1b[96m"
#define ANSI_COLOR_MAGENTA "\x1b[95m"
#define ANSI_RESET "\x1b[0m"

typedef enum {
    INFO = 0,
    SUCCESS,
    WARN,
    ERROR,
    DEBUG,
} Log_level;


/**
 * throws error and exits the program
 * @param text
 * @param error
 * @returns EXIT_FAILURE
 */
void throw_error(const char *text, int error);

/**
 * throws warning
 * @param text
 * @param error
 * @returns void
 */
void throw_warning(const char *text, int error);

/**
 * logging utility
 * @param str
 * @param log_level
 * @return void
 */
void xlog(const char *str, Log_level log_level);
#endif
