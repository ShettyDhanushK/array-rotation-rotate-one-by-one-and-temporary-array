#include <stdio.h>

void printArray(int arr[], int N) //Just prints the array
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void usingTemporaryArray(int arr[], int N, int d) //rotates the positions of elements based on d parameter
{
    int tempArr[N]; //Intialising a temporary array of size same as the original array.
    int j = 0;  // A counter to maintain the position of the temporary Array

    for(int i = d; i < N; i++) //Loops over N-d elements that is the N-d elements in the original array becomes the beginning element of the temporary array.
    {
        tempArr[j] = arr[i];
        j++;
    }

    for(int i = 0; i < d; i++) //Loops over d elements that is d elements in the orginal array becomes the last element of the temporary array.
    {
        tempArr[j] = arr[i];
        j++;
    }

    for(int i = 0; i < N; i++) //Copying all the elements of the temporary array to the original array.
    {
        arr[i] = tempArr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; //Declaring An array to work with
    int N = sizeof(arr) / sizeof(arr[0]); //Calculating the size of the array
    int d = 2; //how many positions the elements of the array to be moved

    printArray(arr, N); //Printing the array before rotation
    usingTemporaryArray(arr, N, d); //Calling the rotate function
    printArray(arr, N); //Printing the array after rotation

    return 0;
}