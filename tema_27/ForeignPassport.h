#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

#include "Passport.h"
#include "Visa.h"
#include <vector>

class ForeignPassport : public Passport {
private:
    std::vector<Visa> visas;  

public:
    ForeignPassport(const std::string& ser = "", const std::string& num = "",
        const std::string& sur = "", const std::string& nm = "",
        const std::string& patron = "", const Date& bDate = Date(),
        const std::string& bPlace = "", const Date& iDate = Date(),
        const std::string& issuer = "", const std::string& prop = "");

    void addVisa(const Visa& v);
    bool removeVisa(const std::string& country);
    void listVisas() const;

    void display() const override;  
};

#endif 