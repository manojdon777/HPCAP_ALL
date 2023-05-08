def odd(num):
    print(f"Odd numbers from 1 to {num} are : ", end = ' ')
    for i in range(1, num + 1):
        if i%2 != 0:
            print(i, end = ' ')
