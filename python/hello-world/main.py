def gcd(a, b):
    if a == 0:
        return b
    if b == 0:
        return a

    return gcd(b, a % b)


if __name__ == '__main__':
    # a = int(input('Enter the first number: '))
    # b = int(input('Enter the second number: '))
    inputValues = []
    print('Enter two numbers to calculate their GCD: ')

    for i in range(0, 2):
        inputValues.append(int(input()))

    a = inputValues[0]
    b = inputValues[1]
    print(f'The gcd of {a} and {b} : {gcd(a, b)}')
