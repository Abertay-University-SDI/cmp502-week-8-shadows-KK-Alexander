// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "TextureShader.h"
#include "ShadowShader.h"
#include "DepthShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void depthPass();
	void finalPass();
	void gui();

private:
	TextureShader* textureShader;
	PlaneMesh* mesh;
	OrthoMesh* sMapData;

	Light* light;
	AModel* model;
	ShadowShader* shadowShader;
	DepthShader* depthShader;

	CubeMesh* cubeMesh;
	SphereMesh* sphereMesh;

	float cubeXPos = 7.5f;
	bool cubeXMinus = true;

	float sphereYPos = 5.f;
	bool sphereYMinus = false;

	float lightPos[3] = { 0.f, 0.f, -10.f };
	float lightDir[3] = { 0.0f, -0.7f, 0.7f };

	ShadowMap* shadowMap;
};

#endif