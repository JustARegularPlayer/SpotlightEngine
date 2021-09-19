#pragma once

#include <glm/glm.hpp>
#include "Spotlight/Renderer/VertexArray.h"

namespace Spotlight
{

	class RendererAPI
	{
	public:
		enum class API
		{
			None = 0,
			OpenGL = 1
		};
	public:
		virtual void Init() = 0;
		virtual void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) = 0;

		virtual void SetClearColor(const glm::vec4& color) = 0;
		virtual void Clear() = 0;

		static API GetAPI() { return sm_API; }

		virtual void DrawIndexed(const Ref<VertexArray>& vao) = 0;
	private:
		static API sm_API;
	};

}