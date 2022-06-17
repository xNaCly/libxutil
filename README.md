# libxutil
functions and macros which i use across multiple projects, memory safe and optimised

## Features:
- `xutil.h`
    - logging utilty (with colors and log levels)
- `xstrings.h`:
    - convert str to int and double
    - check if two strings are equal
    - check if a string starts with another string
    - check if a string is empty
- `xfs.h`:
    - check if a path exists
    - check if a path is a dir

## Installation:
### using cpak:
1. install using the source package manager cli
```bash
$ cpak a xnacly/libxutil
```

2. test program:

```c
/* main.c */
#include <stdio.h>
#include <stdlib.h>

#include "cpak_modules/libxutil/xstring.h"

int main(void){
    char *str1 = "Hello World";
    char *str2 = "Hello World";

    if(s_is_equal(str1, str2)){
        printf("String 'str1' and 'str2' are equal!\n");
    }

    return EXIT_SUCCESS;
}
```

3. compile:
```bash
gcc cpak_modules/libxutil/xstring.c ./main.c -o ./main.out
```

### Manually 
1. cd into your project
```
mkdir lib && cd lib
git clone https://github.com/xnacly/libxutils
```
2. test program:

```c
/* main.c */
#include <stdio.h>
#include <stdlib.h>

#include "lib/libxutil/xstring.h"

int main(void){
    char *str1 = "Hello World";
    char *str2 = "Hello World";

    if(s_is_equal(str1, str2)){
        printf("String 'str1' and 'str2' are equal!\n");
    }

    return EXIT_SUCCESS;
}
```

3. Compile

```bash
gcc lib/libxutil/xstring.c ./main.c -o ./main.out
```

