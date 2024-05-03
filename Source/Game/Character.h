#pragma once

#include "../Library/gameutil.h"

using namespace game_framework;

class Character
{
public:
	CMovingBitmap image;
	string name;
	vector<string> imgPaths;
	int x;
	int y;
	//���k
	bool isRightRun = 0;
	bool isLeftRun = 0;
	//��
	int upTime = 0;
	bool isUpRun = 0;
	bool checkJumpble = 1; //����s��
	//�i�j�� �������
	bool characterIgnore = false;

	//���|
	bool characterIsOverlap; // �֦b���Y�W
	
	//�I��
	std::vector<CMovingBitmap> blocks;

	Character(vector<string> imgPath, string name, int x, int y);
	void OnInit();
	void OnShow();
	void TryMoveRight(Character &other);
	void TryMoveLeft(Character &other);
	void TryMoveUp();
	void TryFall();
	void CheckMovable(CMovingBitmap & player, vector<CMovingBitmap> & targets, int dx, int dy);
	bool IsJumpable(CMovingBitmap & player, vector<CMovingBitmap> & targets, int dx, int dy);
	void SetWallAndFloor(vector<CMovingBitmap> blocks);
};
