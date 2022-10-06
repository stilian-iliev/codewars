public class StripComments {
    public static String stripComments(String text, String[] commentSymbols) {
        for (String commentSymbol : commentSymbols) {
            int start = text.indexOf(commentSymbol);
            if (start == -1) continue;
            int end = text.indexOf("\n", start) != -1 ? text.indexOf("\n", start) : text.length();
            String[] split = text.split(text.substring(start, end));
            split[0] = split[0].trim();
            text = String.join("", split);

        }
        return text;
    }

    public static void main(String[] args) {
        String s = stripComments("a #b\nc\nd $e f g", new String[]{"#", "$"});
        System.out.println(s);
    }
}
