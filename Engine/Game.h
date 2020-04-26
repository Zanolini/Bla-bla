/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "chrono"
using namespace std::chrono_literals;

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawBox( int x,int y,int r,int g,int b );
	bool OverlapTest( int box0x,int box0y,int box1x,int box1y );
	int ClampScreenX( int x );
	int ClampScreenY( int y );
	void CreatePlatform(int x[], int n);
	int CreaQuadratoX();
	int CreaQuadratoY();
	void CreaLivello(int &x, int &y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int gravity = 0;
	int platform = 0;
	int x_fixed0 = 15;
	int y_fixed0 = 195;
	int x_fixed1[5] = { 15, 15, 15, 15, 15 };
	//int x_fixed1 = { 15 };
	int JumpSpeed = -50;
	//int y_fixed1 = 200;
	int x_fixed2 = 30;
	//int y_fixed2 = 220;
	int x_fixed3 = 45;
	//int y_fixed3 = 220;
	int x_mobile = 15;
	int y_mobile = 180;
	bool colliding = false;
	int* Coordinate[2] = { 0, 0 };
	/********************************/
};