#include"event1.h"
#include"eventIndex.h"

/*----------------------------------------------------
	説明	 :起こすイベントを設定するプログラム
	Class    :event
	function :event_map()
	引数	 :int place_number :位置情報の取得
	戻り値   :なし
-----------------------------------------------------*/
int event::event_map(int place_number)
{
	
	if(place_number == 0){
		std::cout << "行き止まりー\n";
	}else if(place_number == 6){
		std::cout << "お店屋さんプログラム\n"; //dummy
	}else if(place_number == 4){
		std::cout << "落とし穴に落ちた。\n";
	}else if(place_number == 9){
		std::cout << "ミルクバー\n";
		uraburetabar();
	}
}

