int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int length = 0;
    for(int i = 0; i < numsSize; i++)
        length++;

    int *m = malloc(sizeof(int) * 2 * length);
    for(int i = 0; i < length; i++) {
        m[i] = nums[i];
        m[i + length] = nums[i];
    }

    *returnSize = numsSize * 2;
    return m;
}