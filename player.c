#include <stdbool.h>
#include <stdlib.h>
#include "functions.h"

struct guess evaluate_guess(int g[4], int my_code[4]){
    struct guess result;
    result.red = 0;
    result.white = 0;

    int guess_color_count[6] = {0};
    int code_color_count[6] = {0};

    for (int i = 0; i < 4; i++){
        if (g[i] == my_code[i]){
            result.red++;
        }else{
            guess_color_count[g[i] - 1] += 1;
            code_color_count[my_code[i] - 1] += 1;
        }
    }

    for (int i = 0; i < 6; i++){
        result.white += (guess_color_count[i] < code_color_count[i]) ? guess_color_count[i] : code_color_count[i];
    }

    return result;
}
