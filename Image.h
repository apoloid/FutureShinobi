/*
	画像のID管理を行うところ
*/

//インクルードガード
#ifndef INCLUDE_IMAGE_H
#define INCLUDE_IMAGE_H

#include "common.h"

class CImage
{
public:	//表に出すもの
	/*コンストラクタとデストラクタ*/

	//コンストラクタ
	CImage();
	CImage(const char path[]);

	//デストラクタ
	~CImage();

	/*メンバ関数*/

	//IDの生成
	void create(const char path[], int tcolor = TRC_NONE);
	void create(int width, int height);

	//IDの解放
	void release();

	//IDの取得
	int getId();

	//操作
	operator unsigned int()
	{
		return id;
	}

private:	//隠しておくもの

	//その画像のIDが使われているかどうか
	static bool isUsed[DX_TEXTURE_MAX];
	//ID
	unsigned int id;
	//ロードしているかどうか
	bool isLoaded;
};

#endif

/*END*/
