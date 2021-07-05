# take array 1 size and element
# take array 2 size and element

arraySize1 = int(input("Enter size of 1st array "))
arraySize2 = int(input("Enter size of 1st array "))
arraylist1 = []
arraylist2 = []
sum1 = 0
sum2 = 0
for i in range(arraySize1):
    elem = int(input("enter array 1 element "))
    arraylist1.append(elem)
    sum1 = sum1 + elem
print("array1 element ",arraylist1)
print("sum1 is: ",sum1)

for i in range(arraySize2):
    elem = int(input("enter array 2 element "))
    arraylist2.append(elem)
    sum2 = sum2 +elem
print("array2 element are: ", arraylist2)
print("sum1 is: ",sum2)


print("missing no. is ",abs(sum1 -sum2))
 
