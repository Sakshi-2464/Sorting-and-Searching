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
# check if number is prime
