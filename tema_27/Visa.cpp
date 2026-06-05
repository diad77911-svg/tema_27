#include "Visa.h"

Visa::Visa(const std::string& ctry, const Date& oDate, const Date& cDate)
    : country(ctry), openDate(oDate), closeDate(cDate) {
}

std::string Visa::getCountry() const { return country; }
Date Visa::getOpenDate() const { return openDate; }
Date Visa::getCloseDate() const { return closeDate; }

void Visa::setCountry(const std::string& c) { country = c; }
void Visa::setOpenDate(const Date& d) { openDate = d; }
void Visa::setCloseDate(const Date& d) { closeDate = d; }

void Visa::display() const {
    std::cout << "Країна: " << country << ", відкрита: ";
    openDate.display();
    std::cout << ", закрита: ";
    closeDate.display();
    std::cout << std::endl;
}