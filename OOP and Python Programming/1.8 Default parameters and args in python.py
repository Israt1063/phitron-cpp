# Default parameters
def sum_numbers(num1, num2, num3=0):  # Renamed function to avoid conflict with 'sum'
    result = num1 + num2 + num3  # Now correctly includes num3
    print(result)

sum_numbers(10, 4)  # num3 defaults to 0
sum_numbers(10, 4, 6)  # Now works with 3 parameters

# Using *args to accept multiple arguments
def all_sum(*args):
    print(args)  # args is a tuple

all_sum(3, 6, 4, 5, 8)

# Using *args with additional fixed parameters
def all_sum_extended(num1, num2, *args):  
    print(f"Fixed Parameters: {num1}, {num2}")
    print("Other arguments:", args)
    
    total_sum = 0  # Renamed 'sum' to 'total_sum'
    for num in args:
        print(num)
        total_sum += num
    return total_sum
        
total = all_sum_extended(3, 6, 4, 5, 8)
print(total)
