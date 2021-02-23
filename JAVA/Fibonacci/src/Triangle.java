public class Triangle {
    private int a;
    private int b;
    private int c;

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public int getC() {
        return c;
    }

    public void setA(int a) {
        this.a = a;
    }

    public void setB(int b) {
        this.b = b;
    }

    public void setC(int c) {
        this.c = c;
    }

    public static void main(String[] args) {
        Triangle t = new Triangle();
        t.setA(4);
        t.setB(6);
        t.setC(3);
        int perimeter = t.getA() + t.getB() + t.getC();

        System.out.println("The perimeter is " + perimeter);
    }
}
