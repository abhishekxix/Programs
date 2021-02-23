class Point :   #Pascale naming convention
     def move(self) :
        print("move")


     def draw(self) :
        print("draw")


point1 = Point(10, 20)
point1.draw()
point1.x = 10
point1.y = 20
print(point1.x)
point1.draw()
point2 = Point()
point2.x = 10
print(point2.x)