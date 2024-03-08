//
// Created by alina_venera on 08.03.2024.
//

#ifndef UNTITLED_HOTEL_H
#define UNTITLED_HOTEL_H
#include <string>
using namespace std;
class Hotel {
private:
    string nameOfhotel;
    int telNumber;
    string adress;
public:
    Hotel (string nameOfhotel, int telNumber, string adress);

    const string &getNameOfhotel() const;

    void setNameOfhotel(const string &nameOfhotel);

    int getTelNumber() const;

    void setTelNumber(int telNumber);

    const string &getAdress() const;

    void setAdress(const string &adress);
};


#endif //UNTITLED_HOTEL_H
