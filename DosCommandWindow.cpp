#include <iostream>
#include <Windows.h>

using namespace std;

string password = "1470369258";
string name = "Gy32bit";
string command;
bool is_admin = 0;


int start() {
    cout << "DosCommandWindow" << endl;
    cout << "copyright(c) Gy32bit  ||  1.0" << endl;
    if (is_admin) {
        cout << "锅鳖!" << endl;
    }

    return 0;
}

int input_command(string tips) {
    cout << endl << tips;
    cin >> command;

    return 0;
}

//down to see commands:

int clean() {
    system("cls");

    return 0;
}

int pause() {
    system("pause");
    

    return 0;
}

int admin() {
    if (!is_admin) {
        input_command("name: ");
        if (command == name) {
            clean();
            input_command("password:");
            if (command == password) {
                is_admin = 1;
                clean();
                start();

            }
            else {
                cout << "er" << endl;
            }
        }
        else {
            cout << "er" << endl;
        }
    }
    else {
        cout << "You are admin now!" << endl;

    }

    return 0;
}

int exit_admin() {
    is_admin = 0;
    clean();
    start();

    return 0;
}







//ends!

int main()
{
    start();
    while (command != "close") {
        input_command(">>> ");
        if (command == "close") {
            continue;

        }
        if (command == "pause") {
            pause();

            continue;

        }
        if (command == "admin") {
            admin();

            continue;
        }
        if (command == "exit_admin") {
            exit_admin();

            continue;

        }
        if (command == "clean") {
            clean();

            continue;

        }
    }

    return 0;
}
