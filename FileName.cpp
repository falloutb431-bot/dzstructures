#include <iostream>
#include <string>

using namespace std;


enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    int monthNumber;

    do {
        cout << "Enter the month number: ";
        cin >> monthNumber;

     
        if (monthNumber == 0) {
            cout << "Goodbye" << endl;
            break;
        }

   
        if (monthNumber >= JANUARY && monthNumber <= DECEMBER) {
         
            string monthNames[] = {
                "January", "February", "March", "April",
                "May", "June", "July", "August",
                "September", "October", "November", "December"
            };
            
            cout << monthNames[monthNumber - 1] << endl;
        }
        else {
            cout << "Invalid month number!" << endl;
        }
    } while (true); 

    return 0;
}