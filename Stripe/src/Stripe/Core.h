#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STRIPE_API __declspec(dllexport)
	#else
		#define STRIPE_API __declspec(dllimport)
	#endif // ST_BUILD_DLL
#else
	#error Stripe is currently only in development for Win64 Platforms!
#endif // ST_PLATFORM_WINDOWS
