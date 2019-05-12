AMOUNT = 3

total = 0

for x in range(1000):
    if x*AMOUNT < 1000:
        total = total + x*AMOUNT

print("The sum of all the multiples of ")
print(AMOUNT)
print(" below 1000 are: ")
print(total)