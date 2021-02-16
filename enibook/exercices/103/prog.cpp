#include <iostream>
#include <string>
#include <vector>

void
test_reverse()
{
  std::cout << "\n~~~~ " << __func__ << "() ~~~~\n";
  
  std::vector<std::string> v1 = {"uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto"};

  std::vector<std::string> v2;

  while(!v1.empty()) {
  	v2.push_back(v1.back());
  	v1.pop_back();
  }

  std::cout << "v2 : ";
  for(const auto elem : v2) {
  	std::cout << elem << " ";
  }
  std::cout << '\n';
}

void
test_balance()
{
  std::cout << "\n~~~~ " << __func__ << "() ~~~~\n";
  
  std::vector<std::string> v1 = {"one", "two", "three", "four", "five", "six", "seven", "eight"};

  std::vector<std::string> v2;

  while(v1.size()>v2.size()) {
  	v2.push_back(v1.back());
  	v1.pop_back();
  }

  std::cout << "v1 : ";
  for(const auto elem : v1) {
  	std::cout << elem << " ";
  }
  std::cout << '\n';
  std::cout << "v2 : ";
  for(const auto elem : v2) {
  	std::cout << elem << " ";
  }
  std::cout << '\n';
}

void
test_merge()
{
  std::cout << "\n~~~~ " << __func__ << "() ~~~~\n";
  
  std::vector<std::string> v1 = {"five", "four", "three", "two", "one"};

  std::vector<std::string> v2 = {"cinque", "quattro", "tre", "due", "uno"};

  std::vector<std::string> v3;

  while((!v1.empty())&&(!v2.empty())) {
  	v3.push_back(v1.back().append("/").append(v2.back()));
  	v1.pop_back();
  	v2.pop_back();
  }

  std::cout << "v3 : ";
  for(const auto elem : v3) {
  	std::cout << elem << " ";
  }
  std::cout << '\n';

}

int main(int argc, char const *argv[])
{
	test_reverse();
	test_balance();
	test_merge();
	return 0;
}