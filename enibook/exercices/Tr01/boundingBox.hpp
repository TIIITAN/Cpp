#ifndef BOUNDINGBOX_HPP
#define BOUNDINGBOX_HPP

#include <string>

namespace Tr01 {

	struct BoundingBox {
		int x,y,w,h;
	};

	static_assert(sizeof(BoundingBox)<=16,
              "BoundingBox is too large");

	BoundingBox make_BoundingBox(int, int, int =0, int =0);

	std::string to_string(BoundingBox);

	inline bool contains(BoundingBox box, int x1, int y1) {
		return(box.x<x1)&&(x1<box.x+box.w)&&(box.y<y1)&&(y1<box.y+box.h);
	}

	inline bool contains(BoundingBox box1, BoundingBox box2, int x1, int y1) {
		return contains(box1, box2.x, box2.y)&&contains(box1, box2.x+box2.w, box2.y+box2.h);
	}

	BoundingBox operator+(BoundingBox b1, BoundingBox b2);
}

#endif