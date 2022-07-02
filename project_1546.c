#include <stdio.h>

int main()
{
    int N;
    double exam[1000];
    int max = 0;
    double sum = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &exam[i]);
        if (exam[i] > max)
        {
            max = exam[i];
        }
    }

    for (int j = 0; j < N; j++)
    {
        exam[j] = (exam[j] / (double)max) * 100;

        sum = sum + exam[j];
    }

    printf("%f\n", sum / (double)N);
    return 0;
}
