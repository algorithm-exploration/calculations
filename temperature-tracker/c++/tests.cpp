const lest::test tests[] = {
    CASE("temperature tracker test") {
        const double EPSILON = 1e-6;

        TempTracker tracker;

        tracker.insert(50);
        EXPECT(tracker.getMax() == 50);
        EXPECT(tracker.getMin() == 50);
        EXPECT(fabs(tracker.getMean() - 50.0) < EPSILON);
        EXPECT(tracker.getMode() == 50);

        tracker.insert(80);
        EXPECT(tracker.getMax() == 80);
        EXPECT(tracker.getMin() == 50);
        EXPECT(fabs(tracker.getMean() - 65.0) < EPSILON);
        const set<int> expectedModes {50, 80};
        EXPECT(expectedModes.count(tracker.getMode()) > 0);

        tracker.insert(80);
        EXPECT(tracker.getMax() == 80);
        EXPECT(tracker.getMin() == 50);
        EXPECT(fabs(tracker.getMean() - 70.0) < EPSILON);
        EXPECT(tracker.getMode() == 80);

        tracker.insert(30);
        EXPECT(tracker.getMax() == 80);
        EXPECT(tracker.getMin() == 30);
        EXPECT(fabs(tracker.getMean() - 60.0) < EPSILON);
        EXPECT(tracker.getMode() == 80);
    }
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}
