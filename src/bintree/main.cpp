/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#include "binTree_test.h"

int testID = 0; //娴嬭瘯缂栧彿

// 闅忔満鐢熸垚鏈熸湜楂樺害涓篽鐨勪簩鍙夋爲
template <typename T> bool randomBinTree ( BinTree<T> & bt, BinNodePosi(T) x, int h ) {
   if ( 0 >= h ) return false; //鑷冲h灞?
   if ( 0 < dice ( h ) ) //浠?/h鐨勬鐜囩粓姝㈠綋鍓嶅垎鏀殑鐢熼暱
      randomBinTree ( bt, bt.insertAsLC ( x, dice ( ( T ) h * h * h ) ), h - 1 );
   if ( 0 < dice ( h ) ) //浠?/h鐨勬鐜囩粓姝㈠綋鍓嶅垎鏀殑鐢熼暱
      randomBinTree ( bt, bt.insertAsRC ( x, dice ( ( T ) h * h * h ) ), h - 1 );
   return true;
}

// 鍦ㄤ簩鍙夋爲涓殢鏈虹‘瀹氫竴涓妭鐐逛綅缃?
template <typename T> BinNodePosi(T) randomPosiInBinTree ( BinNodePosi(T) root ) {
   if ( !HasChild ( *root ) ) return root;
   if ( !HasLChild ( *root ) )
      return dice ( 6 ) ? randomPosiInBinTree ( root->rc ) : root;
   if ( !HasRChild ( *root ) )
      return dice ( 6 ) ? randomPosiInBinTree ( root->lc ) : root;
   return dice ( 2 ) ?
          randomPosiInBinTree ( root->lc ) :
          randomPosiInBinTree ( root->rc ) ;
}

template <typename T> void   testBinTree ( int h ) { //娴嬭瘯浜屽弶鏍?
   printf ( "\n  ==== Test %2d. Generate a binTree of height <= %d \n", testID++, h );
   BinTree<T> bt; print ( bt );
   bt.insertAsRoot ( dice ( ( T ) h * h * h ) ); print ( bt );
   randomBinTree<T> ( bt, bt.root(), h ); print ( bt );
   printf ( "\n  ==== Test %2d. Double and increase all nodes by traversal\n", testID++ );
   bt.travPre ( Double<T>() ); bt.travPre ( Increase<T>() ); print ( bt );
   bt.travIn ( Double<T>() ); bt.travIn ( Increase<T>() ); print ( bt );
   bt.travPost ( Double<T>() ); bt.travPost ( Increase<T>() ); print ( bt );
   bt.travLevel ( Double<T>() ); bt.travLevel ( Increase<T>() ); print ( bt );
   Hailstone<T> he; bt.travIn ( he ); print ( bt );
   printf ( "\n  ==== Test %2d. Remove/release subtrees in the Tree\n", testID++ );
   while ( !bt.empty() ) {
      BinNodePosi(T) p = randomPosiInBinTree ( bt.root() ); //闅忔満閫夋嫨涓€涓妭鐐?
      if ( dice ( 2 ) ) {
         printf ( "removing " ); print ( p->data ); printf ( " ...\n" );
         printf ( "%d node(s) removed\n", bt.remove ( p ) ); print ( bt );
      } else {
         printf ( "releasing " ); print ( p->data ); printf ( " ...\n" );
         BinTree<T>* S = bt.secede ( p ); print ( S );
         printf ( "%d node(s) released\n", S->size() ); release ( S ); print ( bt );
      }
   }
}

int main ( int argc, char* argv[] ) { //娴嬭瘯浜屽弶鏍?
   if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand ( ( unsigned int ) time ( NULL ) );
   testBinTree<int> ( atoi ( argv[1] ) ); //鍏冪礌绫诲瀷鍙互鍦ㄨ繖閲屼换鎰忛€夋嫨
   return 0;
}