nama=input("Masukkan Nama: ")
lama=int(input("Masukkan Lama:"))
kendaraan=input("Masukkan Kendaraan :")
diskon=0
total=0
 
if kendaraan == "motor" :
    total = 1000
elif kendaraan == "mobil" :
    total = 2000
if lama >=5 :
    diskon = 0.1*total
    total=total-diskon

print("nama Anda Adalah", nama ,"Lama Parkir :",lama, "kendaraan anda adalah ",kendaraan,"Anda Mendapat Diskon", diskon,"Total biaya parkir anda adalah :", total)