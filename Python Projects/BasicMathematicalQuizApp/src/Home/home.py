from src.Quiz.quiz import StartQuiz
from src.Util.inpututil import InputMenu

def Home(user):
    HomeMenu(user)

def HomeMenu(user):
    print("\nHome Menu")
    print("1. Start The Exam\n"
          "2. Show My Level\n"
          "3. Show My Total Score\n"
          "4. Sign Out")

    n = InputMenu(1,4)
    if n==1:
        StartQuiz(user)
    elif n==2:
        print("\nYour Level: " + str(user.GetLevel()))
    elif n==3:
        print("\nTotal Score: " + str(user.GetScore()))
    elif n==4:
        exit("Logged out!")
    HomeMenu(user)