//NGUYEN VIET BINH AN
//6251020032
//KTDTVTK62
#include<iostream>
#include<math.h>
// tong, hieu, tich, thuong, so sanh
using namespace std;
class Sophuc{
	private:
		double phanthuc, phanao;
	public:
		void nhap();
		void xuat();
		double modun();
		Sophuc congsp(Sophuc sp);
		Sophuc trusp(Sophuc sp);
		Sophuc nhansp(Sophuc sp);
		Sophuc chiasp(Sophuc sp);
		Sophuc sosanhsp(Sophuc sp);
};
void Sophuc::nhap(){
	cout<<"Nhap phan thuc: ";
	cin>>phanthuc;
	cout<<"Nhap phan ao: ";
	cin>>phanao;
}
void Sophuc::xuat(){
     if(phanao >= 0){
	cout<<phanthuc<<"+"<<phanao<<"i"<<endl;
}else{
    cout<<phanthuc<<phanao<<"i"<<endl;
    }
 }	
double Sophuc::modun(){
	double c= sqrt(this->phanthuc*this->phanthuc+this->phanao*this->phanao);
	return c; 
}
Sophuc Sophuc::congsp(Sophuc sp){
	Sophuc t;
	t.phanthuc = this->phanthuc+sp.phanthuc;
	t.phanao = this->phanao+sp.phanao;
	return t;
}
Sophuc Sophuc::trusp(Sophuc sp){
	Sophuc t;
	t.phanthuc = this->phanthuc-sp.phanthuc;
	t.phanao = this->phanao-sp.phanao;
	return t;
}
Sophuc Sophuc::nhansp(Sophuc sp){
	Sophuc t;
	t.phanthuc = this->phanthuc*sp.phanthuc - this->phanao*sp.phanao;
	t.phanao = this->phanthuc*sp.phanao+this->phanao*sp.phanthuc;
	return t;
}
Sophuc Sophuc::chiasp(Sophuc sp){

	Sophuc t;

	t.phanthuc = (this->phanthuc*sp.phanthuc+this->phanao*sp.phanao)/(sp.phanthuc*sp.phanthuc+sp.phanao*sp.phanao);

	float f = t.phanthuc;

	t.phanao = (this->phanao*sp.phanthuc - this->phanthuc*sp.phanao)/(sp.phanthuc*sp.phanthuc+sp.phanao*sp.phanao);
	float g = t.phanao;
	return t;
}	

Sophuc Sophuc::sosanhsp(Sophuc sp){
	Sophuc sp1,sp2;
	if((this->phanthuc == sp.phanthuc) && (this->phanao == sp.phanao)){
		cout << "Hai so phuc bang nhau" << endl;
	}else if((this->phanthuc != sp.phanthuc) && (this->phanao != sp.phanao)){
		cout << "Hai so phuc khong bang nhau" << endl;
	}
}
int main(){
	Sophuc a,b,c;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	cout << "Modun so phuc a la: "<<endl;
	cout << a.modun();
	cout << "\nModun so phuc b la: "<<endl;
	cout << b.modun();
	cout << "\nSo sanh 2 so phuc " << endl;
	c = a.sosanhsp(b);
	cout << "Tong 2 so phuc la: "<<endl;
	c = a.congsp(b);
	c.xuat();
	cout << "Hieu 2 so phuc la: "<<endl;
	c = a.trusp(b);
	c.xuat();
	cout << "Tich 2 so phuc la: "<<endl;
	c = a.nhansp(b);
	c.xuat();
	cout <<"Thuong 2 so phuc la: "<<endl;
	c = a.chiasp(b);
	c.xuat();	
}

