print('''
This is a car simulator game.
Type help for instructions.''')
command = "" #empty string
started = False
while command.upper() != "QUIT" :

  command = input('>').upper()
  if command == "HELP" :
      print('''   
start - to start the car. 
stop - stop the car.
quit - exit the game.''')
  elif command == "START":
      if started == True :
          print("The car is already started. What are you trying to do? ")
      else:
         print('Car started... Ready to go!')
         started = True
  elif command == "STOP":
        if started == False: # if not started
          print("The car is already stopped. What are you trying to do? ")
        else:
             print("Car stopped!")
             started = False
  elif command == "QUIT":
        print("Quitting...")
  else:
         print("I don't understand that...")