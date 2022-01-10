# Number of occurance of each character in a String
def most_frequent(string):
    d = dict()
    for key in string:
        if key not in d:
            d[key] = 1
        else:
            d[key] += 1
    sortedLetters = sorted(d.items(), key=lambda k: k[1], reverse=True)
    return sortedLetters
S= input('Please enter a string \n')
print (most_frequent(S))

