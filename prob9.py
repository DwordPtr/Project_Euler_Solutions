triplets = []
for a in range(1,1000):
    for b in range(1,1000):
        for c in range(1,1000):
            if c**2 == a**2+b**2:
                tempList = [a,b,c]
                triplets.append(tempList)

for i in range(len(triplets)):
    if(triplets[i][0] + triplets[i][1] + triplets[i][2] == 1000):
        for j in range(len(triplets[i])):
            print(triplets[i][j],end='\t')

