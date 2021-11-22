import java.awt.*;

public class ColouredGlassDecorator extends Decorator{


    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height){
        super(cmp, x, y, width, height);
    }


    public void draw(Graphics g){
        cmp.draw(g);
        Color c = new Color(124, 252, 0, 20);
        g.setColor(c);
        g.fillRect(x, y, width, height);


    }
}

