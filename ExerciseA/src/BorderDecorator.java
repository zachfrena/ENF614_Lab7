import java.awt.*;

public class BorderDecorator extends Decorator{

    public BorderDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp, x, y, width, height);
    }

    public void draw(Graphics g){
        cmp.draw(g);

        Graphics2D g2 = (Graphics2D) g;
        Stroke oldStroke = g2.getStroke();
        Stroke dashes = new BasicStroke(2,
                BasicStroke.CAP_BUTT,
                BasicStroke.JOIN_BEVEL,
                0,
                new float[]{4},
                0);
        g2.setStroke(dashes);
        g2.drawLine(x, y, x+width, y);
        g2.drawLine(x, y, x, y+height);
        g2.drawLine(x+width, y, x+width, y+height);
        g2.drawLine(x, y+height, x+width, y+height);

        g2.setStroke(oldStroke);





    }
}
