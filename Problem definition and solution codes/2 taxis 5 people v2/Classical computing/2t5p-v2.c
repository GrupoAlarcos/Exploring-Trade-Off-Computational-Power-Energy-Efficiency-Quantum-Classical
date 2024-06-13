#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>// Booleanos

// 2 taxis, 5 people version 2

bool check_passengers_per_taxi(int *taxi_assignment, int num_passengers);
void get_taxi_assignment(int taxi_assignment[], int num_passengers);
void print_taxi_assignment(int taxi_assignment[], int num_passengers);

void main(){
    time_t t;
    srand((unsigned) time(&t));
    int taxi_assignment[5] = {0,0,0,0,0};
    int num_passengers = sizeof(taxi_assignment)/sizeof(taxi_assignment[0]);
    
    get_taxi_assignment(taxi_assignment, num_passengers);
}

void get_taxi_assignment(int taxi_assignment[], int num_passengers){
    int i;

    for(i=0; i<num_passengers; i++){
        taxi_assignment[i] = rand() % 2;
    }

    // Constraint check
    if (taxi_assignment[0] != taxi_assignment[1] && check_passengers_per_taxi(taxi_assignment, num_passengers)){
        print_taxi_assignment(taxi_assignment, num_passengers);
    } else {
        get_taxi_assignment(taxi_assignment, num_passengers);
    }
}

bool check_passengers_per_taxi(int *taxi_assignment, int num_passengers){
    int total_value = 0;
    bool correct_passengers = false;

    for(int i = 0; i < num_passengers; i++){
        total_value += taxi_assignment[i];
    }

    if (total_value<4 && total_value>2)
        correct_passengers = true;

    return correct_passengers;
}

void print_taxi_assignment(int taxi_assignment[], int num_passengers){
    int j,k;

    printf("\nThe taxi assignment is:");
    for (j=0; j<2; j++){
        printf("\n  -Taxi %d:", j+1);
        
        for (k=0; k<num_passengers; k++){
            if(taxi_assignment[k] == j){
                printf("\n   Person %d", k+1);
            }
        }
    }
}