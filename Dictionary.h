#pragma once
#include<iostream>
namespace IceCola {

	template<class K, class V>
	struct BSTNode
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
			BSTNode<K, V>* tmp = _data;
			BSTNode<K, V>* parent = _data;
			while (tmp)
			{
				if (key > tmp->_key)
				{
					parent = tmp;
					tmp = tmp->_right;
				}
				else if (key < tmp->_key)
				{
					parent = tmp;
					tmp = tmp->_left;
				}
				else
				{
					std::cout << key;
					return;
				}
			}

			if (key > parent->_key)
			{
				BSTNode<K, V>* newNode = new BSTNode<K, V>(key, value);
				parent->_right = newNode;
			}
			else
			{
				BSTNode<K, V>* newNode = new BSTNode<K, V>(key, value);
				parent->_left = newNode;
			}
		}

		V find(const K& key)
		{

			BSTNode<K, V>* cur = _data;
			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur->_value;
				}
			}
			std::cout << "word no found.\n";
			return V();
		}

	private:
		BSTNode<K, V>* _data;
	};
}
