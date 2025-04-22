# Logical Operators: in, is, not, not in, is not, and, or

person_age = 70

if person_age >= 18 and person_age < 60:
    print("Can vote")
    print("Adult")
elif person_age >= 60:
    print("Can vote")
    print("Old")
else:
    print("Cannot vote")
    print("Not an adult")

# Boolean check using 'is' and 'is not'
exam_passed = True

if exam_passed is False:  # 'is' works like '=='
    print("Fail")
else:
    print("Pass")

if exam_passed is not False:  # 'is not' works like '!='
    print("Pass")
else:
    print("Fail")
