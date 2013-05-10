#include<iostream>
#include"event1.h"
#include"player1.h"

int main()
{
	int place;	//主人公の位置
	int i=0;	//test用

	player chara(2,2);	//主人公の初期位置
	event map;
	while(i < 20){
		place = chara.move();
		//placeの番号によってイベントを変更する。
		map.event_map(place);	
	i++;
	}
	return(0);
}

