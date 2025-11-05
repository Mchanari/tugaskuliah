print("Bilangan\n")
print("Fibonacci : ", end="")

a, b = 0, 1
count = 0
max_count = 12    # jumlah bilangan Fibonacci yang ditampilkan

while count < max_count:
    print(a, end=" ")
    a, b = b, a + b
    count += 1
