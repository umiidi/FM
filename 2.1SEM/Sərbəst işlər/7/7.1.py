import turtle as tt
tt.bgcolor('black')
tt.pensize(2)
tt.speed(11)

for i in range(5):
    for color in ('red', 'magenta', 'blue',
                  'cyan', 'green', 'white',
                  'yellow'):
        tt.color(color)
        tt.circle(100)
        tt.left(10)
    tt.hideturtle()