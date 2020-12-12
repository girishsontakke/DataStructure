#include <iostream>

template <class t>
class Array
{
public:
  t *A;
  int size;
  int length;
  Array(){};
  void display();
};

int main()
{
  Array<int> a;
  std::cout << "Enter the size of array\n";
  std::cin >> a.size;
  a.A = new int[a.size];
  a.length = 0;

  int i;
  do{
    std::cout<<"Enter the number of elements\n";
    std::cin >>i;
  }while(i>a.size);

  std::cout<<"Enter the elements\n";
  for(int j=0;j<i; j++){
    std::cin>>a.A[j];
    a.length++;
  }
  a.display();
}

template<typename t>
void Array<t>::display(){
  for(int i=0; i<Array<t>::length; i++)
    std::cout<< Array<t>::A[i] << " ";
  std::cout<<"\n";
}
