////////#include <iostream>
////////#include <vector>
////////using namespace std;
////////
////////typedef int (FUNC_TYPE)(int, int);
////////using FUNC_TYPE2 = int(int, int);
////////
////////int Add(int a, int b) {
////////	return a + b;
////////}
////////
////////class Item {
////////
////////public:
////////	Item()
////////		: m_itemid(0)
////////		, m_rarity(0)
////////		, m_userid(0)
////////	{ }
////////
////////public:
////////	int m_itemid;
////////	int m_rarity;
////////	int m_userid;
////////
////////};
////////
////////bool IsRareitem(Item* _item) {
////////
////////	return _item->m_rarity >= 2;
////////}
////////
////////bool IsUseritem(Item* _item, int _userid) {
////////
////////	return _item->m_userid = _userid;
////////}
////////
////////typedef bool(Selector)(Item*, int);
////////
////////Item* Finditem(Item _items[], int _itemcnt, Selector* _select) {
////////
////////	for (int i = 0; i < _itemcnt; ++i) {
////////
////////		Item* item = &_items[i];
////////		//if (item->m_itemid == _itemid)
////////		if (_select(item, 5))
////////			return item;
////////	}
////////	return nullptr;
////////}
////////
////////int main() {
////////
////////	Item items[5] = { };
////////	items[1].m_rarity = 3;
////////	items[2].m_rarity = 5;
////////	Item* find = Finditem(items, 5, IsUseritem);
////////
////////	//cout << Add(1, 2) << endl;
////////	//cout << Add;
////////	//int a;
////////	//int b;
////////	//FUNC_TYPE* t;
////////	//t = Add;
////////	//int result = t(1, 2);
////////	//int result2 = (*t)(1, 2);
////////	//t(3, 4);
////////	//int test = 0;
////////}
//////
//////#include <iostream>;
//////using namespace std;
//////
////////class Functor {
////////public:
////////	void perator()() {
////////
////////		cout << "함수 객체" << endl;
////////	}
////////public :
////////	int m_val = 0;
////////};
//////
//////class Item {
//////
//////public:
//////	Item()
//////		: m_itemid(0)
//////		, m_rarity(0)
//////		, m_userid(0)
//////	{ };
//////
//////	void Upgrade(int _val) {
//////
//////		m_rarity += 1;
//////	}
//////
//////public:
//////	int m_itemid;
//////	int m_rarity;
//////	int m_userid;
//////
//////};
//////
//////typedef void(Item::* TEST_FUNC)();
//////
//////int main() {
//////
//////	//TEST_FUNC* fn;
//////	////fn = &Item::Test;
//////	//Item i1;
//////	//(i1.*fn)();
//////	//Item* i2 = new Item;
//////	//(*(i2).*fn());
//////	//(i2->*fn)();
//////}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//enum class ItemType
//{
//	None,
//	Weapon,
//	Armor
//};
//
//class IsWeapon {
//
//public :
//
//	bool operator()(Item& _item)
//};
//
////람다 표현식
//// [] () {}
//
//class Item {
//
//public:
//	Item(int _itemid, int _rarity, ItemType _type)
//		: m_itemid(_itemid)
//		, m_rarity(_rarity)
//		, m_type(_type)
//	{ };
//
//	void Upgrade(int _val) {
//
//		m_rarity += 1;
//	}
//
//public:
//	int m_itemid;
//	int m_rarity;
//	ItemType m_type;
//
//};
//
//int main() {
//
//	vector<Item> v;
//	v.push_back(Item(1, 1, ItemType::None));
//	
//}