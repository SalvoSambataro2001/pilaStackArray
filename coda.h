using namespace std;
#include <iostream>

template <class T>
class Coda{
	private:
		int numEl;
		int numElMax;
		T *head , *tail  , *array;

	public:
		Coda(int numElMax) : numElMax(numElMax) , numEl(0) {
			array=new T[numElMax];
			head=&array[0];
			tail=head;
		}

		void enqueue (T element){
			if(numEl<numElMax){
				if(numEl==0)
					*tail=element;
				else{
					tail=tail+1;
					*tail=element;
				}
				numEl++;
				cout<<"Inserimento dell'elemento "<<element<<" alla fine della coda effettuato!"<<endl;
			}
			else
				cout<<"Coda piena! Cambia posta..."<<endl;
		}

		T dequeue (){
			if(numEl>0){
				T temp = array[0];
				for (int i = 0; i < numEl-1; i++)
				    array[i] = array[i + 1];
				numEl--;
				tail=tail-1;
				cout<<"Primo elemento in coda servito!"<<endl;
				return temp;
			}
			else{
				cout<<"Coda vuota! "<<endl;
				return 0;
			}
		}

		int getNumEl() { return numEl;}
		T getElIndex(int index) {return array[index];}

		friend ostream &operator << (ostream &out , Coda<T> &c){
			out<<"Elementi della coda:"<<endl;
			for(int i=0 ; i<c.getNumEl() ; i++){
				out<<i+1<<"o el : "<<c.getElIndex(i)<<endl;
			}
			return out;
		}
};