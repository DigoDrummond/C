#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("verde.txt", "w");

    if (file == NULL)
    {
        return 1;
    }

    int n;
    scanf("%d", &n);
    float nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%.3f\n", nums[i]);
    }

    fclose(file);

    file = fopen("verde.txt", "r");

    if (file == NULL)
    {
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    char line[50];
    int numsSize = 0;

    while (fgets(line, sizeof(line), file))
    {
        float num;
        if (sscanf(line, "%f", &num) == 1)
        {
            nums[numsSize++] = num;
        }
    }

    fclose(file);

    for (int i = numsSize - 1; i >= 0; i--)
    {
        if (nums[i] == (int)nums[i])
            printf("%.0f\n", nums[i]);
        else
            printf("%.3f\n", nums[i]);
    }

    return 0;
}
