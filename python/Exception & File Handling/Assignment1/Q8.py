# Create a number guessing game in Python where the computer generates a random number, and the
# user has to guess it. Implement error handling to manage situations where the user enters non-numeric
# input or guesses outside the valid range:
import random
def game():
    try:
        min_range=1
        max_range=100
        max_attempt=10
        generated_num=random.randint(min_range,max_range)
        attempt=0
        c='y'
        while c=='y' and attempt<max_attempt:
            attempt+=1
            ch=int(input(f"Guess a number between {min_range} & {max_range} (both inclusive) : "))
            assert (ch>=min_range and ch<=max_range),"Value out of range"
            if ch==generated_num:
                print(f"Congratulations! You got it in attempt number {attempt}")
                c=input("Do you want to play again (y/n)?")
                assert (c=='y' or c=='n'),'Invalid Input! Write y/n.'
                if c=='y':
                    generated_num=random.randint(min_range,max_range)
                    attempt=0
            elif ch>generated_num:
                print("You entered a big number!")
            else:
                print("You entered a small number!")
        if attempt==max_attempt and c=='y':
            print(f"Sorry, your all attempts are finished. Correct answer is {generated_num}. Try again later.")
        print("Thanks for playing!")
    except ValueError:
        print("An integer is allowed only.")
    except AssertionError as e:
        print(e)

game()