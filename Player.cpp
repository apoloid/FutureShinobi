#include "Player.h"
#include "Image.h"
#include "Common.h"

CImage IM_PLAYER;	//‰æ‘œID

//ŠÖ”ŒÄ‚Ño‚µ
CPlayer::CPlayer()
{
	//•Ï”‚Ì‰Šú‰»
	x = y = 0;
	vx = vy = 0;
	rx = ry = 0;
	w = 32;
	h = 64;
	dw = dh = TEXTURE_SIZE;
	scale = 1.0;
	sw = sh = TEXTURE_SIZE;
	rad = 0;
	r_adjust = 0;
	anim_number = 0;
	anim_timer = 0;
}

CPlayer::~CPlayer()
{

}

void CPlayer::load()
{
	IM_PLAYER.create("data/graphic/player/shinobi4.png", TRC_ZERO);
}

void CPlayer::release()
{
	IM_PLAYER.release();
}

void CPlayer::init(double initX, double initY, DIRECTION initD)
{
	x = initX;
	y = initY;
	direction = initD;
}

void CPlayer::update()
{

}

void CPlayer::draw()
{
	//•`‰æ—pÀ•W•Ï”
	int dx = (int)x, dy = (int)y;

	MikanDraw->DrawTextureRotateScaleC(0, dx, dy, rx, ry, dw, dh, scale, rad);
}

/*END*/
