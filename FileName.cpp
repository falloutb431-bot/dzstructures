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
  
    const string monthNames[] = {
        "",                 
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int monthNumber;

    while (true) {
        cout << "Enter the month number: ";
        cin >> monthNumber;

      
        if (monthNumber == 0) {
            cout << "Goodbye!" << endl;
            break;
        }

        
        if (monthNumber >= JANUARY && monthNumber <= DECEMBER) {
            
            Month month = static_cast<Month>(monthNumber);
            cout << monthNames[month] << endl;
        }
        else {
            cout << "Invalid month number!" << endl;
        }
    }

    return 0;
}