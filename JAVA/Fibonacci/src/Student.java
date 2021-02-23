public class Student {
    private String name;
    private int rollNo;

    Student(String name, int rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    public String getName() {
        return name;
    }

    public int getRollNo() {
        return rollNo;
    }

    public static void main(String[] args) {
        Student john = new Student("John", 2);
        System.out.printf("The name is : %s and roll no. is : %d\n", john.getName(), john.getRollNo());
    }
}
