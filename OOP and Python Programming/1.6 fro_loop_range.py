numbers = [5, 7, 9, 10, 12]
total_sum = 0  # Renamed 'sum' to 'total_sum' to avoid conflict

for num in numbers:
    print(num)
    total_sum += num
print(total_sum)

text = 'saraf'
text_length = 0  # Renamed 'len' to 'text_length'

for char in text:
    print(char)
    text_length += 1
print(text_length)

# range -> start (inclusive) to stop (exclusive) "if needed" -> step  range(1,10)/range(1,10,2)
for i in range(1, 10, 2):  # Step of 2
    print(i)

for i in range(1, 10):  # Default step of 1
    print(i)

# Using enumerate() to get index and value
for index, value in enumerate(numbers):  
    print(index, value)

# Using range(len()) to get index
for index in range(len(numbers)):  
    print(index)

# Using enumerate() but ignoring value (underscore _ means we don’t use the value)
for index, _ in enumerate(numbers):  
    print(index)
