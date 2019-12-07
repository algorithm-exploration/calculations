#define countof(a) (sizeof(a)/sizeof((a)[0]))

void shortArrayTest(Test *tc)
{
    const unsigned int numbers[] = {1, 2, 1};
    unsigned int expected = 1;
    unsigned int actual = findRepeat(numbers, countof(numbers));
    AssertUnsignedIntEquals(tc, expected, actual);
}

void mediumArrayTest(Test *tc)
{
    const unsigned int numbers[] = {4, 1, 3, 4, 2};
    unsigned int expected = 4;
    unsigned int actual = findRepeat(numbers, countof(numbers));
    AssertUnsignedIntEquals(tc, expected, actual);
}

void longArrayTest(Test *tc)
{
    const unsigned int numbers[] = {1, 5, 9, 7, 2, 6, 3, 8, 2, 4};
    unsigned int expected = 2;
    unsigned int actual = findRepeat(numbers, countof(numbers));
    AssertUnsignedIntEquals(tc, expected, actual);
}

int main()
{
    TestSuite *tests = TestSuiteNew();

    SUITE_ADD_TEST(tests, shortArrayTest);
    SUITE_ADD_TEST(tests, mediumArrayTest);
    SUITE_ADD_TEST(tests, longArrayTest);

    TestSuiteRun(tests);
    TestSuiteDelete(tests);

    return 0;
}
