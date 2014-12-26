
#include "image.h"
#include "common.h"

bool CImage::isUsed[DX_TEXTURE_MAX];

//�R���X�g���N�^
CImage::CImage()
{
	isLoaded = false;
}

CImage::CImage(const char path[]) :CImage()
{
	create(path);
}

//�f�X�g���N�^
CImage::~CImage()
{
	release();
}

//ID�̐���
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

//ID�̉���
void CImage::release()
{
	if (isLoaded)
	{
		MikanDraw->ReleaseTexture(id);
		isLoaded = false;
		isUsed[id] = false;
	}
}

//ID�̎擾
int CImage::getId()
{
	return id;
}


/*END*/
