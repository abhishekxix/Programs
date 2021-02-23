// 2.  An electricity board charges the following rates to domestic users to discourage large
//     consumption of energy : For the first 100 units − 50 P per unit Beyond 300 units − 60 P per
//     unit If the total cost is more than Rs.250.00 then an additional surcharge of 15% is added on
//     the difference. Define a class Electricity in which the function Bill computes the cost. Define
//     a derived class More_Electricity and override Bill to add the surcharge.
// Ans. 
    #include <iostream>

    class Electricity {
        protected :
            int number_of_units;
            double bill;
        
        public :
            Electricity(int initial_units = 0);
            void Bill();
            void set_units(int input);
            double get_bill() {return bill;}
    };
    
    Electricity::Electricity(int initial_units)
        : number_of_units {initial_units}, bill {} {
            Bill();
    }
    void Electricity::Bill() {
        if(number_of_units > 300) {
            bill = (number_of_units - 300) * 0.6;
            int rest_units {300};
            bill += rest_units * 0.5;
        }
        else 
            bill = number_of_units * 0.5;            
    }

    class More_Electricity : public Electricity {
        public :
            More_Electricity(int initial_units = 0);
            void Bill();
    };

    More_Electricity::More_Electricity(int initial_units)
        : Electricity {initial_units} {
            Bill();
    }
    void More_Electricity::Bill() {
        if(number_of_units > 300) {
            bill = (number_of_units - 300) * 0.6;
            int rest_units {300};
            bill += rest_units * 0.5;
        }
        else 
            bill = number_of_units * 0.5;
        
        if(bill > 250) 
            bill += bill * 0.15;

    }
    int main() {
        More_Electricity a{600};
        std::cout << a.get_bill() << std::endl;

        return 0;
    }