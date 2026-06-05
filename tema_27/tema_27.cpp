#include "ForeignPassport.h"

int main() {
    // ЗВИЧАЙНИЙ ПАСПОРТ
    Passport ukrPass(
        "AA", "246810",                        
        "Бєлєвцова", "Діана", "Денисівна",      
        Date("11.03.2008"),                     
        "м. Харків",                            
        Date("15.06.2024"),                     
        "Холодногірським РУ ГУ ДМС України в Харківській області",
        "м. Харків, вул. Сумська, 15"          
    );

    std::cout << "========== ЗВИЧАЙНИЙ ПАСПОРТ ==========" << std::endl;
    ukrPass.display();
    std::cout << std::endl;

    // ЗАКОРДОННИЙ ПАСПОРТ 
    ForeignPassport foreignPass(
        "EH", "135792",                         
        "Бєлєвцова", "Діана", "Денисівна",     
        Date("11.03.2008"),                     
        "м. Харків",                          
        Date("10.01.2025"),                     
        "ДМС України",                       
        "м. Харків, вул. Сумська, 15"           
    );

    // візи
    Visa visa1("Польща", Date("01.06.2025"), Date("01.09.2025"));
    Visa visa2("Італія", Date("15.07.2025"), Date("15.10.2025"));
    Visa visa3("Іспанія", Date("20.01.2026"), Date("20.04.2026"));

    foreignPass.addVisa(visa1);
    foreignPass.addVisa(visa2);
    foreignPass.addVisa(visa3);

    std::cout << "========== ЗАКОРДОННИЙ ПАСПОРТ (ПІСЛЯ ДОДАВАННЯ ВІЗ) ==========" << std::endl;
    foreignPass.display();
    std::cout << std::endl;

    //  віза Італія)
    foreignPass.removeVisa("Італія");
    std::cout << "========== ЗАКОРДОННИЙ ПАСПОРТ (ПІСЛЯ ВИДАЛЕННЯ ВІЗИ ІТАЛІЯ) ==========" << std::endl;
    foreignPass.display();

    return 0;
}