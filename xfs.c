#include <sys/stat.h>
#include <stdlib.h>

#include "xstring.h"
#include "xfs.h"

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
