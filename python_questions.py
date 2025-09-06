# check for palindrome
a='madam'
print(a==a[::-1])

# reverse
a='loop'
#method 1
print( ''.join(reversed(a)))
#method 2
print(a[::-1])

# swapping without 3rd variable
a=10
b=20
a,b=b,a
print(a)
print(b)

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
# check if number is prime
