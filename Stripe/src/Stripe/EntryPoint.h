#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stripe::Application* Stripe::CreateApplication();

int main(int argc, char** argv)
{
	printf("Stripe Engine booted!\n");

	auto app = Stripe::CreateApplication();
	app->Run();
	delete app;
}

#endif // ST_PLATFORM_WINDOWS