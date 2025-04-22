numbers = [56,55,78,70,2,3,5,90,91,97,45,33,31]
odds = []
for num in numbers:
	if num % 2 == 1 and num % 5 == 0:
	    odds.append(num)

print(odds)

# ood_nums = [num for num in numbers if num % 2 == 1]
ood_nums = [num for num in numbers if num % 2 == 1 if num% 5 == 0]  #  list comprehension
print(ood_nums)