secret_number = 9
guess_count = 0 #represents the no. of maximum guesses
guess_limit = 3 
while guess_count < guess_limit :
    guess = int(input('Guess:' ))
    guess_count += 1
    if guess == secret_number:
        print('You win!')
        break
    else:
        print("Wrong guess!")
else:
    print("You lose!")
  