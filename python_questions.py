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

# chech if number is prime
