#Super digit using recursion

def super_digit(n):
    if n<10:
        return n
    else:
        sum = 0
        while n>0:
            sum = sum + n%10
            n //= 10
            
        return super_digit(sum)

n = int(input('Enter a number: '))
print('Super digit of',n,'is:',super_digit(n))
