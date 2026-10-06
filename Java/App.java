public class App {
    static class Mahasiswa {    
        String nama;    
        String kelas;
        String jurusan;
        double ipk;
        int umur;
    }
    public static void main(String[] args) throws Exception {
        Mahasiswa mahasiswa1 = new Mahasiswa();
        Mahasiswa mahasiswa2 = new Mahasiswa();
        mahasiswa1.nama="Arya";
        mahasiswa1.kelas="TI-A1";
        mahasiswa1.jurusan="Teknik Informatika";
        mahasiswa1.ipk=3.4;
        mahasiswa1.umur=17;
        mahasiswa2.nama="wira";
        mahasiswa2.kelas="TI-A1";
        mahasiswa2.jurusan="Teknik Informatika";
        mahasiswa2.ipk=3.5;
        mahasiswa2.umur=17;
       System.out.println(mahasiswa1.nama);
       System.out.println(mahasiswa1.kelas);
       System.out.println(mahasiswa1.jurusan);
       System.out.println(mahasiswa1.ipk);
       System.out.println(mahasiswa1.umur);
       System.out.println(mahasiswa2.nama);
       System.out.println(mahasiswa2.kelas);
       System.out.println(mahasiswa2.jurusan);
       System.out.println(mahasiswa2.ipk);
       System.out.println(mahasiswa2.umur);
        
    }
}
