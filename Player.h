/*
	�v���C���[�̓����Ɋւ���Ƃ���
*/

//�C���N���[�h�K�[�h
#ifndef INCLUDE_PLAYER_H

#define INCLUDE_PLAYER_H

class CPlayer
{
public:	//�\�ɏo������

	/*�R���X�g���N�^�ƃf�X�g���N�^*/

	//�R���X�g���N�^
	CPlayer();
	//�f�X�g���N�^
	~CPlayer();

	/*�����o�ϐ��E�萔*/

	//����
	enum DIRECTION
	{
		LEFT,
		RIGHT
	};

	/*�����o�֐�*/

	//�摜�̓ǂݍ���
	void load();

	//�摜�̉��
	void release();

	//������
	void init(double initX,double initY,DIRECTION initD);

	//�X�V
	void update();

	//�`��
	void draw();

private:	//�B���Ă�������

	/*�����o�ϐ��E�萔*/

	//�؂���摜�̑傫��
	const int TEXTURE_SIZE = 64;

	//�ʒu���W
	double x, y;
	//���x
	double vx, vy;
	//�L�����N�^�[�̑傫��
	int w, h;
	//�摜���W
	int rx, ry;
	//�摜�T�C�Y
	int dw, dh;
	//�摜�ɕ]����摜�̊g��E�k����
	double scale;
	//��ʂɕ\������摜�̑傫��
	int sw, sh;
	//�摜�̉�]��
	double rad;
	//�摜�̍��W����
	int r_adjust;
	//�摜�̃A�j���[�V�����ԍ�
	int anim_number;
	//�摜�̃A�j���[�V�����^�C�}�[
	int anim_timer;
	//����
	DIRECTION direction;

};

#endif

/*END*/
