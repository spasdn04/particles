#ifndef CAMERA_CLASS_H
#define CAMERA_CLASS_H

#include"config.h"

// Defines several possible options for camera movement. Used as abstraction to stay away from window-system specific input methods
enum Camera_Movement {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT
};

// Default camera values
const float YAW         = -90.0f;
const float PITCH       =  0.0f;
const float SPEED       =  2.5f;
const float SENSITIVITY =  0.1f;
const float ZOOM        =  45.0f;

class Camera
{
public:
    // Propiedades de la c�mara
    glm::vec3 Position;
    glm::vec3 Front;
    glm::vec3 Up;
    glm::vec3 Right;
    glm::vec3 WorldUp;
    // �ngulos de Euler
    float Yaw;
    float Pitch;
    // Opciones de c�mara
    float MovementSpeed;
    float MouseSensitivity;
    float Zoom;

    // Constructor con vectores
    Camera(glm::vec3 position = glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f), float yaw = YAW, float pitch = PITCH);

    // Constructor con valores escalares
    Camera(float posX, float posY, float posZ, float upX, float upY, float upZ, float yaw, float pitch);

    // Obtiene la matriz de vista
    glm::mat4 GetViewMatrix();

    // Procesa la entrada de teclado
    void ProcessKeyboard(Camera_Movement direction, float deltaTime);

    // Procesa la entrada del mouse
    void ProcessMouseMovement(float xoffset, float yoffset, GLboolean constrainPitch = true);

    // Procesa la entrada de la rueda del mouse
    void ProcessMouseScroll(float yoffset);

private:
    // Calcula los vectores de la c�mara
    void updateCameraVectors();
};

#endif
