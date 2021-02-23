def sumOfNumbers(*args):
    result = 0

    for n in args:
        result += n
    return result


if __name__ == '__main__':
    print(sumOfNumbers(1, 2, 3, 4, 5, 6, 7, 8, 9, 10))
    b = 10
    a = f'This is {b}'
    print(a)
