#include <iostream>
#include <string>

class Account_Holder {
	friend std::ostream &operator<<(std::ostream &out, const Account_Holder &acc);
	private :
		std::string name;
		std::string address;
		double balance;
		static constexpr const char *def_name = "unnamed";
		static constexpr const double def_balance = 0.0;
		static constexpr const char *def_address = "N/A";

	public :
		Account_Holder(std::string name = def_name, std::string address = def_address, double balance = def_balance);
		void withdraw(double amount);
		void deposit(double amount);
};

Account_Holder::Account_Holder(std::string name, std::string address, double balance)
	: name {name}, address {address}, balance {balance} {}

void Account_Holder::deposit(double amount) {
	if(amount < 0.0)
		std::cerr << "You can't deposit negative amount!\n";
	else
		balance += amount;
}

void Account_Holder::withdraw(double amount) {
	if(amount < 0.0)
		std::cerr << "You can't withdraw negative amount!\n";

	else if(balance - amount < 5000)
		throw std::string {"Balance less than min. balance exception"};

	else
		balance -= amount;
}

std::ostream &operator<<(std::ostream &out, const Account_Holder &acc) {
	out << acc.name << '\n'
		<< acc.address << '\n'
		<< acc.balance << '\n';
}

int main() {
	Account_Holder Abhishek {std::string{"Abhishek"}, std::string {"CU"}, 10000.02};

	std::cout << Abhishek;

	Abhishek.deposit(static_cast<double> (200));
	try {
		Abhishek.withdraw(static_cast<double> (20000));
	}
	catch(std::string &ex) {
		std::cout << ex << '\n';
	}

	return 0;

}
