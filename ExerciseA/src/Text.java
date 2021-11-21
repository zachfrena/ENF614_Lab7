import java.awt.*;


public class Text implements Component{

    int x;
    int y;
    String text;

    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y =y ;
    }

    public void draw(Graphics g){
        g.setColor(new Color(0,100,0));
        g.drawString("Hello World", x, y);

    }
}
