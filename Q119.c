//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    int freq[1000] = {0};

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);

        if(freq[nums[i]] == 1)
        {
            printf("%d", nums[i]);
            return 0;
        }

        freq[nums[i]] = 1;
    }

    return 0;
}