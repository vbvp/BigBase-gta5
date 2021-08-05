#pragma once
#include "MainScript.hpp"
#include "ScriptCallback.hpp"
#include "Lists.hpp"
#include "Natives.hpp"
#include "Timer.hpp"
#include "Translation.hpp"
#include "CustomText.hpp"
#include "UI/UIManager.hpp"
#include "UI/BoolOption.hpp"
#include "UI/ChooseOption.hpp"
#include "UI/NumberOption.hpp"
#include "UI/RegularOption.hpp"
#include "UI/SubOption.hpp"
#include "UI/RegularSubmenu.hpp"
#include "UI/PlayerSubmenu.hpp"
#include "Settings.hpp"
#include "Natives.hpp"
#include "Script.hpp"
#include "Memory.hpp"

// features import 
#include "Self.hpp"

namespace Big
{
	class FeatureScript : public Script
	{
	public:
		explicit FeatureScript() = default;
		~FeatureScript() noexcept = default;

		bool IsInitialized() override;
		ScriptType GetType() override;
		void Initialize() override;
		void Destroy() override;
		void Tick() override;
	private:
		bool m_Initialized{};
	};

	inline std::shared_ptr<FeatureScript> g_FeaturesScript;
}
