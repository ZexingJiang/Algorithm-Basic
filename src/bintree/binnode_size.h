/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> int BinNode<T>::size() { //缁熻褰撳墠鑺傜偣鍚庝唬鎬绘暟锛屽嵆浠ュ叾涓烘牴鐨勫瓙鏍戣妯?
   int s = 1; //璁″叆鏈韩
   if ( lc ) s += lc->size(); //閫掑綊璁″叆宸﹀瓙鏍戣妯?
   if ( rc ) s += rc->size(); //閫掑綊璁″叆鍙冲瓙鏍戣妯?
   return s;
}