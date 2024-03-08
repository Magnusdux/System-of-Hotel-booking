//
// Created by alina_venera on 08.03.2024.
//

#include "Hotel.h"
Hotel::Hotel(std::string nameOfHotel, int telNumber, std::string adress)
        : nameOfhotel{nameOfHotel}, telNumber{telNumber}, adress{adress}  {}

const string &Hotel::getNameOfhotel() const {
    return nameOfhotel;
}

void Hotel::setNameOfhotel(const string &nameOfhotel) {
    Hotel::nameOfhotel = nameOfhotel;
}

int Hotel::getTelNumber() const {
    return telNumber;
}

void Hotel::setTelNumber(int telNumber) {
    Hotel::telNumber = telNumber;
}

const string &Hotel::getAdress() const {
    return adress;
}

void Hotel::setAdress(const string &adress) {
    Hotel::adress = adress;
}
