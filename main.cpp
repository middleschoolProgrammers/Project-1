#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string username, password;

    cout << "Username:";
    cin >> username;
    cout << "Password:";
    cin >> password;

    if ( username + password == "rootroot" )
    {
        cout << "\nLogging in... Do not press any keys...";
        Sleep(4000);
        system("CLS");
    }
    else
        cout << "\nIncorrect username or password!";

    cout << "Hello root | You have 1 new email | Log off";

    return 0;
}
