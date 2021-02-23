try :
    Age = int(input("Age: "))
    income = 20000
    risk = income / Age
     print(Age)
except ValueError :
    print("Invalid value")
except ZeroDivisionError :
    print("age cannot be 0")

#this is used to avoid error messages