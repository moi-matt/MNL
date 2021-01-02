#include <stdio.h>
#include <stdlib.h>
#include "cmake-build-debug/CMakeFiles/analyseMat.h"

int main() {
    printf("Hello, World!\n");
    MatDyn m;
    m.dimC=2;
    m.dimL=2;
    /*remplirMat(m,4 );*/
    /*afficherMat(m, 1);*/
    /*normeInf(m,2);*/
    remplirMatDyn(&m);
    free(m.tab);
    return 0;
}
