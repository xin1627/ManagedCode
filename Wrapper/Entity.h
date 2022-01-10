//Entity.h
#pragma once
#include "ManagedObject.h"
#include "../Core/Core.h"
using namespace System;
namespace CLI
{
    public ref class Entity : public ManagedObject<Core::Entity>
    {
    public:

        Entity(String^ name, float xPos, float yPos);
        void Move(float deltaX, float deltaY);
        property float XPosition
        {
        public:
            float get()
            {
                return m_Instance->GetXPosition();
            }
        private:
            void set(float value)
            {
            }
        }
        property float YPosition
        {
        public:
            float get()
            {
                return m_Instance->GetYPosition();
            }
        private:
            void set(float value)
            {
            }
        }

        property String^ Name
        {
        public:
            String^ get()
            {
                return char_to_string(m_Instance->m_Name);
            }
        private:
            void set(String^ value)
            {
            }
        }
    };
}
