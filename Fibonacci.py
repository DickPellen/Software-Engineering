total = 0
MAX = 4000000

fiboNew = 1
fiboOld = 0
while (fiboOld < MAX):
    if(fiboNew - (int(fiboNew/2)*2) == 0):
        total = total + fiboNew
    temp = fiboNew + fiboOld
    fiboOld = fiboNew
    fiboNew = temp
print("The total of the Even Fibonacci numbers below ")
print(MAX)
print(" are: ")
print(total)