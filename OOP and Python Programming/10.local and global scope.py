balance = 3000  # Global variable

def buy_things(item, price):
    # Local variable
    dream_phone = 'xphone'
    
    # Modify global variable using the 'global' keyword
    global balance
    print(f'Previous balance value: {balance}')
    
    balance = balance - price  # Subtract price from the global balance
    print(f'Balance after buying {item}: {balance}')

buy_things('sunglasses', 1000)
print(f'Global balance after purchase: {balance}')
