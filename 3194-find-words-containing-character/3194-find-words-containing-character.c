/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int count=0;
    int* result = (int*)malloc(sizeof(int));
    for(int i=0;i<wordsSize;i++){
        for(int j=0;words[i][j] != '\0';j++){
            if(words[i][j]== x){
                count++;
                result=(int*)realloc(result,count*sizeof(int));
                result[count-1]=i;
                break;
            }
        }
    }
    *returnSize=count;
    return result;
}