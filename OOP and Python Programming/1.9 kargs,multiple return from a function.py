# Function with ordered and named parameters
def full_name(first, last):
    name = f'Full Name: {first} {last}'
    return name

name = full_name("alu", "kodu")  # Ordered parameters
fullname = full_name(first="kodu", last="alu")  # Named parameters
print(name)
print(fullname)

# Function with **kwargs (keyword arguments)
def famous_name(first, last, **addition):
    f_name = f'{first} {last}'
    
    # Print all additional keyword arguments
    for key, value in addition.items():
        print(f"{key}: {value}")

    return f_name

a_name = famous_name(first='Tahir', last='Ali', title='Hojur', title2='Shayokh', last2='Taheri')
print(a_name)

# Function returning multiple values
def lot_of(num1, num2):
    addition_result = num1 + num2  # Renamed 'sum' to 'addition_result'
    multiplication_result = num1 * num2
    subtraction_result = num1 - num2

    return addition_result, multiplication_result, subtraction_result

everything = lot_of(50, 5)
print(f"Sum: {everything[0]}, Multiplication: {everything[1]}, Subtraction: {everything[2]}")
