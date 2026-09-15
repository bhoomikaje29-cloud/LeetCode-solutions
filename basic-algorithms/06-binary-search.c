#include <stdio.h>

int main()
{
    int nums[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 5;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            result = mid;
            break;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("%d\n", result);

    return 0;
}