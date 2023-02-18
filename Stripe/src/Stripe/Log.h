#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Stripe
{
	class STRIPE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Log Macros
#define ST_CORE_TRACE(...)      ::Stripe::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ST_CORE_INFO(...)       ::Stripe::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_WARN(...)       ::Stripe::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_ERROR(...)      ::Stripe::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_CRITICAL(...)   ::Stripe::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client Log Macros
#define ST_TRACE(...)           ::Stripe::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ST_INFO(...)            ::Stripe::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_WARN(...)            ::Stripe::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_ERROR(...)           ::Stripe::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_CRITICAL(...)        ::Stripe::Log::GetClientLogger()->critical(__VA_ARGS__)