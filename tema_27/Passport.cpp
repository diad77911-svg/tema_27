#include "Passport.h"

Passport::Passport(const std::string& ser, const std::string& num,
    const std::string& sur, const std::string& nm,
    const std::string& patron, const Date& bDate,
    const std::string& bPlace, const Date& iDate,
    const std::string& issuer, const std::string& prop)
    : series(ser), number(num), surname(sur), name(nm), patronymic(patron),
    birthDate(bDate), birthPlace(bPlace), issueDate(iDate),
    issuedBy(issuer), propiska(prop) {
}

std::string Passport::getSeries() const { return series; }
std::string Passport::getNumber() const { return number; }
std::string Passport::getSurname() const { return surname; }
std::string Passport::getName() const { return name; }
std::string Passport::getPatronymic() const { return patronymic; }
Date Passport::getBirthDate() const { return birthDate; }
std::string Passport::getBirthPlace() const { return birthPlace; }
Date Passport::getIssueDate() const { return issueDate; }
std::string Passport::getIssuedBy() const { return issuedBy; }
std::string Passport::getPropiska() const { return propiska; }

void Passport::setSeries(const std::string& s) { series = s; }
void Passport::setNumber(const std::string& n) { number = n; }
void Passport::setSurname(const std::string& s) { surname = s; }
void Passport::setName(const std::string& n) { name = n; }
void Passport::setPatronymic(const std::string& p) { patronymic = p; }
void Passport::setBirthDate(const Date& d) { birthDate = d; }
void Passport::setBirthPlace(const std::string& p) { birthPlace = p; }
void Passport::setIssueDate(const Date& d) { issueDate = d; }
void Passport::setIssuedBy(const std::string& i) { issuedBy = i; }
void Passport::setPropiska(const std::string& p) { propiska = p; }

void Passport::display() const {
    std::cout << "Паспорт України:" << std::endl;
    std::cout << "Серія: " << series << std::endl;
    std::cout << "Номер: " << number << std::endl;
    std::cout << "Прізвище: " << surname << std::endl;
    std::cout << "Ім'я: " << name << std::endl;
    std::cout << "По батькові: " << patronymic << std::endl;
    std::cout << "Дата народження: "; birthDate.display(); std::cout << std::endl;
    std::cout << "Місце народження: " << birthPlace << std::endl;
    std::cout << "Дата видачі: "; issueDate.display(); std::cout << std::endl;
    std::cout << "Ким виданий: " << issuedBy << std::endl;
    std::cout << "Прописка: " << propiska << std::endl;
}

Passport::~Passport() {}