#include "ForeignPassport.h"
#include <algorithm>

ForeignPassport::ForeignPassport(const std::string& ser, const std::string& num,
    const std::string& sur, const std::string& nm,
    const std::string& patron, const Date& bDate,
    const std::string& bPlace, const Date& iDate,
    const std::string& issuer, const std::string& prop)
    : Passport(ser, num, sur, nm, patron, bDate, bPlace, iDate, issuer, prop) {
}

void ForeignPassport::addVisa(const Visa& v) {
    visas.push_back(v);
}

bool ForeignPassport::removeVisa(const std::string& country) {
    auto it = std::find_if(visas.begin(), visas.end(),
        [&country](const Visa& v) { return v.getCountry() == country; });
    if (it != visas.end()) {
        visas.erase(it);
        return true;
    }
    return false;
}

void ForeignPassport::listVisas() const {
    if (visas.empty()) {
        std::cout << "Немає віз." << std::endl;
        return;
    }
    std::cout << "Візи в закордонному паспорті:" << std::endl;
    for (size_t i = 0; i < visas.size(); ++i) {
        std::cout << i + 1 << ". ";
        visas[i].display();
    }
}

void ForeignPassport::display() const {
    Passport::display();
    std::cout << "\n--- Закордонний паспорт ---" << std::endl;
    listVisas();
}