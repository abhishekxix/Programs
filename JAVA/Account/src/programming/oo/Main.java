package programming.oo;

public class Main {

    public static void main(String[] args) {
	    Account abhishekSingh = new Account(/*"Abhishek Singh",
				"1234567890", 100000000.0*/);

//	    abhishekSingh.setAccountBalance(100000.0);
//	    abhishekSingh.setAccountNumber("1234567890");
	    abhishekSingh.setEmailAddress("abhisingh78896@gmail.com");
//	    abhishekSingh.setName("Abhishek Singh");
	    abhishekSingh.setPhoneNumber("7889639011");

	    //now to the printing part
        System.out.printf("Account name : %s\n" +
                "Account number : %s\n" +
                "Email Address : %s\n" +
                "Phone number : %s\n" +
                "Account Balance : %f\n", abhishekSingh.getName(),
                abhishekSingh.getAccountNumber(),
                abhishekSingh.getEmailAddress(),
                abhishekSingh.getPhoneNumber(),
                abhishekSingh.getAccountBalance());

        VipPerson abhi = new VipPerson();

        System.out.printf("\nName : %s\n" +
                "Credit limit : %f\n" +
                "Email Address : %s\n", abhi.getName(),
                abhi.getCreditLimit(), abhi.getEmailAddress());
    }
}