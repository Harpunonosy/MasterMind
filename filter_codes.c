#include <stdbool.h>
#include <stdlib.h>

void filter_codes(int codes[1296][4], int *size, int guess[4], int red, int white) {
    int i, j, index = 0;
    int new_codes[*size][4];
    for (i = 0; i < *size; i++){

        int red_count = 0;
        int white_count = 0;

        int guess_color_count[6] = {0};
        int code_color_count[6] = {0};

        for (j = 0; j < 4; j++){
            if (guess[j] == codes[i][j]){
                red_count++;
            }else{
                guess_color_count[guess[j] - 1] += 1;
                code_color_count[codes[i][j] - 1] += 1;
            }
        }

        for (j = 0; j < 6; j++){
            white_count += (guess_color_count[j] < code_color_count[j]) ? guess_color_count[j] : code_color_count[j];
        }

        if (red_count == red && white_count == white){
            for (int m = 0; m < 4; m++){
                new_codes[index][m] = codes[i][m];
            }
            index++;
        }
    }


    *size = index;
    for (int i = 0; i < index; i++){
        for (int j = 0; j < 4; j++){
            codes[i][j] = new_codes[i][j];
        }
    }
}