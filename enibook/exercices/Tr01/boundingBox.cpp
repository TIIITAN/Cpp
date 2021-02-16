#include "boundingBox.hpp"
#include <stdexcept>
#include <algorithm>
#include <string>

namespace Tr01 {

	BoundingBox make_BoundingBox(int x, int y, int w, int h) {
		if((w<0)||(h<0)){
    		throw std::runtime_error{"dimensions should not be negative"};
  		}
		BoundingBox result{x,y,w,h};
		return result;
	}

	std::string to_string(BoundingBox box) {
		std::string res;

		res.append("BoundingBox{ x=");
		res.append(std::to_string(box.x));
		res.append(", y=");
		res.append(std::to_string(box.y));
		res.append(", w=");
		res.append(std::to_string(box.w));
		res.append(", h=");
		res.append(std::to_string(box.h));
		res.append("}");

		return res;
	}

	BoundingBox operator+(BoundingBox b1, BoundingBox b2) {
		int x = std::min(b1.x, b2.x);
		int y = std::min(b1.y, b2.y);
		int m = std::max(b1.x+b1.w, b2.x+b2.w);
		int n = std::max(b1.y+b1.h, b2.y+b2.h);
		int w = m-x;
		int h = n-y;
		return make_BoundingBox(x,y,w,h);
	}
}