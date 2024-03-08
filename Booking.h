//
// Created by alina_venera on 08.03.2024.
//

#ifndef UNTITLED_BOOKING_H
#define UNTITLED_BOOKING_H


class Booking {
    int dayOfRent;
    int numberOfroom;
    int priceOfRent;
public:
    Booking(int number, int price);

    Booking (int rent, int number, int price );

    int getDayOfRent() const;

    void setDayOfRent(int dayOfRent);

    int getNumberOfroom() const;

    void setNumberOfroom(int numberOfroom);

    int getPriceOfRent() const;

    void setPriceOfRent(int priceOfRent);


};


#endif //UNTITLED_BOOKING_H
