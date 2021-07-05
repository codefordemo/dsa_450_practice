
n = int(input("enter a number "))
lst = []
for i in range(n):
    element = int(input())
    lst.append(element)
print(lst)
arrSize  = len(lst)

def printDuplicate(lst,arrSize):
    print("duplicate are : ")
    for i in range(0,arrSize):
        if(lst[abs(lst[i])] >= 0):
            lst[abs(lst[i])] = -lst[abs(lst[i])]
        else:
            print( abs(lst[i]))
            

printDuplicate(lst, arrSize)
# print("duplicate are ", printDuplicate(lst, n))