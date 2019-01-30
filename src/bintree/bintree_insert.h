/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> BinNodePosi(T) BinTree<T>::insertAsRoot ( T const& e )
{ _size = 1; return _root = new BinNode<T> ( e ); } //灏唀褰撲綔鏍硅妭鐐规彃鍏ョ┖鐨勪簩鍙夋爲

template <typename T> BinNodePosi(T) BinTree<T>::insertAsLC ( BinNodePosi(T) x, T const& e )
{ _size++; x->insertAsLC ( e ); updateHeightAbove ( x ); return x->lc; } //e鎻掑叆涓簒鐨勫乏瀛╁瓙

template <typename T> BinNodePosi(T) BinTree<T>::insertAsRC ( BinNodePosi(T) x, T const& e )
{ _size++; x->insertAsRC ( e ); updateHeightAbove ( x ); return x->rc; } //e鎻掑叆涓簒鐨勫彸瀛╁瓙
