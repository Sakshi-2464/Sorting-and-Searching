# insertion sort
a=[4,5,1,0,6,9,2,3,5]
for j in range(1,(len(a))):
    key=a[j]
    i=j-1
    while i>=0 and a[i]>key:
        a[i+1]=a[i]
        i-=1
    a[i+1]=key
print(a)

# selection sort
a=[4,5,1,0,6,9,2,3,5]
for i in range(len(a)):
    smallest=i
    for j in range(i+1,len(a)):
        if a[j]<a[smallest]:
            smallest=j
    a[i],a[smallest]=a[smallest],a[i]
print(a)

# bubble sort
a=[4,5,1,0,6,9,2,3,5]
for i in range(len(a)):
    for j in range(0,len(a)-i-1):
        if a[j]>a[j+1]:
            a[j],a[j+1]=a[j+1],a[j]
print(a)

# quick sort
a=[4,5,1,0,6,9,2,3,5]
def quick_sort(arr):
    if len(arr)<=1:
        return arr
    pivot=arr[len(arr)//2]
    left=[x for x in arr if x<pivot]
    right=[x for x in arr if x>pivot]
    middle=[x for x in arr if x==pivot]
    return quick_sort(left)+middle+quick_sort(right)
print(quick_sort(a))

# merge sort
a=[4,5,1,0,6,9,2,3,5]
def merge_sort(arr):
    if len(arr)<=1:
        return arr
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    return merge(left,right)
def merge(left,right):
    res=[]
    i=j=0
    while i<len(left) and j<len(right):
        if left[i]<right[j]:
            res.append(left[i])
            i+=1
        else:
            res.append(right[j])
            j+=1
    res.extend(left[i:])
    res.extend(right[j:])
    return res
print(merge_sort(a))

# check for palindrome
a='madam'
print(a==a[::-1])

# reverse
a='loop'
#method 1
print( ''.join(reversed(a)))
#method 2
print(a[::-1])

# reverse string
s='loop'
rev=""
for i in s:
    rev=i+rev
print(rev)

# reverse str
s='loop'
print(s[1:]+s[0])

# finding 2nd largest element
a=[4,55,2,4,1,7]
second=maximum=a[0]
for i in range(len(a)):
    if a[i]>maximum:
        second=maximum
        maximum=a[i]
    elif a[i]>second and a[i]!=maximum:
        second=a[i]
print(maximum)
print(second)

# factorial - recursion
def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
print(fact(5))

# factorial - iterative
def fact(n):
    fact=1
    for i in range(1,n+1):
        fact*=i
    return fact
print(fact(7))

# fibonacci
def fibonacci(n):
    fib=[0,1]
    for i in range(2,n):
        fib.append(fib[-1]+fib[-2])
    return fib[:n]
print(fibonacci(10))

# swapping without 3rd variable
a=10
b=20
a,b=b,a
print(a)
print(b)

# linear search
a=[4,8,2,4,1,7]
index=[]
target=4
for i in range(len(a)):
    if a[i]==target:
        index.append(i)
        found=1
if index:
    print(index)
else:
    print('not found')

# binary search

# reverse the bits
b=bin(n)[2:].zfill(32) # convert decimal number to binary we use [2:] as we do not need 0b in the binary representation
#then we use z.fill(32) for the proper 32 bit representation of the number with the leading zeros
return int(b[::-1],2) # here we use ,2 to represent the base 2 that is binary and that we need to consider only 0 and 1

n=43261596
b=bin(n)[2:].zfill(32)
print(int(b[::-1],2))
h=hex(n)[2:].zfill(8)
print(int(h[::-1],16))
o=oct(n)[2:]
print(int(o[::-1],8))

#counting the bits
a=5
c=[]
for i in range(a+1):
    c.append(bin(i)[2:].count("1"))
print(c)

'''
a=5
0->0 -> no.of 1->0
1->1 -> no.of 1->1
2->10 -> no.of 1->1
3->11 -> no.of 1->2
4->100 -> no.of 1->1
5->101 -> no.of 1->2
output: [0,1,1,2,1,2]
'''

a=5
c=[]
for i in range(a+1):
    c.append(bin(i)[2:].count("0"))
print(c)

'''
a=5
0->0 -> no.of 0->1
1->1 -> no.of 0->0
2->10 -> no.of 0->1
3->11 -> no.of 0->0
4->100 -> no.of 0->2
5->101 -> no.of 0->1
output: [1,0,1,0,2,1]
'''
# sum of all elements in array
a=[1,4,5,2]
c=0
for i in a:
    c=c+i
print(c)
# append even and odd number in diff array
a=[1,4,6,7,77,89,0,5,2]
e=[]
o=[]
for i in a:
    if i%2==0:e.append(i)
    else:o.append(i)
print(e)
print(o)
# sum of even elements and odd elements
a=[1,4,6,0,5,2]
e=0
o=0
for i in a:
    if i%2==0:e+=i
    else:o+=i
print(e)
print(o)
# number of elements at odd index and even index
a=[1,4,6,5,2]
e=0
o=0
for i in range(len(a)):
    if i%2==0:e+=1
    else:o+=1
print(e)
print(o)
# min and max element in an array
a=[10,5,8,90,72,4]
min=max=a[0]
for i in a:
    if i<min:
        min=i
    elif i>max:
        max=i
print(min)
print(max)
# 
# check if number is prime
def prime(n):
    if n<=1:
        return False
    else:
        for i in range(2,int(n**0.5)+1): # If n has any divisor other than 1 and itself, at least one divisor lies in the range [2, √n] hence, we take n**0.5
So, if no divisor is found up to √n, the number must be prime.
            if n%i==0:
                return False
        return True
print(prime(48))
