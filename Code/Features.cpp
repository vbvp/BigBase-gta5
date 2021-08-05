#include "Features.hpp"
namespace Big
{
	bool FeatureScript::IsInitialized()
	{
		return m_Initialized;
	}

	ScriptType FeatureScript::GetType()
	{
		return ScriptType::Game;
	}

	void FeatureScript::Initialize()
	{
		g_Logger = std::make_unique<Logger>();

		g_Logger->Info("Self Features Started.");

		m_Initialized = true;
	}

	void FeatureScript::Destroy()
	{
	}

	void FeatureScript::Tick()
	{
		SelfFeatures::GodMode();
		SelfFeatures::CopsNeverWanted();
		SelfFeatures::CopsBlindEye();
		SelfFeatures::GangsBlindEye();
		SelfFeatures::IgnorePlayer();
		SelfFeatures::IngoreShockingEvents();
		SelfFeatures::MaxSpeed();
		SelfFeatures::MaxSwim();
		SelfFeatures::RunSpeedX();
		SelfFeatures::SwimSpeedX();
		SelfFeatures::SuperJump();
		SelfFeatures::Invisible();
		SelfFeatures::SetHealth();
		SelfFeatures::SetMaxHealth();
		SelfFeatures::SetHealthRegenX();
	}
}
