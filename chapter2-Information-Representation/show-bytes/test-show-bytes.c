#include "show-bytes.h"
#include <stdlib.h>
#include <stdio.h>

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(int argc, char const *argv[]) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    test_show_bytes(atoi(argv[1]));
    return EXIT_SUCCESS;
}
