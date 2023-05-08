
def fizz_buzz(num):
    if num%3 == 0:
        print('FIZZ', end = ' ')
        if num%5 == 0:
            print('BUZZ')
    elif num%5 == 0:
        print('BUZZ')
    else:
        print('Invalid input')
def play():
    while True:
        num = int(input('Enter num : '))
        fizz_buzz(num)

        if input('\nContinue? (y/n): ') == 'n':
            break
play()