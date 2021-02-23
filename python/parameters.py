def greet_user(first_name, last_name) :
    print(f"hi there {first_name} {last_name}")
    print("Welcome aboard")

greet_user("john", "Smith")#positional arguments
greet_user("mary", last_name = "Ham") #keyword arguments
#parameters are placeholders in the function and arguments are the actual values passed to the function
#keyword argument can only be added after a positional argument