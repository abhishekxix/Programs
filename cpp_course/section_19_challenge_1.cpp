// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>


struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main() {
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    std::cout << std::endl << std::endl;
    std::cout << std::setw(45) << tours.title << std::endl;
    std::cout << std::endl << std::endl;
    
    std::cout << std::setw(20) << std::left << "Country"
              << std::setw(20) << std::left << "City"
              << std::setw(20) << std::left << "Population"
              << std::setw(20) << std::left << "Price"
              << std::endl;
    std::cout << std::setw(66) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    for(auto country : tours.countries) {   
        std::cout << country.name << std::endl;
        for(auto city : country.cities) {       
            std::cout << std::setw(25) << std::right << city.name 
                          << std::setw(22) << city.population 
                          << std::setw(19) << city.cost 
                          << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}