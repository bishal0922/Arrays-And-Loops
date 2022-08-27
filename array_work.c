/*
Bishal Giri
This program will take a number of values from a user and store them as an array then print them out to the user after reversing and adding values onto it.
*/


#include <stdio.h>

void user2array(int N, int arr[]);
void print_array(int N, int arr[]);
void reverse(int N, int arr[]);
void add_val(int N, int arr[], int val);

int main()
{
    int N, mx, value;

    printf("Enter N: ");
    scanf("%d", &N);

    int arr[N];

    user2array(N, arr);

    print_array(N, arr);


    reverse(N,arr);
    printf("\nAfter reversing the array is:\n");
    print_array(N,arr);

    value = 10;
    add_val(N, arr, value);
    printf("\nAfter adding value %d to every element in it: \n", value);
    print_array(N, arr);

    value = 100;
    add_val(N, arr, value);
    printf("\nAfter adding value %d to every element in it: \n", value);
    print_array(N, arr);

}

void user2array(int N, int arr[])           //THIS IS THE INITIAL ARRAY WHICH WILL TAKE THE USER INPUT
{
    printf("Enter %d integers: ", N);

    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

}
void print_array(int N, int arr[])          //THIS FUNCTION WILL THE PRINT THE ARRAY; EVEN AFTER ITS UPDATED MANY TIMES
{
    printf("The array is: \n");

    for (int i=0; i<N; i++)
    {
        printf("%5d,", arr[i]);
    }
    printf("\n");
}

void reverse(int N, int arr[])              //THIS FUNCTION WILL REVERSE THE ARRAY
{
    int handy_array[N];                      //THIS ARRAY WILL ACT AS A TEMPORARY ARRAY TO STORE OUR REVERSED ARRAY ELEMENTS

    for (int i=N; i>0; i--)
    {
        handy_array[N-i]= arr[i-1];         //WE HAVE SUCESSFULLY TRANSFERRED THE VALUE OF arr[] to our auxiliary array in reverse order
    }

    for (int i=0; i<N; i++)                 //NOW WE MAKE SURE THE ALREADY REVERSED ELEMENTS FROM THE AUXILIARY ARRAY IS TRANSFERRED BACK TO OUR ORIGINAL ARRAY
    {
        arr[i]= handy_array[i];
    }
}

void add_val(int N, int arr[], int val)         //THIS FUNCTION WILL ADD THE VALUE val TO EACH ELEMENT IN THE ARRAY
{
    for (int i=0; i<N; i++)
    {
        arr[i]+=val;

    }
}


