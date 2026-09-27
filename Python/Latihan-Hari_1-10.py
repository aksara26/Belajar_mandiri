Nama = input("Masukkan Nama Anda :")
Kelas = input("Masukkan Kelas Anda :")
Nilai_1 = int(input("Masukkan Nilai Pertama :"))
Nilai_2 = int(input("Masukkan Nilai Kedua :"))
Nilai_3 = int(input("Masukkan Nilai Ketiga :"))
Nilai_4 = int(input("Masukkan Nilai Keempat :"))
Nilai_5 = int(input("Masukkan Nilai Kelima :"))
Total = Nilai_1 + Nilai_2 + Nilai_3 + Nilai_4 + Nilai_5
Rata_rata = Total / 5
if Rata_rata >= 90:
    Grade = "A"
elif Rata_rata >= 80:
    Grade = "B"
elif Rata_rata >= 70:
    Grade = "C"
elif Rata_rata >= 60:
    Grade = "D"
else:
    Grade = "E"
    print(Nama, "Kelas", Kelas, "Rata Rata Nilai Anda Adalah", Rata_rata, "Dengan Grade", Grade)

if Grade == "E":
    print("Maaf Anda Tidak Lulus")
else:
    print("Selamat Anda Lulus")
        