#include<limits>
#include"gameConfig.h"
#include"player1.h"

//主人公の位置情報の初期化
player::player(int xcoordinate,int ycoordinate)
{
	xplace = xcoordinate;
	yplace = ycoordinate;
}

/*----------------------------------------------------
	説明	 :主人公が移動する関数
	Class    :player
	function :move()
	引数	 :なし
	戻り値   :int place_number  :主人公の位置情報を返す
 -----------------------------------------------------*/
int player::move()
{
	char oper_char;			//主人公の進む方向
	int place_number;		//主人公が進んだ位置とイベント情報
	int place_number_stop;	//なんらかの原因で進めなかった場合の主人公の位置
	int place_flag = 1;		//hjkl以外を入力された場合の対策用
	int x,y;
	
	std::cout << "\nどこに行く？:";
	std::cout << "k↑:j↓:h←:l→\n";
	std::cin >> oper_char;

	//event check 0をあぶり出せ！！
	while(place_flag == 1){
		if(oper_char == 'k') {
			place_number = field_map[xplace-1][yplace],		//上キー
			place_number_stop = field_map[xplace][yplace];	//0対策
			place_flag = 0;									//指定されたキーが入力されたら終了。
		}else if(oper_char == 'j'){
			place_number = field_map[xplace+1][yplace],		//下キー
			place_number_stop = field_map[xplace][yplace];
			place_flag = 0;
		}else if(oper_char == 'h'){
			place_number = field_map[xplace][yplace-1],		//左キー
			place_number_stop = field_map[xplace][yplace];
			place_flag = 0;
		}else if(oper_char == 'l'){
			place_number = field_map[xplace][yplace+1],		//右キー
			place_number_stop = field_map[xplace][yplace];
			place_flag = 0;
		}else{
		//hjkl以外の方向が示された場合に、方向を聞き直す処理。
			place_number_stop = field_map[xplace][yplace];
	    	std::cin.clear();
			std::cin.ignore(INT_MAX,'\n');

			std::cout<<"どっちに進めばいいか分からないよ〜。k↑:j↓:h←:l→:";
			std::cin >> oper_char;
		}
	}
	//0:待機 else:進む
	if(place_number == 0){
		std::cout << "xplace=" << xplace << ",yplace=" << yplace << ",place=" << place_number << '\n';
		//map内の表示 0は正しく現在位置の表示ができないため、別処理になる。
		std::cout << "map内の表示\n";
		for(x = 0; x < XMAP; x++){
			for(y = 0; y < YMAP; y++){
				if(place_number_stop == field_map[x][y]){
					std::cout << "●" << ',';
				}else{
					std::cout << field_map[x][y] << ',';
				}
			}
			std::cout << '\n';
		}
		std::cout << '\n';
		return place_number;
	}else{
		//位置情報の保存
		if(oper_char == 'k'){
			xplace = xplace - 1;
			yplace = yplace;
		}else if(oper_char == 'j'){
			xplace = xplace + 1;
			yplace = yplace;
		}else if(oper_char == 'h'){
			xplace = xplace;
			yplace = yplace - 1;
		}else if(oper_char == 'l'){
			xplace = xplace;
			yplace = yplace + 1;
		}else{
			std::cout<<"何もしません。\n";
			//ここが表示されることがないよう祈る。
		}
	}
	std::cout << "xplace=" << xplace << ",yplace=" << yplace << ",place=" << place_number << '\n';
	//map表示
	std::cout << "map内の表示\n";
	for(x = 0; x < XMAP; x++){
		for(y = 0; y < YMAP; y++){
			if(place_number == field_map[x][y]){
				std::cout << "●" << ',';
			}else{
				std::cout << field_map[x][y] << ',';
			}
		}
		std::cout<<'\n';
	}
	std::cout<<'\n';
	return place_number;
}

//所持金を計算する関数
int player::money()
{
	return 0;
}
