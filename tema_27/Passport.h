#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <string>
#include "Date.h"

class Passport {
private:
    std::string series;
    std::string number;
    std::string surname;
    std::string name;
    std::string patronymic;
    Date birthDate;
    std::string birthPlace;
    Date issueDate;
    std::string issuedBy;
    std::string propiska;

public:
    Passport(const std::string& ser = "", const std::string& num = "",
        const std::string& sur = "", const std::string& nm = "",
        const std::string& patron = "", const Date& bDate = Date(),
        const std::string& bPlace = "", const Date& iDate = Date(),
        const std::string& issuer = "", const std::string& prop = "");

    std::string getSeries() const;
    std::string getNumber() const;
    std::string getSurname() const;
    std::string getName() const;
    std::string getPatronymic() const;
    Date getBirthDate() const;
    std::string getBirthPlace() const;
    Date getIssueDate() const;
    std::string getIssuedBy() const;
    std::string getPropiska() const;

    void setSeries(const std::string& s);
    void setNumber(const std::string& n);
    void setSurname(const std::string& s);
    void setName(const std::string& n);
    void setPatronymic(const std::string& p);
    void setBirthDate(const Date& d);
    void setBirthPlace(const std::string& p);
    void setIssueDate(const Date& d);
    void setIssuedBy(const std::string& i);
    void setPropiska(const std::string& p);

    virtual void display() const;

    virtual ~Passport();
};

#endif 