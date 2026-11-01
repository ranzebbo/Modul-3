nilai = int(input())

if 80 <= nilai <= 100:
    print("A")
elif 70 <= nilai < 80:
    print("B")
elif 60 <= nilai < 70:
    print("C")
elif 50 <= nilai < 60:
    print("D")
elif 0 <= nilai < 50:
    print("E")
else:
    print("Nilai tidak valid")
