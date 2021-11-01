#include "gui.h"
#include "vars.hpp"

#if CUSTOM_ICONS
#include "icons.h"
#endif

//more UI or menus on github like unex ui, Hammafia, Primerose or Redengine

//static here
static bool Info = false;
static int tab = 0;
static bool FPS = true;

namespace Gui
{
	void Render()
	{
		ImGui::Begin(GUI_NAME, nullptr, ImGuiWindowFlags_NoResize);

		//here you can but your cheat or Menu name at

		if (ImGui::Button(" Executer", ImVec2(75, 20)))
		{
			tab = 1;
		}

		ImGui::SameLine();

		if (ImGui::Button(" Aimbot", ImVec2(75, 20)))
		{
			tab = 2;
		}

		ImGui::SameLine();

		if (ImGui::Button(" Visual", ImVec2(75, 20)))
		{
			tab = 3;
		}

		ImGui::SameLine();

		if (ImGui::Button(" Weapon", ImVec2(75, 20)))
		{
			tab = 4;
		}

		ImGui::SameLine();

		if (ImGui::Button(" Vehicle", ImVec2(75, 20)))
		{
			tab = 5;
		}

		ImGui::SameLine();

		if (ImGui::Button(" Player", ImVec2(75, 20)))
		{
			tab = 6;
		}

		ImGui::SameLine();

		if (ImGui::Button(" Info", ImVec2(75, 20)))
		{
			tab = 7;
		}

		ImGui::SameLine();

		if (ImGui::Button("X", ImVec2(20, 20)))
		{
			exit(0x0);
		}

		ImGui::End();
	}

}