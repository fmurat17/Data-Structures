										################################################
											!!!!!!!!!!-------Pair--------!!!!!!!!!!
										################################################
	
#include <utility>
	
pair<int,char> p;
p.first = 5;
p.second = 'G';

pair p1(1,'a');
pair<int,char> p1(1,'a');

pair p2(p1);
pair<int,char> p2(p1);

---make_pair()---

	pair p = make_pair("Fatih", 23.5);

---swap()---

	p1.swap(p2);
	