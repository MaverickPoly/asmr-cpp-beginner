#include <iostream>
#include <vector>

using namespace std;

// Minimum Element
int findMin(vector<int> array)
{
    int min = array[0];
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

// Maximum Element
int findMax(vector<int> array)
{
    int max = array[0];
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int main(void)
{
    vector<int> array;
    cout << "Enter elements of an array(q to quit)" << endl;

    string temp;
    while (true)
    {
        cout << "Enter number: ";
        cin >> temp;

        if (temp == "q")
            break;

        try
        {
            array.push_back(stoi(temp));
        }
        catch (exception &e)
        {
            cout << "Invalid input! Please try again!" << endl;
        }
    }

    int min = findMin(array);
    int max = findMax(array);

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}