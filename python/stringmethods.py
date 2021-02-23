course = ' Python for beginners '
print(len(course)) #length and print function (general purpose)

print(course.upper()) #string specific function so it is called a method
print(course )#not converted
print(course.lower())

print(course.find('P')) #it is case sensitive and gives -1 for not found and returns the index of the term that is passes through it
print(course.replace('beginners' , 'absolute beginners'))  #also case sensitive

print('Python' in course) #also case sensitive. produces boolean output
