#include <iostream>
#include <Headers/Fibonacci.h>
#include <Headers/Key.h>
#include <Headers/Decipher.h>
#include <Headers/Encipher.h>
#include <algorithm>

using namespace std;

int main()
{

    bool keepRunning = true;
    string yesNo = "yes";
    int choice{1};

    while (keepRunning) {

        cout << "Press 1 to encipher/Press 2 to decipher: ";
        cin >> choice;

        if (choice == 1) {
            cin.ignore();
            string userKey1;

            cout << "Welcome to the encipher section of the program" << endl;
            cout << "Please enter the key you would like to use (max of 46 unique characters): ";
            getline(cin, userKey1);
            transform(userKey1.begin(), userKey1.end(), userKey1.begin(), ::tolower);

            cout << "Enter your message you would like to have enciphered: ";
            string msg1;
            getline(cin, msg1);

            cout << "Enciphering..." << endl;
            cout << "Your message: ";
            encipher(msg1, userKey1);
        }
        else if (choice == 2) {
            cin.ignore();
            string userKey2;

            cout << "\nWelcome to the decipher section of the program" << endl;
            cout << "Please enter the key you would like to use (max of 46 unique characters): ";
            getline(cin, userKey2);
            transform(userKey2.begin(), userKey2.end(), userKey2.begin(), ::tolower);

            cout << "Enter your message you would like to have Deciphered: ";
            string msg2;
            getline(cin, msg2);

            cout << "Deciphering..." << endl;
            cout << "Your message: ";
            decipher(msg2, userKey2);
        }

        cout << "\nWould you like to run the program again? (Enter yes or no) " << endl;
        cin >> yesNo;
        transform(yesNo.begin(), yesNo.end(), yesNo.begin(), ::tolower);
        if (yesNo == "no")
            keepRunning = false;
    }

}
