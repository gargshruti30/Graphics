import sys, pygame
from pygame import gfxdraw


white = (255, 255, 255)
pygame.init()
screen = pygame.display.set_mode((800, 800))
screen.fill((0, 0, 0))
pygame.display.flip()
screen = pygame.display.set_mode((800, 800))
x = {}
y = {}

for i in range(0, 4):
    x[i] = eval(input("Please enter x coordinate of point "))
    y[i] = eval(input("Please enter y coordinate of point "))


def bezier():
    for i in range(0, 1000):
        i = i / 1000
        X = pow((1-i), 3)*x[0] + pow((1-i),2)*i*x[1] + pow((1-i),1)*pow(i,2)*x[2] + pow((1-i),0)*pow(i,3)*x[3]
        Y = pow((1 - i), 3) * y[0] + pow((1 - i), 2) * i * y[1] + pow((1 - i), 1) * pow(i, 2) * y[2] + pow((1 - i),0) * pow(i,3)*y[3]
        gfxdraw.pixel(screen,int(X),int(Y),white)
        pygame.display.flip()
        i = i * 1000


bezier()

while 1:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            sys.exit()