nums=[0,0,1,1,1,2,2,3]
i=0
j=i+1
while i<=len(nums) and j<=len(nums)-1:
    if nums[i]==nums[j]:
        del(nums[j])
    else:
        i+=1
        j=i+1
print(nums)