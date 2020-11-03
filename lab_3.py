import math
a = 0
b = math.pi
i = 0
sum = 0
x = 0
e = float(input("Enter precision: "))
while x <= (b - e):
    x = a + e*i
    sum += math.log(2 + math.sin(x))*e
    i += 1
print("Answer:",sum)
