import java.util.LinkedHashMap;
import java.util.Map;

public class RomanNumerals {
    static Map<String , Integer> map = new LinkedHashMap<>();
    static {
        map.put("M", 1000);
        map.put("CM", 900);
        map.put("D", 500);
        map.put("CD", 400);
        map.put("C", 100);
        map.put("XC", 90);
        map.put("L", 50);
        map.put("XL", 40);
        map.put("X", 10);
        map.put("IX", 9);
        map.put("V", 5);
        map.put("IV", 4);
        map.put("I", 1);
    }

    public static String toRoman(int n) {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String , Integer> mapEntry : map.entrySet()) {
            if (n >= mapEntry.getValue()){
                int count = n / mapEntry.getValue();
                sb.append(String.valueOf(mapEntry.getKey()).repeat(count));
                n %= mapEntry.getValue();
            }
        }

        return sb.toString();
    }

    public static int fromRoman(String romanNumeral) {
        char[] chars = romanNumeral.toCharArray();
        int n = map.get(String.valueOf(chars[chars.length - 1]));
        for (int i = romanNumeral.length() - 1; i > 0; i--) {
            int curr = map.get(String.valueOf(chars[i]));
            int next = map.get(String.valueOf(chars[i - 1]));
            if (curr <= next) {
                n += next;
            } else {
                n -= next;
            }
        }
        return n;
    }
}