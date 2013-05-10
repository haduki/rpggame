#ifndef __PLAYER1_H_INCLUDE__
#define __PLAYER1_H_INCLUDE__

#include<iostream>

//主人公のデータ
class player
{
	private:
		std::string name;	//主人公の名前
		int xplace,yplace;  //主人公の位置情報(x,y)
		int cash;			//所持金
		int HP;				//HP
	public:
		player(int xcoordinate,int ycoordinate);
		int move();		//移動関数
		int money();	//所持金を計算する関数
};


#endif
