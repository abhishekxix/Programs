package arraysandlists;


public class Main {

    public static void main(String[] args) {
//	    Customer Abhishek = new Customer("Abhishek Singh", 98000.0);
//
//	    for(int i = 0; i < 10; i++)
//            Abhishek.addTransaction(Double.valueOf(i));
//
//	    Abhishek.displayTransactions();

        Bank jkBank = new Bank("JK Bank");
        jkBank.addBranch("Shaktinagar");
        jkBank.addBranch("Slathia Chowk");
        jkBank.addCustomerToBranch("Shaktinagar", "Abhishek Singh", 1000D);
        jkBank.addTransactionForCustomer("Shaktinagar", "Abhishek Singh", 1298.0);
        jkBank.displayCustomersWithTransactions("Shaktinagar");

        jkBank.addCustomerToBranch("Shaktinagar", "Anmol Singh", 1000D);
        jkBank.addTransactionForCustomer("Shaktinagar", "Anmol Singh", 1298.0);
        jkBank.displayCustomersWithTransactions("Shaktinagar");
    }
}
