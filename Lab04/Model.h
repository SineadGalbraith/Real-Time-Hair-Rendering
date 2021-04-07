#pragma once

// Include Windows and Vector
#include <windows.h>
#include <vector> 

// include Assimp includes
#include <assimp/cimport.h> // scene importer
#include <assimp/scene.h> // collects data
#include <assimp/postprocess.h> // various extra operations


// Include Maths Functions
#include "maths_funcs.h"

typedef struct
{
	size_t mPointCount = 0;
	std::vector<vec3> mVertices;
	std::vector<vec3> mNormals;
	std::vector<vec2> mTextureCoords;
	std::vector<vec3> mTangents;
} ModelData;

class Model {
public:
	Model();
	Model(const char* mesh);
	Model(const char* mesh, const char* texture);
	Model::ModelData modelMesh;
	std::vector < ModelData > getDataArray();
private:
	ModelData load_mesh(const char* file_name);
};