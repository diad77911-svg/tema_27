#include "Date.h"

Date::Date(const std::string& date) : value(date) {}

std::string Date::getValue() const {
    return value;
}

void Date::setValue(const std::string& date) {
    value = date;
}

void Date::display() const {
    std::cout << value;
}