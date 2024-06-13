#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>// Booleans

// Bernstein-Vazirani (Secret number) - 4 positions (~qubits)

int secret_number[4] = {0,0,1,1};
int response; // To indicate if the number of 1's well positioned is even or odd

char oracle(int try_number[], int size_number); // To ask how many 1's are well positioned
int get_number_of_ones (int try_number[], int size_number); 

void main(){
    int try_number[4] = {0,0,0,0}; 
    int size_of_try_number = sizeof(try_number)/sizeof(try_number[0]);
    int i = 0, j, val = 0, NOO_try_number = get_number_of_ones(try_number, size_of_try_number);
    char obtained_response;
    bool found = false;

    for(int j = 0; j < 16, found == false; ++j) {
        // Binary Counter
        try_number[i] = j/8%2; try_number[i+1] = j/4%2; try_number[i+2] = j/2%2; try_number[i+3] = j%2;

        obtained_response = oracle(try_number, size_of_try_number);

        if (obtained_response == 'E' && get_number_of_ones(try_number, size_of_try_number)>0 && (get_number_of_ones(try_number, size_of_try_number)%2 == 0)){
            found = true;
        }
    }

    printf("\nSolution found. The secret number is: ");
    for (j=0; j<sizeof(try_number)/sizeof(try_number[0]); j++){
        printf("%d", try_number[j]);
    }
}

int get_number_of_ones (int try_number[], int size_number){
    int number_of_ones = 0;
    for (int i = 0; i<size_number; i++) {
        if (try_number[i] == 1)
            number_of_ones = number_of_ones + 1;
    }
    return number_of_ones;
}

char oracle(int try_number[], int size_number){
    int i, number_of_ones = 0;
    char response = ' ';

    for (int i = 0; i<size_number; i++) {
        if (secret_number[i] == try_number[i] && try_number[i] == 1)
            number_of_ones++;
    }
    // Even or odd checker
    if(number_of_ones % 2 == 0)
        response = 'E';
    else
        response = 'O';
    return response;
}



