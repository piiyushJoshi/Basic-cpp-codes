import random

n = random.randint(0,99)
tries = 9
count=0

def chk_guess(n,tries,count):
    if tries == 0:
        print('Game over!!')
    else:
        guess = int(input('Enter your guess between 0 to 100: '))
        if guess == n:
            print('Congratulations, you have correctly guessed the number in',count+1,'attempts.')
        elif guess>n:
            tries -= 1
            count += 1
            print('Enter a smaller number!')
            chk_guess(n,tries,count)
        elif guess<n:
            tries -= 1
            count += 1
            print('Enter a greater number!')
            chk_guess(n,tries,count)

chk_guess(n,tries,count)
