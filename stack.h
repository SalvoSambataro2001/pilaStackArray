using namespace std;
#include <iostream>

template <class T>
class Stack{
	private:
		T* top;
		T* array;
		int numEl;
		int numElMax;

	public:
		Stack(int numElMax): numEl(0) , numElMax (numElMax) {
			array= new T [numElMax];
			top = &array[0];
		}

		void push (T element){
			if(numEl<numElMax){
				*top=element;
				top=&array[numEl+1];
				numEl++;
				cout<<"Inserimento dell'elemento "<<element<<" in cima allo stack effettuato!"<<endl;
			}
			else{
				cout<<"Stack pieno!"<<endl;
			}
		}

		T pop()
		{
			if(numEl>0){
				cout<<"Estrazione dell'elemento in cima allo stack effettuato! "<<endl;
				*top=0;
				top=&array[numEl-1];
				numEl--;
				return *top;
			}
			else{
				cout<<"Stack vuoto!"<<endl;
				return 0;
			}
		}

		int getNumEl () { return numEl;}

		T getElIndex(int index) {return array[index];}

		friend ostream &operator << (ostream &out , Stack<T> &s){
			out<<"Elementi dello stack(da fondo a cima):"<<endl;
			for(int i=0 ; i<s.getNumEl() ; i++){
				out<<i+1<<"o el : "<<s.getElIndex(i)<<endl;
			}
			return out;
		}
};