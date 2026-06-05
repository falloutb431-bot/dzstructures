#include <iostream>
#include <string>

using namespace std;

struct Address {
    string city;
    string street;
    int houseNumber;
    int apartmentNumber;
    string postalCode;
};

void printAddress(const Address& addr) {
    cout << "City: " << addr.city << endl;
    cout << "Street: " << addr.street << endl;
    cout << "House number: " << addr.houseNumber << endl;
    cout << "Apartment number: " << addr.apartmentNumber << endl;
    cout << "Postal code: " << addr.postalCode << endl;
    cout << endl;
}

int main() {
    Address address1 = {
        "Moscow",
        "Arbat",
        12,
        8,
        "123456"
    };

    Address address2 = {
        "Izhevsk",
        "Pushkina",
        59,
        143,
        "953769"
    };

    printAddress(address1);
    printAddress(address2);

    return 0;
}