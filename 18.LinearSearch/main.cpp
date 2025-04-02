#include <iostream>
#include <vector>

using namespace std;

// Linear Search
int searchItem(vector<int> array, int item)
{
    for (int i = 0; i < array.size(); i++)
        if (array[i] == item)
            return i;
    return -1;
}

int main(void)
{
    vector<int> array = {5, 6, 4, 7, 3, 8, 2, 9, 1, 0, 10};
    int target;

    cout << "Enter a target number between 0 and 10: ";
    cin >> target;

    int foundIndex = searchItem(array, target);

    if (foundIndex != -1)
        cout << "The element " << target << " is found at index " << foundIndex << endl;
    else
        cout << "The element " << target << " is not found in an array!" << endl;

    return 0;
}