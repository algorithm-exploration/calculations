int main()
{
    int i;

    srand((unsigned)time(NULL));

    for (i = 0; i < 14; i++) {
        printf("%d ", rand7());
    }
    printf("\n");

    return 0;
}
