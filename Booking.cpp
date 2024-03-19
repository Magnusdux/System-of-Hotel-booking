//
// Created by alina_venera on 08.03.2024.
//

#include "Booking.h"
#include <iostream>
using namespace std;

Booking::Booking(int rent, int number, int price)
        : dayOfRent{rent}, numberOfroom{number}, priceOfRent{price} {}

Booking::Booking(const Booking& b)
{
    cout << "Copy constructor called " << endl;
    this->dayOfRent = b.dayOfRent;
    this->numberOfroom = b.numberOfroom;
    this->priceOfRent = b.priceOfRent;

}

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
void Booking::makeBooking()
{
    Booking::isBooked = true;

    Booking::bookingQuantity++;
}

void Booking::getBookingInfo() {
    cout << "Booking status: " << (isBooked ? "successfully booked" : "pending booking") << endl;
    cout << "Your booking details:"  << "\n";
    cout << "Booking id: " << id << "\n";
    cout << "days of rent: " << dayOfRent << "\n";
    cout << "number of rooms: " << numberOfroom  << "\n";
    cout << "price of Rent: " << priceOfRent  << "\n";
}

void Booking::getBookingQuantity() {
    cout << "The Quantity of booking:" << bookingQuantity;
}
Booking::Booking(int number, int price) : Booking{1, number, price} {

}

ostream &operator<<(ostream &os, const Booking &booking) {
    os << "id: " << booking.id << " dayOfRent: " << booking.dayOfRent << " numberOfroom: " << booking.numberOfroom
       << " priceOfRent: " << booking.priceOfRent << " isBooked: " << booking.isBooked;
    return os;
}
istream &operator>>(istream &is, Booking &booking) {
    is >> booking.priceOfRent;
    return is;
}
