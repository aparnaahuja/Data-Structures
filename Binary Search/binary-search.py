def binary_search(arr,first,last,value):
    while(first<=last):
        mid = (first+last)//2
        if arr[mid] == value:
            return mid+1

        if arr[mid]>value and value>=arr[first]:
            last = mid-1

        if arr[mid]<value and value<=arr[last]:
            first = mid+1



arr = [0,24,33,44,55,61,73,80]
n = len(arr)
print("Element number ",binary_search(arr,0,n-1,55))
