// OPERATION CALCULATOR WITH PYTHON :

first = int(input("Enter first number here:"))
operator = input("Enter operator (+,-,*,/,%):")
second = int(input("Enter second number here:"))

if operator == "+" :
    print(first+second)
elif operator == "-" :
    print(first-second)
elif operator == "*" :
    print(first*second)
elif operator == "/" :
    print(first/second)
elif operator == "%" :
    print(first%second)
else :
    print("Invalid operation")
