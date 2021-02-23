import random
for i in range(3) :
    print(random.random())
    print(random.randint(10, 20))


members = ['John', 'Abhishek', 'Mosh', 'Johnny']
print(random.choice(members))


#Exercise for making a dice rolling program
class Dice :
    def roll(self) :
        result = (random.randint(1,6), random.randint(1, 6))
        return result


dice = Dice()
print(dice.roll())
