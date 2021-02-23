package programming.oriented.object;

public class Main {

    public static void main(String[] args) {
	    Car porsche = new Car();
	    Car holden = new Car();
        porsche.setModel("911 GT");
        System.out.println("Model is : " + holden.getModel());
        System.out.println("Method is : " + porsche.getModel());
    }
}
