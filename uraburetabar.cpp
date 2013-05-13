#include<iostream>
#include<limits>
//うらぶれたバーに入りますか？の処理

//バー内の処理
int uraburetabar(){
	int whatans;
	int menuans;
	int mysteryflag = 0;

	std::cout << "いらっしゃい。\n";
//while()
	std::cout << "なんか飲む？\n";
	std::cout << "はい(1)：いいえ(2)\n";
	for(std::cin >> whatans; !std::cin; std::cin >> whatans){
		std::cout << "数字で答えるのがこの店のルールだ。すまんがもう一回言ってくれ。\n";
		std::cin.clear();
		std::cin.ignore(INT_MAX,'\n');
	}
	if(whatans == 2){
		std::cout << "そうか。じゃあな。\n";
	}else if(whatans == 1){
		std::cout << "はいよ。\n";
		std::cout << "メニュー\n";
		std::cout << "1.バナナミルク:650G\n";
		std::cout << "2.ロイヤルミルクティー:750G\n";
		std::cout << "欲しい酒の番号を言ってくれ:";
		for(std::cin >> menuans; !std::cin; std::cin >> menuans){
			std::cout << "数字で選ぶのがこの店のルールだ。すまんがもう一回言ってくれ。\n";
			std::cin.clear();
			std::cin.ignore(INT_MAX,'\n');
		}
		if(menuans == 1){
			//所持金が650円減る処理
		}else if(menuans == 2){
			//所持金が750円減る処理
		}else if(menuans == 3){
			std::cout << "ん？何だ？\n";
			mysteryflag = 1;
		}else{
			//例外処理
			std::cout << "聞こえんな。もう一度言ってくれ。\n";
		}
		std::cout << "まいどあり！\n";
	}else{
		std::cout << "聞こえんな。もう一度言ってくれ。\n";
	}

//while end
	//うらぶれたバーへ
	if(mysteryflag == 1){
		std::cout << "あぁ、見つけちまったか。\n";
		std::cout << "よ・う・こ・そ。う・ら・ぶ・れ・たバーへ。\n";
	}
}
