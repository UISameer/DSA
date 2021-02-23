// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

// erase the 5th element in the vector
// vectorInts.erase(vectorInts.begin()+4);

// erase a range of elements in the vector
// vectorInts.erase(vectorInts.begin()+1, vectorInts.begin()+3);

int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;
  //creating an iterator for the vector
  std::vector<int>::iterator it;

  vectorInts.push_back(0);
  vectorInts.push_back(1);
  vectorInts.push_back(2);
  vectorInts.push_back(3);
  vectorInts.push_back(4);
  vectorInts.push_back(5);
  vectorInts.push_back(6);
  vectorInts.push_back(7);

  std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

  //printing the contents of vectorInts
  std::cout << "VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout << *it << " ";

  //clear the vector
  vectorInts.erase(vectorInts.begin() + 4);
  std::cout << "\nAfter clear, the vector has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout << *it << " ";

  return 0;
}

