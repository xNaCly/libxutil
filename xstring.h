#ifndef XSTRING_H
#define XSTRING_H
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
 * converts the given string to an integer
 * @param str 
 * @return int
 */
int s_to_int(char *str);

/**
 * converts the given string to an double
 * @param str 
 * @return double
 */
double s_to_double(char *str);
#endif
