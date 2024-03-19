//
// Created by alina_venera on 08.03.2024.
//

#ifndef UNTITLED_BOOKING_H
#define UNTITLED_BOOKING_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Booking {
    const int id = rand() % 100 + 1;
    int dayOfRent;
    int numberOfroom;
    int priceOfRent;
    bool isBooked = false;
    static int bookingQuantity;
public:
    Booking() {};
    Booking(int number, int price);

    Booking (int rent, int number, int price );

    Booking(const Booking& b);

    int getDayOfRent() const;

    void setDayOfRent(int dayOfRent);

    int getNumberOfroom() const;

    void setNumberOfroom(int numberOfroom);

    int getPriceOfRent() const;

    void setPriceOfRent(int priceOfRent);

    void makeBooking();

    void getBookingInfo();

    static void getBookingQuantity();

    friend ostream &operator<<(ostream &os, const Booking &booking);

    friend istream &operator>>(istream &is, Booking &booking);


};


#endif //UNTITLED_BOOKING_H
