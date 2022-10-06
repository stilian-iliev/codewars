import java.util.Arrays;
import java.util.List;

public class User {
    private static final List<Integer> ranks = Arrays.asList(-8, -7, -6, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8);

    public int rank;
    public int progress;

    public User() {
        rank = ranks.get(0);
        progress = 0;
    }

    public void incProgress(int activity) {
        if (!ranks.contains(activity)) throw new IllegalArgumentException();
        if (rank == 8) return;

        int diff = ranks.indexOf(activity) - ranks.indexOf(rank);
        if (diff == -1) {
            progress += 1;
        } else if (diff == 0) {
            progress += 3;
        } else if (diff > 0) {
            progress += 10 * diff * diff;
        }
        while (progress >= 100) {
            progress -= 100;
            rank = ranks.get(ranks.indexOf(rank) + 1);
            if (rank == 8) {
                progress = 0;
                return;
            }
        }
    }
}