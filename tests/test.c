#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "../xstring.h"
#include "../xfs.h"

int main(void){
    assert(f_exists("./dist"));
    assert(f_is_dir("./dist"));
    assert(s_to_int("21") == 21);
    assert(s_to_double("21.29") == 21.29);
    assert(s_is_equal("21", "21") && s_is_equal("is this equal", "is this equal"));
    assert(s_is_empty("") && s_is_empty(" "));
    assert(s_starts_with("Hello World!", "Hello") && s_starts_with("This is a test", "This is a"));
    return EXIT_SUCCESS;
}
