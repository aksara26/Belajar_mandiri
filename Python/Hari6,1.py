rahasia = 10
angka = int(input("Masukkan angka : "))

if angka < rahasia:
    print("Salah. Angkamu lebih kecil")
elif angka == rahasia:
    print("Angkamu Tepat!")
else:
    print("Salah. Angkamu terlalu besar")
