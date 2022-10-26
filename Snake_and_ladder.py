from PIL import  Image
import random

end=100

def show_board():
    #img=Image.open("C:\\Users\\asus\\Downloads\\snake_and_ladder.png")
    img=Image.open("Projects\snake_and_ladder.png")
    img.show()

def check_ladder(points):
    if points==1:
        print("Ladder")
        points=38
    elif points==4:
        print("Ladder")
        points=14
    elif points==9:
        print("Ladder")
        points=31
    elif points==21:
        print("Ladder")
        points=42
    elif points==28:
        print("Ladder")
        points=84
    elif points==51:
        print("Ladder")
        points=67
    elif points==72:
        print("Ladder")
        points=91
    elif points==80:
        print("Ladder")
        points=99

    return points

def check_snake(points):
    if points==17:
        print("Snake")
        points=7
    elif points==54:
        print("Snake")
        points=34
    elif points==62:
        print("Snake")
        points=19
    elif points==64:
        print("Snake")
        points=60
    elif points==87:
        print("Snake")
        points=36
    elif points==93:
        print("Snake")
        points=73
    elif points==95:
        print("Snake")
        points=75
    elif points==98:
        print("Snake")
        points=79

    return points

def play():
    #input player1 name
    p1_name = input("Player 1, Please enter your name : ")
    #input player 2 name
    p2_name = input("Player 2, Please enter your name : ")
    #Initial player1 points
    p1_points=0
    #Initial Player2 points
    p2_points=0

    turn=0

    while(1):
        if turn%2==0:
            #Player 1 turns
            print(p1_name," your turn")
            #asks player's choice to continue
            choice=int(input('Press 1 to continue, 0 to quit : '))
            if choice==0:
                print(p1_name," scored : ",p1_points)
                print(p2_name," scored : ",p2_points)
                print("Quiting the game, Thanks for playing")
                break
            #generate a random number from 1,2,3,4,5,6
            dice = random.randint(1,6)
            print('Dice showed : ',dice)
            p1_points+=dice

            p1_points=check_ladder(p1_points)
            p1_points=check_snake(p1_points)
            #check if the player goes beyond the board
            if(p1_points>end):
                p1_points=end
            print(p1_name,', Your Score : ',p1_points)

            if(p1_points==end):
                print(p1_name," won")

        else:
            #Player 2 turns
            print(p2_name," your turn")
            #asks player's choice to continue
            choice=int(input('Press 1 to continue, 0 to quit : '))
            if choice==0:
                print(p1_name," scored : ",p1_points)
                print(p2_name," scored : ",p2_points)
                print("Quiting the game, Thanks for playing")
                break
            #generate a random number from 1,2,3,4,5,6
            dice = random.randint(1,6)
            print('Dice showed : ',dice)
            p2_points+=dice
            p2_points=check_ladder(p2_points)
            p2_points=check_snake(p2_points)
            #check if the player goes beyond the board
            if(p2_points>end):
                p2_points=end
            print(p2_name,', Your Score : ',p2_points)

            if(p2_points==end):
                print(p2_name," won")
        turn+=1

show_board()
play()
