def GameSegments(nums)
    sum = 0
    for i in nums do
        if i == 0
            sum-=1
        else
            sum+=1
        end
    end
    return 0 if sum < 0
        
    curr = 0
    for j in (0...nums.size) do
        if nums[j] == 0
            curr-=1
        else
            curr+=1
        end

        if curr > sum - curr
            return j+1
        end
    end
end

x = [1, 1, 0, 1]
print(GameSegments(x))