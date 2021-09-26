#include<string>
#include<iostream>
#define Thread __declspec( thread )
using namespace std;

class Person {
private:
	int id;
	int tuoi;
	string ho;
	string ten;
	string diaChi;
	string gioiTinh;
	string sdt;
public:
	int tls_id = 100;
	
	
	Person() {};
	Person(int id, int tuoi, string ho, string ten, string diaChi, string gioiTinh, string sdt) {
		this->id = 0;
		this->tuoi = tuoi;
		this->ho = ho;
		this->ten = ten;
		this->diaChi = diaChi;
		this->gioiTinh = gioiTinh;
		this->sdt = sdt;
		
	}
	

	void setTuoi(int tuoi) {
		this->tuoi = (tuoi >= 0) ? tuoi : 0;
	}

	void setId(int id) {
		this->id = (id >= 100) ? id : id++;
	}
	int getId() {
		return this->id;
	}
	
	int getTuoi() {
		return this->tuoi;
	}
	
	string getHo() {
		return this-> ho;
	}
	void setHp(string ho) {
		this->ho = ho;
	}
	string getTen() {
		return this->ten;
	}
	void setTen(int ten) {
		this->ten = ten;
	}
	string getDiaChi() {
		return this->diaChi;
	}
	void setDiaChi(string diaChi) {
		this->diaChi = diaChi;
	}
	string getGioiTinh() {
		return this->gioiTinh;
	}
	void setGioiTinh(string gioiTinh) {
		this->gioiTinh = gioiTinh;
	}
	string getSdt() {
		return this->sdt;
	}
	void setSdt(string std) {
		this->sdt = sdt;
	}
	void hienThi() {
		cout << "====================================\n";
		cout << "ID: " << getId() << endl;
		cout << "Ho: " << getHo() << endl;
		cout << "Ten : " << getTen() << endl;
		cout << "Tuoi : " << getTuoi() << endl;
		cout << "Dia Chi : " << getDiaChi() << endl;
		cout << "Gioi Tinh : " << getGioiTinh() << endl;
		cout << "SDT : " << getSdt() << endl;
		cout << "====================================\n";
	}
	string hoTen() {
		return getHo() + " " + getTen();
	}
};

void thongTinNguoi(Person* ps, size_t n) {
	int tuoi =0;
	string ho, ten, diaChi, gioiTinh, sdt;
	for (size_t i = 0; i < n; i++) {
		cout << "Ho : ";
		cin >> ho;
		cout << "Ten : ";
		
		cin.ignore();
		getline(cin, ten);
		cout << "Tuoi :";
		cin >> tuoi;
		cout << "Dia Chi : " ;
		cin >> diaChi;
		cout << "Gioi Tinh : " ;
		cin >> gioiTinh;
		
		cout << "SDT : " ;
		cin >> sdt;
		Person p(0, tuoi, ho, ten, diaChi, gioiTinh, sdt);
		ps[i] = p;
	}
}

void hienThi(Person* ps, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		ps[i].hienThi();
	}
}


int main() {
	Person* people;
	size_t N;
	cout << "Nhap so nguoi : (N > 0) ";
	cin >> N;

	// cap phat:
	people = new Person[N];

	// nhap du lieu:
	thongTinNguoi(people, N);

	// hien thi danh sach cac person len man hinh
	hienThi(people, N);

	return 0;
}