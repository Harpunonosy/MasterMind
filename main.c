#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main(){

    //testy
    /*
    for (int i = 0; i < 1296; i++){
        int my_code[4];
        int codes[1296][4];
        int size = 1296;
        int tries_count = 0;

        create_codes(codes);

        for (int j = 0; j < 4; j++){
            my_code[j] = codes[i][j];
        }

        while (true){
            int guess[4];
            tries_count++;
            
            for (int k = 0; k < 4; k++){
                guess[k] = codes[0][k];
            }

            struct guess result = evaluate_guess(guess, my_code);
            filter_codes(codes, &size, guess, result.red, result.white);

            printf("Size: %d\n", size);

            if (size == 1){
                printf("Dla kodu %d, %d, %d, %d potrzebowano %d prob\n", my_code[0], my_code[1], my_code[2], my_code[3], tries_count);
                if (tries_count > 8){
                    printf("Za duzo prob\n");
                }
                break;
            }

        }
    }*/

    
    //GRA
    

    int codes[1296][4];
    int size = 1296;

    create_codes(codes);

    while (true){
        int guess[4];
        int red, white;
        

        for (int i = 0; i < 4; i++) {
            guess[i] = codes[0][i];
        }

        printf("Czy kod to: %d, %d, %d, %d\n", guess[0], guess[1], guess[2], guess[3]);
        printf("Podaj czerwone i biale: ");

        scanf("%d %d", &red, &white);

        filter_codes(codes, &size, guess, red, white);

        if (size == 1){
            printf("Kod to: ");
            for (int i = 0; i < 4; i++){
                printf("%d", codes[0][i]);
            }
            printf("\n");
            break; 
        }else if (size == 0){
            printf("Cheating\n");
            break;
        }    
        

    }
    return 0;
}