#include <iostream>
#include <Windows.h>

using namespace std;

string password = "1470369258";
string name = "Gy32bit";
string command;
bool is_admin = 0;

int prese(int key_n) {
    keybd_event(key_n, 0, 0, 0);
    keybd_event(key_n, 0, 2, 0);

    return 0;
}


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
    if (is_admin) {
        cout << "You are admin now!" << endl;
    }
    else {        
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

    return 0;
}

int exit_admin() {
    is_admin = 0;
    clean();
    start();

    return 0;
}

int cmd() {
    keybd_event(91, 0, 0, 0);
    keybd_event(82, 0, 0, 0);
    keybd_event(91, 0, 2, 0);
    keybd_event(82, 0, 2, 0);

    Sleep(1000);


    prese(67);
    prese(77);
    prese(68);

    prese(17);
    prese(17);


    return 0;
}

int help() {
    cout << "admin: 登录管理员" << endl;
    cout << "clean: 清屏" << endl;
    cout << "help: 打开帮助" << endl;
    cout << "pause: 暂停" << endl;
    cout << "cmd: 就cmd喽" << endl;
    if (is_admin) {
        cout << ">>>>管理员内容>>>>" << endl;
        cout << "exit_admin: 退出管理员" << endl;


    }

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
        if (command == "help") {
            help();

            continue;

        }
        if (command == "cmd") {
            cmd();

            continue;
        }
    }

    return 0;
}
