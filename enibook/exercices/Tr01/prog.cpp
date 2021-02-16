#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "boundingBox.hpp"

void test_BoundingBox() {
	std::printf("----------%s()----------\n", __func__);

	Tr01::BoundingBox box1 = Tr01::make_BoundingBox(1,2);
	Tr01::BoundingBox box2 = Tr01::make_BoundingBox(3,4,1,2);

	std::string s1 = to_string(box1);
	std::string s2 = to_string(box2);

	std::printf("%s\n%s\n", s1.c_str(), s2.c_str());

	Tr01::BoundingBox box3 = box1+box2;

	std::string s3 = to_string(box3);
	std::printf("%s\n", s3.c_str());

	int x = 2;
	int y = 3;

	std::cout << contains(box3, x, y) << " \n";

	std::vector<Tr01::BoundingBox> v = {box1, box2, box3};

	v.push_back(Tr01::make_BoundingBox(5,10,6,6));

	while(!v.empty()) {
		std::cout << "Nombre elements : " << v.size() << " \n";
		for(const auto elem : v) {
			std::string s = Tr01::to_string(elem);
			std::printf("%s\n", s.c_str());
		}
		v.pop_back();
	}
}


int main(int argc, char const *argv[])
{
	test_BoundingBox();
	return 0;
}