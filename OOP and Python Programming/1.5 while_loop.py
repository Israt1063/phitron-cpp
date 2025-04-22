# Simple while loop
count = 1
while count <= 10:
    print(count)
    count += 1

# Using break
val = 1
while val <= 10:
    print(val)
    val += 1
    if val == 5:
        break

# Using continue
num = 0
while num <= 10:
    num += 1
    if num % 2 == 1:
        continue
    print(num)
