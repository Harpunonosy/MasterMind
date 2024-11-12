#include <stdlib.h>

void create_codes(int codes[1296][4]){
    int i, j, k, l;
    int index = 0;
    int colors = 6;
    for (i = 1; i <= colors; i++){
        for (j = 1; j <= colors; j++){
            for (k = 1; k <= colors; k++){
                for (l = 1; l <= colors; l++){
                    int code[4] = {i, j, k, l};
                    for (int m = 0; m < 4; m++){
                        codes[index][m] = code[m];
                    }
                    index++;
                }
            }
        }
    }
}