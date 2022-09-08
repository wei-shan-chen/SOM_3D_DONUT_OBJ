#ifndef OBJMODEL_H
#define OBJMODEL_H
#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <string.h>
#include <GLFW/glfw3.h>
#include <iomanip>
#include <vector>
#include <glm/glm.hpp>

#include "Vertex.h"

class OBJmodel{
public:
    OBJmodel();
    ~OBJmodel();
    bool LoadOBJfile(const char *objFileName);
    std::vector<glm::fvec3> vertex_tri;
    std::vector<glm::fvec3> normal_tri;
    std::vector<glm::fvec2> texcor_tri;
    std::vector<glm::ivec4> vertex_index;
    std::vector<glm::ivec4> normal_index;
    std::vector<glm::ivec4> texcor_index;
    std::vector<Vertex> m_MeshTri;
    glm::fvec3 m_MaxPos;
    glm::fvec3 m_MinPos;
    int extraPoint[4]; // top bottom left right
    int pointNum = 0;
    int triNum = 0;
    bool Isline = true;

private:
    glm::fvec3 leftPos;
    glm::fvec3 rightPos;
    glm::fvec3 topPos;
    glm::fvec3 bottomPos;
    void findExtraPos(glm::fvec3 vertex);
    void putVertex();
};



#endif