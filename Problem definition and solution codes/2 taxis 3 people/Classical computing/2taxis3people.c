#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 2 taxis, 3 people

void get_taxi_assignment(int taxi_assignment[], int num_passengers);
void print_taxi_assignment(int taxi_assignment[], int num_passengers);

void main(){
    time_t t;
    srand((unsigned) time(&t));
    int taxi_assignment[3] = {0,0,0};
    int num_passengers = sizeof(taxi_assignment)/sizeof(taxi_assignment[0]);
    
    get_taxi_assignment(taxi_assignment, num_passengers);
}

void get_taxi_assignment(int taxi_assignment[], int num_passengers){
    int i;

    for(i=0; i<num_passengers; i++){
        taxi_assignment[i] = rand() % 2;
    }

    // Constraint check
    if (taxi_assignment[2] != taxi_assignment[0] && taxi_assignment[2] != taxi_assignment[1]){
        print_taxi_assignment(taxi_assignment, num_passengers);
    } else {
        get_taxi_assignment(taxi_assignment, num_passengers);
    }
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