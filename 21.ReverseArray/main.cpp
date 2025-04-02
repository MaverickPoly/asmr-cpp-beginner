#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArray(vector<int> array)
{
    int start = 0;
    int end = array.size() - 1;
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    return array;
}

void displayArray(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    cout << endl;
}

int main(void)
{
    int total;
    cout << "How many values will you enter: ";
    cin >> total;

    vector<int> array;
    int temp;
    for (int i = 0; i < total; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp;
        array.push_back(temp);
    }

    cout << endl
         << "Reversing an array..." << endl;

    vector<int>
        reversed = reverseArray(array);

    displayArray(array);
    displayArray(reversed);

    return 0;
}