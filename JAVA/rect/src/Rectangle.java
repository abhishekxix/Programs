import java.util.*;

class Recatangle

{

    double width,length,area;

    String color;

    Scanner sc = new Scanner(System.in);

    Recatangle() {

        System.out.print("Length: ");

        length = sc.nextDouble();

        System.out.print("Width: ");

        width = sc.nextDouble();

        System.out.print("Color: ");

        color = sc.next();

        area = length*width;

        System.out.println("Area: "+area);

    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getArea() {
        return area;
    }

    public void setArea(double area) {
        this.area = area;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public Scanner getSc() {
        return sc;
    }

    public void setSc(Scanner sc) {
        this.sc = sc;
    }
}

class Main {

    public static void main(String[] args)

    {

        System.out.println("First Rectangle: ");

        Recatangle r1 = new Recatangle();

        System.out.println("Second Rectangle: ");

        Recatangle r2 = new Recatangle();

        if(r1.area==r2.area && r1.color.equals(r2.color))

            System.out.println("Matching Rectangle ");

        else

            System.out.println("Non Matching Rectangle ");

    }

}