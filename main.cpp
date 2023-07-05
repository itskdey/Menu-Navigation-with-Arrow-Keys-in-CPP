#include <iostream> // header file for input and output operations in C++
#include <conio.h> // header file that provides access to several functions through the console
#include <windows.h> // header file that defines the Windows API
#include "Headers/antheaderplusplus.h" // custom header file

using namespace std; // allows referring to elements in the standard namespace

int main() {
    again:
    int option;
    static int j = 0;
    system("cls"); // clear the console screen

    do {
        foreColor(14); // set the text color to yellow
        gotoxy(17, 7);
        cout << "-- MENU --" << endl;
        gotoxy(9, 9);
        cout << "1 - OPTION 1" << endl;
        gotoxy(9, 11);
        cout << "2 - OPTION 2" << endl;
        gotoxy(9, 13);
        cout << "3 - OPTION 3" << endl;

        gotoxy(9, 17);
        cout << "USE UP AND DOWN ARROW KEYS...";

        if (j == 0) {
            foreColor(5); // set the text color to purple
            gotoxy(9, 9);
            cout << "1 - OPTION 1" << endl;
        }
        if (j == 1) {
            foreColor(5); // set the text color to purple
            gotoxy(9, 11);
            cout << "2 - OPTION 2" << endl;
        }
        if (j == 2) {
            foreColor(5); // set the text color to purple
            gotoxy(9, 13);
            cout << "3 - OPTION 3" << endl;
        }

        option = getch(); // get the key pressed by the user
        switch (option) {
            case 80: j++; if (j > 2) j = 0; break; // down arrow key pressed, increment j and wrap around if necessary
            case 72: j--; if (j < 0) j = 2; break; // up arrow key pressed, decrement j and wrap around if necessary
        }
    } while (option != 13); // repeat until the user presses the Enter key

    switch (j) {
        case 0:
            cls();
            cout << " Handle OPTION 1 ";
            getch();
            break;
        case 1:
            cls();
            cout << " Handle OPTION 2 ";
            getch();
            break;
        case 2:
            cls();
            cout << " Handle OPTION 3 ";
            getch();
            break;
    }

}
