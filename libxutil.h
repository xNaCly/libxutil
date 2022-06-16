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
 * checks if file exists
 * @returns EXIT_SUCCESS or EXIT_FAILURE
 */
int file_exists(char *path);

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

/**
 * checks if string str1 is equal to str2
 * @param str1
 * @param str2
 * @return boolean as integer
 */
int s_is_equal(const char *str, const char *str1);

/**
 * checks if string str is empty
 * @param str
 * @return boolean as integer
 */
int s_is_empty(const char *str);

/**
 * checks if string str starts with string str1
 * @param str
 * @param start
 * @return boolean as integer
 */
int s_starts_with(const char *str, const char *start);

/**
 * @brief converts the given string to an integer
 * @param str 
 * @return int
 */
int s_to_int(char *str);

/**
 * @brief converts the given string to an double
 * @param str 
 * @return double
 */
double s_to_double(char *str);

#endif
