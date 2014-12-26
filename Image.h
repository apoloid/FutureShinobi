/*
	�摜��ID�Ǘ����s���Ƃ���
*/

//�C���N���[�h�K�[�h
#ifndef INCLUDE_IMAGE_H
#define INCLUDE_IMAGE_H

#include "common.h"

class CImage
{
public:	//�\�ɏo������
	/*�R���X�g���N�^�ƃf�X�g���N�^*/

	//�R���X�g���N�^
	CImage();
	CImage(const char path[]);

	//�f�X�g���N�^
	~CImage();

	/*�����o�֐�*/

	//ID�̐���
	void create(const char path[], int tcolor = TRC_NONE);
	void create(int width, int height);

	//ID�̉��
	void release();

	//ID�̎擾
	int getId();

	//����
	operator unsigned int()
	{
		return id;
	}

private:	//�B���Ă�������

	//���̉摜��ID���g���Ă��邩�ǂ���
	static bool isUsed[DX_TEXTURE_MAX];
	//ID
	unsigned int id;
	//���[�h���Ă��邩�ǂ���
	bool isLoaded;
};

#endif

/*END*/
