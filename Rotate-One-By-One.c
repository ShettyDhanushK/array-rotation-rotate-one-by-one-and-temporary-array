#include <stdio.h>

void printArray(int arr[], int N) //Just prints the array
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void rotateOneByOne(int arr[], int N, int d) //rotates the positions of elements based on d parameter
{
    for(int i = 0; i < d; i++) //loops how many times the rotation should take place
    {
        int last = arr[0]; //First element of the array is stored

        for(int j = 0; j < N - 1; j++) //loops over the array and shifts the elements of the array to one position to their left
        {
            arr[j] = arr[j+1];
        }
        arr[N-1] = last; //The last element of the array is assigned with the first element of the array before rotation.
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; //Declaring An array to work with
    int N = sizeof(arr) / sizeof(arr[0]); //Calculating the size of the array
    int d = 2; //how many positions the elements of the array to be moved

    printArray(arr, N); //Printing the array before rotation
    rotateOneByOne(arr, N, d); //Calling the rotate function
    printArray(arr, N); //Printing the array after rotation

    return 0;
}

//The time complexity is O(N*d)