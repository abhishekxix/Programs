#with a dictionary we can store a bunch of key value pairs
customer = {
    "Name" : "john smith",
    "age" : 30,                                #Each key is unique and case sensitive
    "is verified" : True
}
print(customer["Name"]) #or customer.get("Name")
customer["birthdate"] = "19 OCT 2001"

#Exercise
home = input("Phone : ") 
output = ""
digits_mapping = {
    "1" : "one",
    "2" : "two",
    "3" : "three",
    "4" : "four",
}
for ch in home :
    output += digits_mapping.get(ch, "!") + " "
print(output)