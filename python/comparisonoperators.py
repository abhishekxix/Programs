temp = 20
if temp > 30: 
 print("It's a hot day")
else: print("It's not a hot day")

#pracitce

name = input("\nWhat is your name? ")
if len(name) < 3:
     print("Name must be atleast 3 characters long! ")
elif len(name) > 50:
        print("Name must be less than 50 characters long! ")
else:
    print(f"{name} looks good")
