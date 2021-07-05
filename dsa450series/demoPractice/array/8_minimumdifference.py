# in python list is an array
lst = [] 

n = int(input("enter no. of element of list or array : "))

for i in range(n):
    item = int(input())
    lst.append(item)

print(lst)
arrSize = len((lst))
print((arrSize))

def minimunDifference(lst,arrSize):
    minDiff = 10**200
    for i in range(arrSize):
        for j in range(i+1,arrSize):
            if (abs(lst[i]-lst[j]) < minDiff):
                minDiff = abs(lst[i] -lst[j])
    return minDiff
    
print("minimum difference is : ", minimunDifference(lst, arrSize))