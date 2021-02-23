number = int(input('Enter a number:'))

temp_number = number
sum_even_digits = 0

while temp_number:
    current_digit = temp_number % 10
    temp_number //= 10

    if current_digit % 2 == 0:
        sum_even_digits += current_digit

print(f'The sum of all the even digits in {number} = {sum_even_digits}')
