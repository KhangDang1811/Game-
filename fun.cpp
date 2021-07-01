printf("Welcome to the number guessing game");
printf("");
printf('Computer will generate a number between 1 and 100');
printf("");
printf('Your task is to guess the number');
printf("");
printf('If the number is higher than the number you guess, computer will say higher');
printf("");
printf('If the number is lower than the number you guess, computer will say lower');
printf("");
printf('You will have 5 chances');
still_guessing = True
while still_guessing == True:
    printf("");
    print(f'Good luck!');
    printf("");
    import random
    number = random.randint(0,100)
    guess_times = 0
    while guess_times < 7:
        guess_times +=1
        guess_input = input('guess ' + str(guess_times) + ': ')
        if guess_input:
            guess = int(guess_input)
            if guess < number:
                print('Higher')
            elif guess > number:
                print('Lower')
            elif guess == number:
                print('You win!')
                still_guessing == False
        else:
            printf("");
            guess_times -=1
printf('Better luck next time!');
printf("");
printf("");          

still_guessing == False
still_guessing = True
