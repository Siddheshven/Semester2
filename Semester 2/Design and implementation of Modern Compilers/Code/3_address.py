from ast import operator
from inspect import stack
from turtle import pos
from unittest import result


if __name__=="__main__":
    postfix_expr = input("Enter postfix expression >").split()
    operator_set = ('+', '-', '/', '*', '^')
    stack = []
    result = str1 =""
    count = 0
    print("Three Address code")
    for i in postfix_expr:
        if i not in operator_set:
            stack.append(i)
            print("Stack: ",stack)
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operand2 + i + operand1
            str1 = "T" + str(count)
            stack.append(str1)
            print("T", count, "=", result)
            count += 1
