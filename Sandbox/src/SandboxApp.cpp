#include <Stripe.h>

class Sandbox : public Stripe::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Stripe::Application* Stripe::CreateApplication()
{
	return new Sandbox();
}