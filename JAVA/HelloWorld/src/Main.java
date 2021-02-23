public class Main {
    private int a;
    public int b;
    protected int c;

    Main(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public static void main(String[] args) {
        Main m = new Main(1, 2, 3);
        System.out.println(m.a);
        System.out.println(m.getB());
        System.out.println(m.getC());
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public int getC() {
        return c;
    }
}
