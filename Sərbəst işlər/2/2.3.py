import random
def FinCodeGenerator():
    fin = ''
    for i in range(7):
        choice = random.choice([0,1])
        if choice == 0: onecode = chr(random.randint(49,57))
        else: onecode = chr(random.randint(65,90))
        fin += onecode
    else: return fin
print(FinCodeGenerator())

#Random olaraq hərf və rəqəmlərdən ibarət Finkod yaradan program