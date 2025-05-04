# 1

def split_balanced_strings(S):
    count = 0  
    balance = 0  
    result = []
    current_string = ""
    
    for char in S:
        current_string += char
        if char == 'L':
            balance += 1
        else:
            balance -= 1
        
        if balance == 0: 
            result.append(current_string)
            current_string = ""  
            count += 1
    
    print(count)
    for string in result:
        print(string)
 

S = input().strip()
split_balanced_strings(S)


#2

# def min_removals_to_good_sequence(n, arr):
#     freq = Counter(arr)
#     removals = 0
    
#     for num, count in freq.items():
#         if count > num:
#             removals += count - num
#         elif count < num:
#             removals += count
    
#     return removals

# n = int(input())
# arr = list(map(int, input().split()))


# print(min_removals_to_good_sequence(n, arr))


#5

# import pyautogui

# n = int(input())

# for i in range(1, n + 1):
#     pyautogui.write("#" * i)
#     pyautogui.press("enter") 


#4

# def max_operations(n, arr):
#     count = 0
    
#     while all(x % 2 == 0 for x in arr):
#         arr = [x // 2 for x in arr]
#         count += 1
    
#     return count


# n = int(input())
# arr = list(map(int, input().split()))


# print(max_operations(n, arr))

# from collections import Counter
