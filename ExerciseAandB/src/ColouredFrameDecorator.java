import java.awt.*;

public class ColouredFrameDecorator extends Decorator{
    int thickness;

    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness) {
        super(cmp, x, y, width, height);
        this.thickness = thickness;
    }

    public void draw(Graphics g){
        cmp.draw(g);
        Graphics2D g2 = (Graphics2D) g;
        Stroke oldStroke = g2.getStroke();
        Color oldColor = g2.getColor();
        g2.setStroke(new BasicStroke(thickness));
        g2.setColor(Color.red);
        g2.drawRect(x, y, width, height);
        g2.setStroke(oldStroke);
        g2.setColor(oldColor);

    }
}
