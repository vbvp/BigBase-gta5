#pragma once

namespace Big
{
	class Settings
	{
	public:
		std::atomic_bool self_god_mode = false;
		std::int32_t self_set_health{ 400 };
		std::int32_t self_set_max_health{ 400 };
		float self_set_health_regen_x{ 0 };

		std::atomic_bool self_never_wanted = false;
		std::atomic_bool self_cops_blind_eye = false;
		std::atomic_bool self_gangs_blind_eye = false;
		std::atomic_bool self_ignore_player = false;
		std::atomic_bool self_ignore_shocking_events = false;

		std::atomic_bool self_max_run_speed = false;
		std::atomic_bool self_max_swim_speed = false;
		float self_run_speed_x { 0 };
		float self_swim_speed_x{ 0 };
		std::atomic_bool self_super_jump = false;

		std::atomic_bool self_invisible = false;

		std::atomic_bool m_LogWindow = true;
		std::atomic_bool m_LockMouse = false;
	};

	inline Settings g_Settings;
}
