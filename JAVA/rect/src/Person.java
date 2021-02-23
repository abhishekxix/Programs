
public class Person {
    //The class Person defines a blueprint for a person object.
    //It defines the fields and the methods(behaviours) of the object.
    private int age;
    private String name;
    private String phoneNumber;

    public Person(int age, String name, String phoneNumber) {
        this.age = age;
        this.name = name;
        this.phoneNumber = phoneNumber;
    }

    public int getAge() {
        return age;
    }

    public String getName() {
        return name;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public static void main(String[] args) {
        Person john = new Person(32, "John", "0984874893"); /*An object is an instance of a class*/
        System.out.println(john.getAge());  //getAge is a behaviour of the object.

    }
}
