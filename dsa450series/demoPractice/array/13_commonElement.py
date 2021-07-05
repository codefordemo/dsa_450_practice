 
list1 = [1,2,3,4,5]
list2 = [1,2,3,4]
list3 = [1,3]
length1 = len(list1)
length2 = len(list2)
length3 = len(list3)
i = 0 
j= 0
k = 0
# print(length1)
while(i<length1 and j <length2 and k < length3):
    if(list1[i] == list2[j] and list2[j] == list3[k]):
        print("COmmon element are : ",list1[i])
        i = i +1
        j = j+1
        k = k+1
    elif(list2[j] < list3[k]):
        j = j+1
    elif(list1[i] < list2[j]):
        i = i+1
    else:
        k = k +1
    