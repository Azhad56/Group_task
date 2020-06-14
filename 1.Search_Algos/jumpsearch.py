import math
def jumpsearch(arr,x,n):
    step = math.sqrt(n)
    prev = 0
    while arr[int(min(step,n) -1)] <x:
        prev = step
        step += math.sqrt(n)
        if prev >= n:
            return -1
    while arr[int(prev)] < x:
        prev += 1
        if prev == min(step,n):
            return -1
    if arr[int(prev)]==x:
        return prev
    return -1
arr = [10,20,30,40,50,60,70,80,90]
ele = 80
n = len(arr)
index = jumpsearch(arr,ele,n)
print("elemennt {} is at index {}".format(ele,index))
