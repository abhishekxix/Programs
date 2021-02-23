weight = float(input("Enter your weight : "))
unit = input("(L)bs or (K)g: ")
if unit.upper() == "K" :
    print(f"You are {2.25 * float(weight)} Lbs ")
elif unit.upper() =="L" :
    print(f"You are {float(weight)/2.25} Kilograms")
