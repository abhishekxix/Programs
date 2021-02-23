numbers = [5, 2, 5, 2, 2]
for x_count in numbers :
    output = ''
    for count in range(x_count) :
        output += 'x'
    print(output)

    # now for printing L
print("\n")
del numbers
numbers = [1, 1, 1, 1, 5]
for x_count in numbers :
    output = ''
    for count in range(x_count):
        output += 'x'
    print(output)

#Now to print Y
print("\n")
print('x     x')
print(' x   x')
print('  x x')
for i in range(3):
    print('   x')