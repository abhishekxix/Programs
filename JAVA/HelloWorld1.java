/* //First java applet
//An applet to print Hello World
import java.applet.Applet;
import java.awt.Graphics;

public class HelloWorld1 extends Applet
{
    private static final long serialVersionUID = 1L;

    public void paint(Graphics g) // paint method is declared
    {
        g.drawstring("Hello World!",150,150); //150,150 is the positioning of the string on the applet
    }
} */