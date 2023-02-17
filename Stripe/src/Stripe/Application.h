#pragma once

#include "Core.h"

namespace Stripe
{
	class STRIPE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}