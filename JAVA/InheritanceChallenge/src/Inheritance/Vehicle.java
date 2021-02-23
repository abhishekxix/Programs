package Inheritance;

public class Vehicle {

    private String color;
    private String typeOfPower;

    Vehicle(String color, String typeOfPower) {
        this.color = color;
        this.typeOfPower = typeOfPower;
    }


    public String getColor() {
        return this.color;
    }

    public String getTypeOfPower() {
        return this.typeOfPower;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setTypeOfPower(String typeOfPower) {
        this.typeOfPower = typeOfPower;
    }
}

class Car extends Vehicle {

    private String brandOfCar;
    private String modelName;
    private int capacityOfFuel;
    private int numberOfDoors;

    public Car(String color, String typeOfPower,
               String brandOfCar, String modelName,
               int capacityOfFuel, int numberOfDoors) {

        super(color, typeOfPower);

        this.brandOfCar = brandOfCar;
        this.modelName = modelName;
        this.capacityOfFuel = capacityOfFuel;
        this.numberOfDoors = numberOfDoors;
    }

    public String getBrandOfCar() {
        return brandOfCar;
    }

    public void setBrandOfCar(String brandOfCar) {
        this.brandOfCar = brandOfCar;
    }

    public String getModelName() {
        return modelName;
    }

    public void setModelName(String modelName) {
        this.modelName = modelName;
    }

    public int getCapacityOfFuel() {
        return capacityOfFuel;
    }

    public void setCapacityOfFuel(int capacityOfFuel) {
        this.capacityOfFuel = capacityOfFuel;
    }

    public int getNumberOfDoors() {
        return numberOfDoors;
    }

    public void setNumberOfDoors(int numberOfDoors) {
        this.numberOfDoors = numberOfDoors;
    }
}


class SportsCar extends Car{

    private int topSpeed;

    public SportsCar(String color, String typeOfPower,
                     String brandOfCar, String modelName, int capacityOfFuel,
                     int numberOfDoors, int topSpeed) {

        super(color, typeOfPower, brandOfCar, modelName,
                capacityOfFuel, numberOfDoors);

        this.topSpeed = topSpeed;
    }

    public int getTopSpeed() {
        return topSpeed;
    }

    public void setTopSpeed(int topSpeed) {
        this.topSpeed = topSpeed;
    }
}

class Main {

    public static void main(String[] args) {
        SportsCar porsche911GT = new SportsCar("Red", "Petrol",
                "Porsche", "911GT",
                50, 2, 300);

        System.out.println(porsche911GT.getBrandOfCar());
        System.out.println(porsche911GT.getCapacityOfFuel());
        System.out.println(porsche911GT.getColor());
        System.out.println(porsche911GT.getModelName());
        System.out.println(porsche911GT.getNumberOfDoors());
        System.out.println(porsche911GT.getTypeOfPower());
        System.out.println(porsche911GT.getTopSpeed());
    }
}