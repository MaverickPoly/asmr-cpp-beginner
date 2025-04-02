#include <iostream>

using namespace std;

// Bubble sort
void sortArray(int *array, size_t size)
{
    bool swapped = false;
    for (int i = 0; i < size; i++)
    {
        swapped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j + 1] < array[j])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                swapped = true;
            }
        }

        if (!swapped)
            return;
    }
}

void displayArray(int *array, size_t size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

int main(void)
{
    int array[] = {9, 8, 1, 2, 7, 6, 3, 4, 5, 0, 10, 11};
    size_t size = sizeof(array) / sizeof(*array);

    cout << "Before sorting:" << endl;
    displayArray(array, size);

    cout << endl
         << "After sorting: " << endl;
    sortArray(array, size);
    displayArray(array, size);

    return 0;
}