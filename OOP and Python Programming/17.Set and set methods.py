# set : unique items collection . no dublicate
# set --> {}

numbers = [12,5,6,7,8,4,12,55,66,99]
print(numbers)
numbers_set = set(numbers)
print(numbers_set)
numbers_set.add(67)
print(numbers_set)
numbers_set.remove(6)
print(numbers_set)

if 8 in numbers_set:
	print('exitsts')

for item in numbers_set:
    print(item)
    
# set of letters
s = {'g', 'e', 'k', 's'}

# adding 's'
s.add('f')
print('Set after updating:', s)

# Discarding element from the set
s.discard('g')
print('\nSet after updating:', s)

# Removing element from the set
s.remove('e')
print('\nSet after updating:', s)

# Popping elements from the set
print('\nPopped element', s.pop())
print('Set after updating:', s)

s.clear()
print('\nSet after updating:', s)

# difference()	:Returns a set that is the difference between two sets
# difference_update()	:Updates the existing caller set with the difference between two sets
# discard():	Removes the element from the set
# frozenset()	:Return an immutable frozenset object
animals = frozenset(["cat", "dog", "lion"])
print("cat" in animals) 
print("elephant" in animals)  

# intersection():	Returns a set that has the intersection of all sets
# intersection_update()	:Updates the existing caller set with the intersection of sets
# isdisjoint():	Checks whether the sets are disjoint or not
s1 = {1, 2, 3}
s2 = {4, 5, 6}
print(s1.isdisjoint(s2))
# issubset()	:Returns True if all elements of a set A are present in another set B
s1 = {1, 2, 3, 4, 5}
s2 = {4, 5}
print(s2.issubset(s1))
# issuperset()	:Returns True if all elements of a set A occupies set B
# symmetric_difference():	Returns a set which is the symmetric difference between the two sets
# symmetric_difference_update()	:Updates the existing caller set with the symmetric difference of sets
# union()	:Returns a set that has the union of all sets
A = {1, 2, 3} 
B = {3, 4, 5}

print(A.union(B))  # Combining both sets

# update()	:Adds elements to the set
dict1 = {'a': 1, 'b': 2}
# Update with another dictionary
dict1.update({'b': 20, 'c': 3})
print(dict1)

