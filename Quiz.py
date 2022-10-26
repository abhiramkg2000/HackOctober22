def guess_name(guess, answer):
    global score
    still_guessing = True
    attempt=0
    while still_guessing and attempt<3:
        if guess.lower() == answer.lower():
            print("Hurray !! You gave a correct answer")
            score = score + 1
            still_guessing = False
        else:
            if attempt < 2:
                guess = input("Sorry, Wrong answer ... try again\n")
            attempt = attempt+1
        if attempt == 3:
            print("The correct answer is ",answer)

score = 0
print("!!!-----Python Programming Questions-----!!!")
guess_1=input("Which is the keyword used for declaring a function ?\n")
guess_name(guess_1,"def")
guess_2 = input("What is the datatype of 123.4 ?\n")
guess_name(guess_2,"float")
guess_3 = input("Who is the father of Python ?\n")
guess_name(guess_3,"Guido Van Rossum")
print("Your final Score is "+ str(score))
