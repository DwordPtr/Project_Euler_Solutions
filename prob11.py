inputFile = open("inputForProblem11")
inputString = inputFile.read()
lines = inputString.split("\n")
for i in range(len(lines)):
    lines[i] = lines[i].split(" ")
for x in range(20):
    for y in range(20):
        lines[x][y] = int(lines[x][y])
products = []
#vertical products
for x in range(20):
    for y in range(16):
        product = 1
        for OffsetY in range(4):
            product*=lines[x][y+OffsetY]
        products.append(product)

for y in range(20):
    for x in range(16):
        product = 1
        for OffsetX in range(4):
            product*=lines[x+OffsetX][y]
        products.append(product)
#bottom to top left to right diagonal
org_x = 0
org_y = 19
while org_y>=0:
    x = org_x
    y = org_y
    while  x<20 or y>-1:
        product = 1
        for i in range(4):
            product*=lines[x][y]
            x+=1
            y-=1
        products.append(product)

    org_y-=1

#top to bottom left to right diagonal
org_x = 0
org_y = 0
while org_x<20:
    x = org_x
    y = org_y
    while x<16 and y<16:
        product = 1
        for i in range(4):
            product*=lines[x][y]
            x+=1
            y+=1
        products.append(product)

    org_x+=1
#bottom to top right to left
org_x = 19
org_y = 19
while org_y>0:
    x = org_x
    y = org_y
    while x>3 and y<16:
        product = 1
        for i in range(4):
            product*=lines[x][y]
            x-=1
            y+=1
        products.append(product)

    org_y-=1
#top to bottom right to left
org_x = 19
org_y = 0
while org_x>0:
    x = org_x
    y = org_y

    while x>3 and y<16:
        product=1
        for i in range(4):
            product*=lines[x][y]
            x-=1
            y+=1
        products.append(product)

    org_x-=1

products.sort()
print(products[len(products)-1])
