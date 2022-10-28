import turtle
tur = turtle.Turtle()
def spiral(m,n):
    
    for i in range(m):
        tur.dot()
        tur.forward(n)
        tur.right(90)
        n=n-1
tur.penup()
spiral(40,40)
