import math

n = int(input())
k, i = 1, 0

while k < n:
    i += 1
    k = i ** 3

if i == 0:
    i += 1

if (i - 1) ** 3 < n <= (i - 1) ** 2 * i:
    r = 3 * (i - 1) * (i ** 2)
    n -= (i - 1) ** 3
elif (i - 1) ** 2 * i < n <= (i - 1) * i ** 2:
    r = 3 * (i - 1) ** 3 + 9 * (i - 1) ** 2 + 7 * (i - 1) + 1
    n -= (i - 1) ** 2 * i
elif (i - 1) * i ** 2 < n <= i ** 3:
    r = 3 * (i ** 3 + i ** 2) - i - 1
    n -= (i ** 2) * (i - 1)
else:
    print(f"{i}???")
    exit()

i1 = 1
while n > 0:
    for i2 in range(i1):
        if n == 0:
            break
        if i1 == 1:
            r += 8
        elif i2 == 0 or i2 == i1 // 2:
            r += 5
        else:
            r += 3
        n -= 1
    i1 += 2

print(int(r))
