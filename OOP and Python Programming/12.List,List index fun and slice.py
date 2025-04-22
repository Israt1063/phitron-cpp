numbers = [34, 45, 6, 7, 3, 4, 2, 1, 56, 8]

# Accessing elements using index and negative index
print(numbers[3], numbers[-3])  # Output: 7 56

# List slicing examples
print(numbers[2:6])  # Output: [6, 7, 3, 4]
print(numbers[1:7])  # Output: [45, 6, 7, 3, 4, 2]

# Slicing with step
print(numbers[1:7:1])  # Output: [45, 6, 7, 3, 4, 2]
print(numbers[7:1:-1])  # Output: [1, 2, 4, 3, 7, 6]

# Slicing with no start or end index
print(numbers[4:])   # Output: [3, 4, 2, 1, 56, 8]
print(numbers[:6])   # Output: [34, 45, 6, 7, 3, 4]
print(numbers[:])    # Output: [34, 45, 6, 7, 3, 4, 2, 1, 56, 8]

# Reversing the list
print(numbers[::-1])  # Output: [8, 56, 1, 2, 4, 3, 7, 6, 45, 34]
