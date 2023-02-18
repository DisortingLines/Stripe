#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stripe::Application* Stripe::CreateApplication();

int main(int argc, char** argv)
{
	Stripe::Log::Init();

	ST_CORE_WARN("Initialized Log");
	ST_INFO("Hello!");

	auto app = Stripe::CreateApplication();
	app->Run();
	delete app;
}

#endif // ST_PLATFORM_WINDOWS