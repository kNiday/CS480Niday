#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include "graphics_headers.h"

class Object
{
  public:
    Object();
    Object(glm::mat4 parent);
    ~Object();
    void Update(unsigned int dt, int direction, bool isMoon);
    void Render();

    glm::mat4 GetModel();

  private:
    glm::mat4 model;
    glm::mat4 parentModel;
    std::vector<Vertex> Vertices;
    std::vector<unsigned int> Indices;
    GLuint VB;
    GLuint IB;

    float angle;
};

#endif /* OBJECT_H */
