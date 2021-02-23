class Point :   #Pascale naming convention
    def __init__(self, x, y) :
        self.x = x
        self.y = y


    def move(self) :
        print("move")


    def draw(self) :
        print("draw")


point1 = Point(10, 20)
print(point1.x)


#Exercise

class Person :
    def __init__(self, name):
        self.name = name 
    def talk(self) :
        print(f"Hey I am {self.name}  ")


Abhishek = Person("Abhishek Singh")
Abhishek.talk()
Bob  = Person("Bob Smith")
Bob.talk()
