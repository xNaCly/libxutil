#ifndef XFS_H
#define XFS_H
/**
 * checks if path is a dir
 * @returns EXIT_SUCCESS or EXIT_FAILURE
 */
int f_is_dir(char *path);

/**
 * checks if file exists
 * @returns EXIT_SUCCESS or EXIT_FAILURE
 */
int f_exists(char *path);
#endif
