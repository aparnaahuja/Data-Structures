def pairWithGivenSum(arr,x,n):
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]+arr[j] == x:
                print("pair is ",arr[i]," and ",arr[j]) 


arr = [1,2,4,6,3,45,23,66,34,22]
n = len(arr)
pairWithGivenSum(arr,24,n)
