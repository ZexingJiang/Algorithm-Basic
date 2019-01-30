/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#define HeightUpdated(x) /*楂樺害鏇存柊甯歌鏉′欢*/ \
/*DSA*/        ( (x).height == 1 + max( stature( (x).lc ), stature( (x).rc ) ) )
#define Balanced(x) ( stature( (x).lc ) == stature( (x).rc ) ) //鐞嗘兂骞宠　鏉′欢
#define BalFac(x) ( stature( (x).lc ) - stature( (x).rc ) ) //骞宠　鍥犲瓙
#define AvlBalanced(x) ( ( -2 < BalFac(x) ) && ( BalFac(x) < 2 ) ) //AVL骞宠　鏉′欢
