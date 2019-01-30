/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

#include "BinNode.h" //寮曞叆浜屽弶鏍戣妭鐐圭被
template <typename T> class BinTree { //浜屽弶鏍戞ā鏉跨被
protected:
   int _size; BinNodePosi(T) _root; //瑙勬ā銆佹牴鑺傜偣
   virtual int updateHeight ( BinNodePosi(T) x ); //鏇存柊鑺傜偣x鐨勯珮搴?
   void updateHeightAbove ( BinNodePosi(T) x ); //鏇存柊鑺傜偣x鍙婂叾绁栧厛鐨勯珮搴?
public:
   BinTree() : _size ( 0 ), _root ( NULL ) { } //鏋勯€犲嚱鏁?
   ~BinTree() { if ( 0 < _size ) remove ( _root ); } //鏋愭瀯鍑芥暟
   int size() const { return _size; } //瑙勬ā
   bool empty() const { return !_root; } //鍒ょ┖
   BinNodePosi(T) root() const { return _root; } //鏍戞牴
   BinNodePosi(T) insertAsRoot ( T const& e ); //鎻掑叆鏍硅妭鐐?
   BinNodePosi(T) insertAsLC ( BinNodePosi(T) x, T const& e ); //e浣滀负x鐨勫乏瀛╁瓙锛堝師鏃狅級鎻掑叆
   BinNodePosi(T) insertAsRC ( BinNodePosi(T) x, T const& e ); //e浣滀负x鐨勫彸瀛╁瓙锛堝師鏃狅級鎻掑叆
   BinNodePosi(T) attachAsLC ( BinNodePosi(T) x, BinTree<T>* &T ); //T浣滀负x宸﹀瓙鏍戞帴鍏?
   BinNodePosi(T) attachAsRC ( BinNodePosi(T) x, BinTree<T>* &T ); //T浣滀负x鍙冲瓙鏍戞帴鍏?
   int remove ( BinNodePosi(T) x ); //鍒犻櫎浠ヤ綅缃畑澶勮妭鐐逛负鏍圭殑瀛愭爲锛岃繑鍥炶瀛愭爲鍘熷厛鐨勮妯?
   BinTree<T>* secede ( BinNodePosi(T) x ); //灏嗗瓙鏍憍浠庡綋鍓嶆爲涓憳闄わ紝骞跺皢鍏惰浆鎹负涓€妫电嫭绔嬪瓙鏍?
   template <typename VST> //鎿嶄綔鍣?
   void travLevel ( VST& visit ) { if ( _root ) _root->travLevel ( visit ); } //灞傛閬嶅巻
   template <typename VST> //鎿嶄綔鍣?
   void travPre ( VST& visit ) { if ( _root ) _root->travPre ( visit ); } //鍏堝簭閬嶅巻
   template <typename VST> //鎿嶄綔鍣?
   void travIn ( VST& visit ) { if ( _root ) _root->travIn ( visit ); } //涓簭閬嶅巻
   template <typename VST> //鎿嶄綔鍣?
   void travPost ( VST& visit ) { if ( _root ) _root->travPost ( visit ); } //鍚庡簭閬嶅巻
   bool operator< ( BinTree<T> const& t ) //姣旇緝鍣紙鍏朵綑鑷琛ュ厖锛?
   { return _root && t._root && lt ( _root, t._root ); }
   bool operator== ( BinTree<T> const& t ) //鍒ょ瓑鍣?
   { return _root && t._root && ( _root == t._root ); }
   /*DSA*/
   /*DSA*/void stretchToLPath() { stretchByZag ( _root ); } //鍊熷姪zag鏃嬭浆锛岃浆鍖栦负宸﹀悜鍗曢摼
   /*DSA*/void stretchToRPath() { stretchByZig ( _root, _size ); } //鍊熷姪zig鏃嬭浆锛岃浆鍖栦负鍙冲悜鍗曢摼
}; //BinTree

#include "BinTree_implementation.h"