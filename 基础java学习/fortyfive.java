package ke;
import java.text.DecimalFormat;
public class fortyfive {
    static public void SimgFormat(String pattern, double value) {
        DecimalFormat myFormat = new DecimalFormat(pattern);
        String output = myFormat.format(value);
        System.out.println(value  +  "  "  +  pattern  +  "  "  +  output);
    }

    static public void UseApplyPatternMethodFormat(String pattern, double value) {
        DecimalFormat myFormat = new DecimalFormat(pattern);
        myFormat.applyPattern(pattern);
        System.out.println(value +  "  "  + pattern  +  "  "  +  myFormat.format(value));
    }

    public static void main(String[] args) {
        SimgFormat("###,###.###", 123456.789);
        SimgFormat("00000000.###kg", 123456.789);
        SimgFormat("000000.000", 123.78);
        UseApplyPatternMethodFormat("#.###%", 0.789);
        UseApplyPatternMethodFormat("###.##", 123456.789);
        UseApplyPatternMethodFormat("0.00\u2030", 0.789);
    }
}
