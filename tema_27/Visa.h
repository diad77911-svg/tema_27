#ifndef VISA_H
#define VISA_H

#include <iostream>
#include <string>
#include "Date.h"

class Visa {
private:
    std::string country;
    Date openDate;
    Date closeDate;

public:
    Visa(const std::string& ctry = "", const Date& oDate = Date(), const Date& cDate = Date());

    std::string getCountry() const;
    Date getOpenDate() const;
    Date getCloseDate() const;

    void setCountry(const std::string& c);
    void setOpenDate(const Date& d);
    void setCloseDate(const Date& d);

    void display() const;
};

#endif 