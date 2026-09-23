#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;

    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        profit = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", profit);
    }
    else if (cp > sp)
    {
        loss = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", loss);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}