
#include "image.h"
#include "common.h"

bool CImage::isUsed[DX_TEXTURE_MAX];

//コンストラクタ
CImage::CImage()
{
	isLoaded = false;
}

CImage::CImage(const char path[]) :CImage()
{
	create(path);
}

//デストラクタ
CImage::~CImage()
{
	release();
}

//IDの生成
void CImage::create(const char path[], int tcolor)
{
	release();

	for (int i = 0; i < DX_TEXTURE_MAX; i++)
	{
		if (!isUsed[i])
		{
			id = i;
			MikanDraw->CreateTexture(id, path, tcolor);
			isLoaded = true;
			isUsed[i] = true;
			return;
		}
	}
}

void CImage::create(int width, int height)
{
	release();

	for (int i = 0; i < DX_TEXTURE_MAX; i++)
	{
		if (!isUsed[i])
		{
			id = i;
			MikanDraw->CreateTexture(id, width, height);
			isLoaded = true;
			isUsed[i] = true;
			return;
		}
	}
}

//IDの解除
void CImage::release()
{
	if (isLoaded)
	{
		MikanDraw->ReleaseTexture(id);
		isLoaded = false;
		isUsed[id] = false;
	}
}

//IDの取得
int CImage::getId()
{
	return id;
}


/*END*/
