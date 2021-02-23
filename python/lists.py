#largest number in a list
numbers = [1, 69, 75, 98, 67, 97]
max = numbers[0]
for number in numbers :
    if number > max :
        max = number
print(f"The largest number in the lsit is {max} ")
