#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

enum LogTypes
{
    SUCCESS_TYPE,
    ERROR_TYPE,
    INFO_TYPE,
    WARNING_TYPE,
};

void setConsoleColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void logMessage(string message, LogTypes type)
{
    time_t now;
    time(&now);
    string dt = ctime(&now);
    dt.pop_back();

    string type_text;

    switch (type)
    {
    case SUCCESS_TYPE:
        setConsoleColor(FOREGROUND_GREEN);
        type_text = "Success";
        break;
    case ERROR_TYPE:
        setConsoleColor(FOREGROUND_RED);
        type_text = "Error";
        break;
    case INFO_TYPE:
        setConsoleColor(FOREGROUND_BLUE);
        type_text = "Info";
        break;
    case WARNING_TYPE:
        setConsoleColor(FOREGROUND_INTENSITY);
        type_text = "Warning";
        break;
    default:
        break;
    }

    cout
        << dt << " - " << type_text << " - " << message << endl;
    setConsoleColor(WHITE_BRUSH); // Resetting to default color
}

int main(void)
{
    logMessage("Hello world", INFO_TYPE);
    logMessage("You computer has been hacked!", ERROR_TYPE);
    logMessage("You became a millionaire!", SUCCESS_TYPE);

    return 0;
}