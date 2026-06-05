#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date {
private:
    std::string value;
public:
    Date(const std::string& date = "");
    std::string getValue() const;
    void setValue(const std::string& date);
    void display() const;
};

#endif 