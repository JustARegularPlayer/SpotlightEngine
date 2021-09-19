#pragma once
#include <Spotlight.h>

class Layer_Render : public Spotlight::Layer
{
public:
	Layer_Render();

	void OnUpdate(Spotlight::Timestep ts) override;
	void OnUIRender() override;
	void OnEvent(Spotlight::Event &e) override;

private:
	// Temporary
	Spotlight::ShaderLibrary m_Library;

	Spotlight::Ref<Spotlight::VertexArray> m_SolidColorVAO;
	Spotlight::Ref<Spotlight::Shader> m_SolidColorShader;

	Spotlight::Ref<Spotlight::Texture2D> m_Texture;

	Spotlight::OrthoCameraController m_CameraController;

	glm::vec4 m_SolidColor;
};
