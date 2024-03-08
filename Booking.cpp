//
// Created by alina_venera on 08.03.2024.
//

#include "Booking.h"

Booking::Booking(int rent, int number, int price)
        : dayOfRent{rent}, numberOfroom{number}, priceOfRent{price} {}

int Booking::getDayOfRent() const {
    return dayOfRent;
}

void Booking::setDayOfRent(int dayOfRent) {
    Booking::dayOfRent = dayOfRent;
}

int Booking::getNumberOfroom() const {
    return numberOfroom;
}

void Booking::setNumberOfroom(int numberOfroom) {
    Booking::numberOfroom = numberOfroom;
}

int Booking::getPriceOfRent() const {
    return priceOfRent;
}

void Booking::setPriceOfRent(int priceOfRent) {
    Booking::priceOfRent = priceOfRent;
}

Booking::Booking(int number, int price) : Booking{1, number, price} {

}
