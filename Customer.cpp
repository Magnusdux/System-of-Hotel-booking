//
// Created by alina_venera on 08.03.2024.
//

#include "Customer.h"
Customer::Customer(std::string name, std::string surname, int telNumber, int passportId)
    : name{name}, surname{surname}, telNumber {telNumber}, passportId {passportId}  {}

const string &Customer::getName() const {
    return name;
}

void Customer::setName(const string &name) {
    Customer::name = name;
}

const string &Customer::getSurname() const {
    return surname;
}

void Customer::setSurname(const string &surname) {
    Customer::surname = surname;
}

int Customer::getTelNumber() const {
    return telNumber;
}

void Customer::setTelNumber(int telNumber) {
    Customer::telNumber = telNumber;
}

int Customer::getPassportId() const {
    return passportId;
}

void Customer::setPassportId(int passportId) {
    Customer::passportId = passportId;
}
