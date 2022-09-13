#pragma once
#include<fstream>
#include<string>
namespace IceCola {

	template<class K, class V>
	class BSTNode
	{
		BSTNode(const K& key, const V& value):_left(nullptr),_right(nullptr),_key(key),_value(value) {}
		BSTNode<K, V>* _left;
		BSTNode<K, V>* _right;
		K _key;
		V _value;
	};


	//KY binary search tree 
	template<class K, class V>
	class Dict
	{
	public:
		Dict(){
			////kitchen      n.厨房
			_data = new BSTNode<K, V>("kitchen", "n.厨房");
			
		}

		void Add(const K& key, const V& value)
		{
			std::ifstream ifs("treeNode");
		}

		V find(const K& key)
		{

		}

	private:
		BSTNode<K, V>* _data;
	};
}
