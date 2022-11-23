import random

def OneQuizGenerator(level):
    ab = RandomNumbers(level)
    a = ab[0]
    b = ab[1]
    o = RandomOperations()
    if OperationTest(a, b, o):
        return [str(a),str(b),o]
    else: return OneQuizGenerator(level)

def PrintInputQuiz(a,b,o):
    try: return int(input(str(a) + o + str(b) + "= "))
    except: return 0

def RandomNumbers(level):
    return random.sample(range(1, level*10),2)

operations = ['+', '-', '*', '/']

def RandomOperations():
    return random.choice(operations)

def OperationTest(a,b,o):
    return (a != b) and (o != '/' or (o == '/' and a % b == 0))

def Calculator(a,b,o):
    if o == '+': return a + b
    elif o == '-': return a - b
    elif o == '*': return a * b
    elif o == '/': return a / b
    else: exit("Error, Please report a bug")