# Original list and tuple examples
def multiple():
    return 3, 4  # Returning multiple values as a tuple

# Tuple containing various items
things = 'pen', 'tripod', 'water bottle', 'charger', 'phone'

# Check if 'phone' exists in the tuple
if 'phone' in things:
    print('exists')

# Loop through items in the tuple and print each item
for item in things:
    print(item)

# Creating a tuple
t = 12345, 54321, 'hello!'
print(t[1])  # Accessing the second item of the tuple (index 1)
print(t)  # Printing the whole tuple

# Nested tuple (this is fine as tuples are immutable)
u = t, (1, 2, 3, 4, 5)
print(u)  # Printing the nested tuple

# Tuples are immutable (cannot change values directly)
# Uncommenting the following line would result in an error:
# t[0] = 88888  # This will raise a TypeError

# However, a tuple can contain mutable objects, like lists:
v = ([1, 2, 3], [3, 2, 1])  # Tuple containing lists (lists are mutable)
print(v)

# Empty tuple
empty = ()
singleton = 'hello',  # <-- note trailing comma, makes it a tuple
print(len(empty))  # Length of empty tuple
print(len(singleton))  # Length of the tuple with one item
print(singleton)  # The singleton tuple

# Corrected: List of lists (mutable) instead of a list of tuples
mega = [[3, 5, 7], [9, 40, 69]]  # List containing lists
print(mega)  # Printing the list of lists
print(type(mega))  # Checking the type of mega (it should be a list)

# Now you can modify the list elements because lists are mutable
mega[0][1] = 55  # Modifying the list inside the list
print(mega)  # Printing the modified list of lists
