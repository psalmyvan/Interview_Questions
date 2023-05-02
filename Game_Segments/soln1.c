int GameSegments(int* nums){

    int sum = 0;
    int numsSize = sizeof(nums)/sizeof(int);

    for(int i = 0; i < numsSize; i++)
    {
        nums[i] == 0 ? (sum-=1) : (sum+=1);
    }

    if(sum < 0) return 0;

    int curr = 0;

    for(int j = 0; j < numsSize; j++)
    {
        nums[j] == 0 ? (curr-=1) : (curr+=1);
        if(curr > (sum - curr)) return j+1;
    }
    return;
}
int main(){

    int coins[] = {1, 1, 0, 1};

    printf("%d\n", GameSegments(x));

    return 0;
}