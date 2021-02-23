numbers = [5, 2, 1, 7, 4]
numbers.append(69) #append
print(numbers)
numbers.sort() #for descending order we have to call the numbers.reverse() function and the list will get sorted in descending order
print(numbers)
numbers.insert(0, 98) #insert at a specific index
print(numbers)
print(numbers.count(5))
numbers.remove(5)#remove a number
print(numbers)
numbers.pop()#remove last number
print(numbers)
print(numbers.index(4))#show the index of the argument
print(50 in numbers)
numbers.clear()#delete the whole list
print(numbers)
#next
numbers = [5, 2, 1, 7, 4]
numbers2 = numbers.copy()
print(numbers2)

#exercise to remove the duplicate items in a list
del numbers
numbers = [2, 2, 4, 6, 3, 4, 6, 1]
uniques = []
for number in numbers:
    if number not in uniques:
        uniques.append(number)
print(uniques)