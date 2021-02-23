class Member {
    private String name;
    private int age;
    private String phoneNumber;
    private String address;
    private double salary;

    public Member(String name, int age, String phoneNumber, String address, double salary) {
        this.name = name;
        this.age = age;
        this.phoneNumber = phoneNumber;
        this.address = address;
        this.salary = salary;
    }

    public void printSalary() {
        System.out.println("The salary is : " + this.salary);
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public String getAddress() {
        return address;
    }

    public double getSalary() {
        return salary;
    }
}

class Employee extends Member {
    private String departmentOfConcern;

    public Employee(String name, int age, String phoneNumber, String address, double salary, String departmentOfConcern) {
        super(name, age, phoneNumber, address, salary);
        this.departmentOfConcern = departmentOfConcern;
    }

    public String getDepartmentOfConcern() {
        return departmentOfConcern;
    }
}

class Manager extends Member {
    private String specialization;

    public Manager(String name, int age, String phoneNumber, String address, double salary, String specialization) {
        super(name, age, phoneNumber, address, salary);
        this.specialization = specialization;
    }

    public String getSpecialization() {
        return specialization;
    }
}

public class Main {
    public static void main(String[] args) {
        Employee e = new Employee("Bob", 32, "1234567890", "Wall street", 320000.0, "HR");
        Manager m = new Manager("Bob", 32, "1234567890", "Wall street", 320000.0, "Sales");

        System.out.println("The employee :");
        System.out.printf("\tName : %s\n" +
                "\tAge : %d\n" +
                "\tPhone number : %s\n" +
                "\tAddress : %s\n" +
                "\tSalary : %f\n" +
                "\tDepartment : %s\n", e.getName(), e.getAge(), e.getPhoneNumber()
                , e.getAddress(), e.getSalary(), e.getDepartmentOfConcern());

        System.out.println("The Manager :");
        System.out.printf("\tName : %s\n" +
                        "\tAge : %d\n" +
                        "\tPhone number : %s\n" +
                        "\tAddress : %s\n" +
                        "\tSalary : %f\n" +
                        "\tSpecialization : %s\n", m.getName(), m.getAge(), m.getPhoneNumber()
                        , m.getAddress(), m.getSalary(), m.getSpecialization());
    }
}
