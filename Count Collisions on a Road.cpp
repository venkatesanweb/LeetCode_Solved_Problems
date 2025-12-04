class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();

        int r = 0, s = 0, collisions = 0;

        for (int i = 0; i < n; i++) {
            if (directions[i] == 'L') {
                collisions += (s == 1);

                if (r) {
                    collisions += (r - 1) + 2;
                    s = 1;
                }

                r = 0;
            }
            else if (directions[i] == 'S') {
                if (r) {
                    collisions += r;
                    r = 0;
                }
                s = 1;
            }
            else {
                r++;
                s = 0;
            }
        }

        return collisions;
    }
};
