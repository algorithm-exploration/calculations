int main()
{
    int i;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) {
        printf("%d ", rand5());
    }
    printf("\n");

    return 0;
}
