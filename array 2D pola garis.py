# Array 2D dalam pola garis diagonal

n = 5
array = [[0 for j in range(n)] for i in range(n)]

for i in range(n):
    for j in range(n):
        if i == j:
            array[i][j] = 1

for i in range(n):
    for j in range(n):
        print(array[i][j], end=" ")
    print()
