#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str)
{
    stringstream ss(str);
    string word;
    size_t count = 0;
    while (ss >> word)
        count++;
    return count;
}

int main(void)
{
    const string filename = "text.txt";

    ifstream File(filename);

    string temp;
    string text;

    while (getline(File, temp))
        text += temp + "\n";

    cout << text << endl;

    int word_count = countWords(text);

    cout << "Number of words in a text: " << word_count << endl;

    File.close();
    return 0;
}