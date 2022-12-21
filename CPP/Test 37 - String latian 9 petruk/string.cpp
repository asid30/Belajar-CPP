//1. Buatlah sebuah program untuk membalik urutan kata dalam sebuah kalimat menjadi terbalik
//Hint:
//Terdapat 2 proses reverse, reverse untuk kalimat secara keseluruhan, dan reverse untuk huruf setiap kata
//For example:
//Test	Input	Result
//coba dibalik
//coba dibalik
//dibalik coba

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
    char str [100];
    cin.getline(str, 100);
    
    int i;
    int n = strlen(str);
    for(i = n - 1; i >= -1; i--){
        if(str[i] == ' ' || i < 0){
            int j = i;
            while(j + 1 < n){
                cout << str[j + 1];
                j++;
            }
            
            n = n - (n - i);
            cout << " ";
        }
    }
    
    return 0;
}




//2. Buatlah program berisi class bernama CnA (Confess and Answer) yang dapat mengolah kalimat confess menjadi jawaban dari confess. Baik kalimat confess dan kata kunci dari jawaban confess merupakan masukan dari pengguna (mis. kalimat confess : “aku suka kamu” dan kata kunci jawaban confess : “juga”).
//Ketentuan:
//1. Class memiliki dua atribut string, yaitu string statement sebagai kalimat confess dan string answer sebagai kata kunci untuk jawaban confess.
//Petunjuk
//Eksplorasi fungsi insert()
//Masukan untuk kata kunci dari jawaban confess harus ditambahkan spasi di akhir
//Constraint Output
//Baris pertama merupakan kalimat confess yang Anda masukkan
//Baris kedua merupakan hasil manipulasi dari kalimat confess yang Anda masukkan, berupa jawaban daripada kalimat confess itu sendiri.

#include <iostream>
using namespace std;

class CnA{
	
	private:
	string statement;
	string answer;
	
	public:
	void setStatement(string statement){
		this->statement=statement;
	}
	
	string getStatement(){
		return this->statement;
	}
	
	void setAnswer(string answer){
		this->answer=answer;
	}
	
	string getAnswer(){
		this ->answer.insert(answer.end(),' ');
		statement.insert(4,answer);
		return statement;
	}
	
};

int main(){
	
	CnA cna1;
	string statement;
	string answer;
	
	getline(cin,statement);
	getline(cin,answer);
	
	cna1.setStatement(statement);
	cna1.setAnswer(answer);
	cout<<cna1.getStatement()<<endl;
	cout<<cna1.getAnswer();
	
	return 0;
}



//3. Buatlah sebuah fungsi bernama singkatinDund yang mencetak huruf pertama, 
//jumlah huruf antara huruf pertama dan terakhir (Termasuk spasi), serta huruf terakhir.

void singkatinDund(string word){
	cout << word.at(0);
	cout << word.size()-2;
	cout << word.at(word.size()-1);
}
