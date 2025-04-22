# def double(x)
# 	return x*2

double = lambda num : num * 2
squared = lambda num : num * num
result = double(44)
output = squared(9)
print(result,output)

add = lambda x,y : x + y
sum = add(11,99)
print(sum)

# map
numbers = [23,45,2,4,1,44,55,67,89,67]
# doubled_nums = map(double,numbers)
doubled_nums = map(lambda x: x*2, numbers)
print(list(doubled_nums))

actor = [
	{'name': 'mahmud', 'age': 50},
	{'name': 'mahmud', 'age': 30},
	{'name': 'mahmud', 'age': 29},
	{'name': 'mahmud', 'age': 55},
	{'name': 'mahmud', 'age': 70},
]
juniors = filter(lambda actor : actor['age'] < 30, actor)
print(list(juniors))