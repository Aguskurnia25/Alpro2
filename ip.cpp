#include <iostream>
using namespae std;

float iswithinrange (float x)
{
 if (x >= 0.00 && x <= 4.00) 
{
  return true;
} else {
  return false;
  }
}

int main ()
{
float ip, ips, avg;
int jml_m = 0, jml_l = 0, jml_tl =0;


cout << "pendataan nilai ip mahasiswa" 
cout <<endl;
cout << "nilai ip harus diantara 0.00 - 4.00"
cout <<endl;

do {
 cout << "masukan ip mahasiswa : ";
 cout <<endl;
 cin >> ip;
  if(iswithinrange(ip)) {
   jml_m += 1;
    if (ip >=2.75) {
     ips += ip;
     jml_l += 1;
  } else {
     ips += ip;
     jml_tl += 1;
  }
}else{
}
}while( ip != -999); 
cout <<endl;

cout << "jumlah mahasiswa diinput         : " <<jml_m <<endl;
cout << "jumlah mahasiswa lulus           : " <<jml_l <<endl;
cout << "jumlah mahasiswa tidak lulus     : " <<jml_tl <<endl;
cout << "jumlah rata rata nilai mahasiswa : " <<ips/jml_m <<endl;

return 0;
}