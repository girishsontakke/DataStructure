#include <iostream>

template <class t>
class Array
{
public:
  t *A;
  int size = 0;
  int length = 0;
  Array(){};
  void display();
  void append(t value);
  void insert(t index, t value);
};

int main()
{
  Array<int> a;
  std::cout << "Enter the size of array\n";
  std::cin >> a.size;
  a.A = new int[a.size];
  int i;

  do
  {
    std::cout << "Enter the number of elements\n";
    std::cin >> i;
  } while (i > a.size);

  std::cout << "Enter the elements\n";
  for (int j = 0; j < i; j++)
  {
    std::cin >> a.A[j];
    a.length++;
  }
  a.insert(0, 1);
  a.display();
}

template <typename t>
void Array<t>::display()
{
  for (int i = 0; i < Array<t>::length; i++)
    std::cout << Array<t>::A[i] << " ";
  std::cout << "\n";
}

template <typename t>
void Array<t>::append(t value)
{
  if (Array<t>::length < Array<t>::size)
  {
    Array<t>::A[Array<t>::length++] = value;
  }
  else
  {
    (Array<t>::size == 0) ? Array<t>::size = 1 : Array<t>::size *= 2;
    t *B = new int[Array<t>::size];
    for (int i = 0; i < Array<t>::length; i++)
    {
      B[i] = A[i];
    }
    B[Array<t>::length++] = value;
    Array<t>::A = B;
  }
}

template <typename t>
void Array<t>::insert(t index, t value)
{
  if (index < 0 || index > Array<t>::length)
    return;
  if (Array<t>::length < Array<t>::size)
  {
    for (int i = Array<t>::length; i > index; i--)
      Array<t>::A[i] = Array<t>::A[i - 1];
    Array<t>::A[index] = value;
    length++;
  }
  else
  {
    (Array<t>::size == 0) ? Array<t>::size = 1 : Array<t>::size *= 2;
    t *B = new int[Array<t>::size];
    for (int i = 0; i < Array<t>::length; i++)
    {
      B[i] = A[i];
    }
    Array<t>::A = B;
    for (int i = Array<t>::length; i > index; i--)
      Array<t>::A[i] = Array<t>::A[i - 1];
    Array<t>::A[index] = value;
    length++;
  }
}