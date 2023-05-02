def GameSegments(nums):

    sum = 0
    for i in nums:
        if i == 0:
            sum-=1
        else:
            sum+=1

    if sum < 0:
        return 0
    curr = 0
    for j in range(len(nums)):
        if nums[j] == 0:
            curr-=1
        else:
            curr+=1

        if curr > sum - curr:
            return j+1
        

x = [1, 1, 0, 1]
print(GameSegments(x))