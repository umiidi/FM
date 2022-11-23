from time import sleep

from src.Quiz.quizutil import OneQuizGenerator, PrintInputQuiz, Calculator

def StartQuiz(user):
    QuizGenerator(user)

def QuizGenerator(user):
    incorrectanswers = []
    cs=0 ; ins=0

    for i in range(10):
        quiz = OneQuizGenerator(user.level)
        a = int(quiz[0])
        b = int(quiz[1])
        o = quiz[2]
        result = PrintInputQuiz(a, b, o)
        correctresult = Calculator(a,b,o)
        if result == correctresult:
            cs+=1
        else:
            ins+=1
            inc = [str(a), str(b), o, str(result), str(correctresult)]
            incorrectanswers.append(inc)
    else:
        PrinterIncorrectAnswer(incorrectanswers)
        PrinterFinal(user, cs, ins)

def PrinterIncorrectAnswer(incorrectanswers):
    print("\n", end='')
    for inc in incorrectanswers:
        print(inc[0] + inc[2] + inc[1]  + "= ?")
        print("Your Answer: " + str(inc[3]))
        print("Correct Answer: " + str(inc[4]))
        print("\n",end='')

def PrinterFinal(user, cs, ins):
    newscore = cs - ins//4
    user.AddScore(newscore)
    if ins==0:
        user.AddLevel()
        print("Congrats friend, You passed to level " + str(user.GetLevel()))
    print("Correct answers: " + str(cs))
    print("Incorrect answers: " + str(ins))
    print("Your score now: " + str(newscore))
    print("Total score: " + str(user.GetScore()))