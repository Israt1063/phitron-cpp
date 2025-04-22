numbers = [23,45,2,4,1,44,55,67,89,67]
person1 = ['kala chan', 'kalipur', 23, 'student']

# key value pair
# dictionary
# object
# hash table
# overlap with set
# {key: value, key: value, key: value}

person = {'name':'kala chan','addars': 'kalipur', 'age': 23, 'job': 'student'}
print(person)
print(person['job'])
print(person.keys())
print(person.values())
person['language'] = 'python'  #mutable
del person['age']
print(person)

tel = {'jack': 4098, 'sape': 4139}
print(list(tel))  # convert to list
print(sorted(tel))

# special dictonary looping
for key, value in person.items():
	print(key,value)