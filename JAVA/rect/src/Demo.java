public class Demo implements Comparable<Demo> {
    private int a;
    private String b;
    private double c;

    public Demo(int a, String b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public Demo(Demo demo) {
        this.a = demo.a;
        this.b = demo.b;
        this.c = demo.c;
    }

    @Override
    public int compareTo(Demo o) {  /*comparison of two objects and the data
                                     is passsed as an object*/
        if(this == o || (o.a == this.a &&
            o.b.compareToIgnoreCase(this.b) == 0 &&
            o.c == this.c)) {
            return 0;   //is same;
        }
        return -1; //if different;
    }

    @Override
    public String toString() {
        return String.format("a = %d\nb = %s\nc = %f", this.a, this.b, this.c);
    }

    public static void main(String[] args) {

        Demo original = new Demo(1, "Abc", 2.9); //original
        Demo copy = new Demo(original); //copy, data passed as object

        System.out.println("Original:\n" + original.toString());
        System.out.println("Copy:\n" + original.toString());
    }
}
