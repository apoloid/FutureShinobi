/*
	プレイヤーの動きに関するところ
*/

//インクルードガード
#ifndef INCLUDE_PLAYER_H

#define INCLUDE_PLAYER_H

class CPlayer
{
public:	//表に出すもの

	/*コンストラクタとデストラクタ*/

	//コンストラクタ
	CPlayer();
	//デストラクタ
	~CPlayer();

	/*メンバ変数・定数*/

	//方向
	enum DIRECTION
	{
		LEFT,
		RIGHT
	};

	/*メンバ関数*/

	//画像の読み込み
	void load();

	//画像の解放
	void release();

	//初期化
	void init(double initX,double initY,DIRECTION initD);

	//更新
	void update();

	//描画
	void draw();

private:	//隠しておくもの

	/*メンバ変数・定数*/

	//切り取る画像の大きさ
	const int TEXTURE_SIZE = 64;

	//位置座標
	double x, y;
	//速度
	double vx, vy;
	//キャラクターの大きさ
	int w, h;
	//画像座標
	int rx, ry;
	//画像サイズ
	int dw, dh;
	//画像に評する画像の拡大・縮小率
	double scale;
	//画面に表示する画像の大きさ
	int sw, sh;
	//画像の回転率
	double rad;
	//画像の座標調整
	int r_adjust;
	//画像のアニメーション番号
	int anim_number;
	//画像のアニメーションタイマー
	int anim_timer;
	//方向
	DIRECTION direction;

};

#endif

/*END*/
