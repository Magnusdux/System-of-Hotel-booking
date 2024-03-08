//
// Created by alina_venera on 08.03.2024.
//

#ifndef UNTITLED_CUSTOMER_H
#define UNTITLED_CUSTOMER_H

#include <string>

using namespace std;

class Customer {
    string name;
    string surname;
    int telNumber;
    int passportId;
public:
    Customer(string name, string surname, int telNumber, int passportId);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    int getTelNumber() const;

    void setTelNumber(int telNumber);

    int getPassportId() const;

    void setPassportId(int passportId);

};


#endif //UNTITLED_CUSTOMER_H
