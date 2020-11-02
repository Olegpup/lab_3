import math
a = 0
b = math.pi
i = 0
sum = 0
e = float(input("Enter precision: "))
while True:
    x = a + e*i
    sum += math.log(2 + math.sin(x))*e
    if x > (b - e):
        break
    i += 1
print("Answer:",sum)