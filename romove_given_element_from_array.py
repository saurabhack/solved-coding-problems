num=[0,1,2,2,3,0,4,2]
val=2
i=0
while i<=len(num)-1:
    if(num[i]==val):
        del(num[i])
    else:
        i+=1

print(num)