def area_choice(argument):
    if argument == 1:
        Rectangle()
    elif argument == 2:
        Square()
        pass
    elif argument == 3:
        Circle()
    elif argument == 4:
        Triangle()
        pass
    elif argument == 5:
        Parallelogram()
        pass
    elif argument == 6:
        Trapezium()
        pass
    elif argument == 7:
        Ellipse()
        pass
    else:
        pass

def Rectangle():
    l = int(input("Enter Length: "))
    b = int(input("Enter Breadth: "))
    print("The area of rectangle is ",l*b)

def Square():
    s = int(input("Enter Side length: "))
    print("The area is of square is ",s*s)

def Circle():
    radius = float(input ("Input the radius of the circle : "))
    area = 3.14 * radius**2
    print ("The area of the circle with radius " + str(radius) + " is: " + str(area))

def Triangle():
    h = int(input("Enter Height: "))
    b = int(input("Enter Base: "))
    print("The area of triangle is ",(h*b)/2)
            
def Parallelogram():
     v = int(input("Enter Vertical height: "))
     b = int(input("Enter Base: "))
     print("The area of Parallelogram is ",v*b)
    
def Trapezium():
     a = int(input("Enter Length of parallel side 1: "))
     b = int(input("Enter Length of parallel side 2: "))
     h = int(input("Enter Height: "))
     print("The area of rectangle is ",((a+b)/2)*h)
     
def Ellipse():
     a = int(input("Enter Semi minor axis: "))
     b = int(input("Enter Semi major axis: "))
     print("The area of ellipse is ",3.14*a*b)

loop=1
while(loop==1):
    print("\nArea of a 2D shapes")
    print("1- Rectangle \n2-Square \n3-Circle \n4-Triangle \n5-Parallelogram \n6-Trapezium \n7-Ellipse")
    print("Any other Character - exit")
    choice = int(input("What's your choice : "))
    area_choice(choice)
    again = int(input("\nDo again ?\n 1-Yes \nOther character-No\n"))
    if again == 1:
        pass
    else:
        loop = 0
