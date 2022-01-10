#Program for Fibonacci Series till nth term
numterms = int(input("How many terms? "))

n1, n2 = 0, 1
count = 0

if numterms <= 0:
   print("Please enter a positive integer")
else:
    if numterms == 1:
        print("Fibonacci sequence upto",numterms,":")
        print(n1)
    else:
        print("Fibonacci sequence:")
        while count < numterms:
            print(n1)
            nth = n1 + n2
            n1 = n2
            n2 = nth
            count += 1
