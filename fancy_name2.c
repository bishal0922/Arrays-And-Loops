/*
Bishal Giri
This program will ask the user for their first and last name and prints them in a ladder formation with stars around them.
*/

#include <stdio.h>
#include <string.h>
int main(){

//variable declaration
char first_name[99], second_name[99];

//asking the user for their respective first and last names
printf("Please enter your FIRST name (one word): ");
scanf("%s", first_name);
printf("Please enter your LAST name (one word): ");
scanf("%s", second_name);

int first_name_max = strlen(first_name);
int second_name_max = strlen(second_name);

    //print the first name
    for (int i=0; i<first_name_max; i++){
        for (int j=0; j<i;j++){
            printf(" ");
        }
    printf("* %c *\n", first_name[i]);
    }

    //print the small gap without letter in between
    for (int i=0; i<first_name_max;i++){
        printf(" ");
    }

    printf("*   *\n");

    //print the last name
    for (int i=first_name_max+1; i<first_name_max+1+second_name_max; i++){
        for (int j=0; j<i;j++){
            printf(" ");
        }
    printf("* %c *\n", second_name[i-(first_name_max+1)]);
    }
}
