MAX = 100
totalSquare = 0
totalSum = 0
total = 0

for x in range(1,MAX+1):
    totalSquare = totalSquare + x ** 2
    totalSum = totalSum + x
totalSum = totalSum ** 2
total = totalSum - totalSquare
print("With a max value of " + str(MAX) + ", the total Sum square difference is: " + str(total))