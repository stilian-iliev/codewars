import java.util.Arrays;

public class ArrayDiff {

    public static int[] arrayDiff(int[] a, int[] b) {

        return Arrays.stream(a).filter(i -> Arrays.stream(b).noneMatch(x-> x == i)).toArray();
    }

}