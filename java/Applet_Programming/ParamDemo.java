import java.awt.*;
import java.applet.*;
/*
<applet code="ParamDemo" width=300 height=80>
<param name=fontName value=Courier>
<param name=fontSize value=14>
<param name=leading value=2>
<param name=accountEnabled value=true>
</applet>
*/
public class ParamDemo extends Applet{
    String fontName;
    int fontSize;
    float leading;
    boolean active;

    public void start(){
        String st;

        fontName = getParameter("fontName");
        if(fontName == null){
            fontName = "Not found";
        }
        
        st = getParameter("fontSize");
        try{
            if(st != null)
                fontSize = Integer.parseInt(st);
            else
                fontSize = 0;
        }
        catch(NumberFormatException e){
            fontSize = -1;
        }

        st = getParameter("leading");
        try{
            if(st != null)
                leading = Float.parseFloat(st);
            else
                leading = 0;
        }
        catch(NumberFormatException e){
            leading = -1;
        }

        st = getParameter("accountEnabled");
        if(st != null)
            active = Boolean.parseBoolean(st);
    }

    public void paint(Graphics g){
        g.drawString("Font Name: "+fontName, 0, 10);
        g.drawString("Font Size: "+fontSize, 0, 26);
        g.drawString("Leading: "+leading, 0, 42);
        g.drawString("Account Active: "+active, 0, 58);
    }
}
