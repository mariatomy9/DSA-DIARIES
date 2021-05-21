#def moveZerosToEndNaive(arr, n):
#    count = 0;
#    for i in range(n):
#        if(arr[i] != 0):
#            arr[count] = arr[i]
#            count+=1
def moveZerosToEnd(arr, n):

    for i in range(n):

        if(arr[i] == 0):

            for j in range(1,n):

                if(arr[j] != 0):

                    swap(arr[j],arr[i])


arr = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9]
n = len(arr)
moveZerosToEnd(arr, n)
print("Array after pushing all zeros to end of array:")
print(arr)

