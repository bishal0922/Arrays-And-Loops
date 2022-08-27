/*
Bishal Giri
This program will ask the user for a series of numbers and print them in the opposite orders in a table format.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20 //constant declaration

void print_reversed(float arr[], int N); //function declaration

int main(){
float data[MAX_SIZE];
int N;
printf("How many numbers are there? ");
scanf("%d", &N);
printf("Please enter the %d numbers: \n",N);
//calling the function
print_reversed(data, N);
}

//function definition for reverse the given set of data
void print_reversed(float arr[], int N){
    for (int i=0; i<N; i++){
        printf("data[%d] = ", i);
        scanf("%f", &arr[i]);
    }

printf("\nThe array printed in revered order: \n");

    for (int i = N-1; i>=0; i--){
        printf("|%10.2f|\n", arr[i]);
    }

}
