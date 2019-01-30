/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

#define BinNodePosi(T) BinNode<T>* //鑺傜偣浣嶇疆
#define stature(p) ((p) ? (p)->height : -1) //鑺傜偣楂樺害锛堜笌鈥滅┖鏍戦珮搴︿负-1鈥濈殑绾﹀畾鐩哥粺涓€锛?
typedef enum { RB_RED, RB_BLACK} RBColor; //鑺傜偣棰滆壊

template <typename T> struct BinNode { //浜屽弶鏍戣妭鐐规ā鏉跨被
// 鎴愬憳锛堜负绠€鍖栨弿杩拌捣瑙佺粺涓€寮€鏀撅紝璇昏€呭彲鏍规嵁闇€瑕佽繘涓€姝ュ皝瑁咃級
   T data; //鏁板€?
   BinNodePosi(T) parent; BinNodePosi(T) lc; BinNodePosi(T) rc; //鐖惰妭鐐瑰強宸︺€佸彸瀛╁瓙
   int height; //楂樺害锛堥€氱敤锛?
   int npl; //Null Path Length锛堝乏寮忓爢锛屼篃鍙洿鎺ョ敤height浠ｆ浛锛?
   RBColor color; //棰滆壊锛堢孩榛戞爲锛?
// 鏋勯€犲嚱鏁?
   BinNode() :
      parent ( NULL ), lc ( NULL ), rc ( NULL ), height ( 0 ), npl ( 1 ), color ( RB_RED ) { }
   BinNode ( T e, BinNodePosi(T) p = NULL, BinNodePosi(T) lc = NULL, BinNodePosi(T) rc = NULL,
             int h = 0, int l = 1, RBColor c = RB_RED ) :
      data ( e ), parent ( p ), lc ( lc ), rc ( rc ), height ( h ), npl ( l ), color ( c ) { }
// 鎿嶄綔鎺ュ彛
   int size(); //缁熻褰撳墠鑺傜偣鍚庝唬鎬绘暟锛屼害鍗充互鍏朵负鏍圭殑瀛愭爲鐨勮妯?
   BinNodePosi(T) insertAsLC ( T const& ); //浣滀负褰撳墠鑺傜偣鐨勫乏瀛╁瓙鎻掑叆鏂拌妭鐐?
   BinNodePosi(T) insertAsRC ( T const& ); //浣滀负褰撳墠鑺傜偣鐨勫彸瀛╁瓙鎻掑叆鏂拌妭鐐?
   BinNodePosi(T) succ(); //鍙栧綋鍓嶈妭鐐圭殑鐩存帴鍚庣户
   template <typename VST> void travLevel ( VST& ); //瀛愭爲灞傛閬嶅巻
   template <typename VST> void travPre ( VST& ); //瀛愭爲鍏堝簭閬嶅巻
   template <typename VST> void travIn ( VST& ); //瀛愭爲涓簭閬嶅巻
   template <typename VST> void travPost ( VST& ); //瀛愭爲鍚庡簭閬嶅巻
// 姣旇緝鍣ㄣ€佸垽绛夊櫒锛堝悇鍒楀叾涓€锛屽叾浣欒嚜琛岃ˉ鍏咃級
   bool operator< ( BinNode const& bn ) { return data < bn.data; } //灏忎簬
   bool operator== ( BinNode const& bn ) { return data == bn.data; } //绛変簬
   /*DSA*/
   /*DSA*/BinNodePosi(T) zig(); //椤烘椂閽堟棆杞?
   /*DSA*/BinNodePosi(T) zag(); //閫嗘椂閽堟棆杞?
};

#include "BinNode_implementation.h"