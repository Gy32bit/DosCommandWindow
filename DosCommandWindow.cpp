#include <iostream>
#include <Windows.h>

using namespace std;

const int password = 1470369258;
int in_password;
string name = "Gy32bit";
string in_name;
string command;


int start(bool is_admin) {
    cout << "DosCommandWindow" << endl;
    cout << "copyright(c) Gy32bit  ||  1.0" << endl;
    cout << "锅鳖!" << endl;

    return 0;
}

int input_command() {
    cout << ">>> ";
    cin >> command;

    return 0;
}

//down to see commands:

int pause() {
    system("pause");
    

    return 0;
}

int main()
{
    start(0);
    while (command != "close") {
        input_command();
        if (command == "close") {
            continue;

        }
        if (command == "pause") {
            pause();

            continue;

        }
    }
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>|:-)|<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    return 0;
}
