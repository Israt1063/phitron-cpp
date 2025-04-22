# User input (default type: string)
amount1 = input("Enter first amount: ")
amount2 = input("Enter second amount: ")

# String concatenation (default behavior)
combined_total = amount1 + amount2
print("Concatenated Total:", combined_total)
print("Type of amount1:", type(amount1))

# Typecasting: Convert string to integer
amount1_int = int(amount1)
amount2_int = int(amount2)

# Corrected numerical addition
print("Summed Total:", amount1_int + amount2_int)

# Integer to string conversion
num_value = 42
num_string = str(num_value)
print("String representation of num_value:", num_string)

# Convert integer to float
integer_number = 10
float_value = float(integer_number)
print("Integer to Float:", float_value)

# Convert string to float
pi_string = "3.1415"
pi_float = float(pi_string)
print("String to Float:", pi_float)

# Integer division resulting in float
division_result = 5 / 2  # No need for explicit float conversion
print("Integer division result:", division_result)

# Float to integer conversion (truncation)
decimal_number = 9.56
integer_converted = int(decimal_number)
print("Float to Integer (truncated):", integer_converted)
