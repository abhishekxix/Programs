class Mammal :
    def walk(self) :
        print("Walk")


class Dog(Mammal) :   #inheriance
    def bark(self) :
        print("Bark")

class Cat(Mammal) :
    def be_annoying(self) :
        print("annoying")


dog1 = Dog()
dog1.walk()
dog1.bark()
cat1 = Cat()
cat1.be_annoying()