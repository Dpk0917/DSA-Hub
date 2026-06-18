class Solution {
public:
    double angleClock(int hour, int minutes) {
        double M=6*minutes;
        double H=((hour%12)*30+(0.5*minutes));

        double angle=abs(H-M);

        return min(angle,360-angle);
    }
};