#include <iostream>
#include <vector>

using namespace std;

template <typename Type>
int countOccurence(vector<Type> array, Type target)
{
    int total = 0;
    for (int i = 0; i < array.size(); i++)
        if (array[i] == target)
            total++;
    return total;
}

int main(void)
{
    int target;
    vector<int> array = {1, 2, 3, 4, 5, 6, 8, 9, 9, 8, 1, 1, 2, 2, 9, 9, 1, 5, 6};
    cout << "Enter a target number: ";
    cin >> target;

    int count = countOccurence(array, target);

    cout << "Number " << target << " occurred " << count << " times in an array!" << endl;

    return 0;
}