#pragma once
#include "Offsets.hpp"
#include "Patterns.hpp"

namespace Portal2
{
	using namespace Offsets;
	using namespace Patterns;

	void Patterns()
	{
		Init();


		// engine.so


		// \x55\x89\xE5\x53\x83\xEC\x00\x8B\x5D\x00\x8B\x45\x00\xC6\x43\x00\x00\xC7\x43\x00\x00\x00\x00\x00\xC7\x43\x00\x00\x00\x00\x00\xC7\x43\x00\x00\x00\x00\x00\xC7\x43\x00\x00\x00\x00\x00\xC7\x03\x00\x00\x00\x00\xC7\x43\x00\x00\x00\x00\x00\xC7\x43\x00\x00\x00\x00\x00 xxxxxx?xx?xx?xx??xx?????xx?????xx?????xx?????xx????xx?????xx?????
		Add("ConVar_Ctor3", "Portal 2 Build 7054",
			"ConVar",
			"55 89 E5 53 83 EC ? 8B 5D ? 8B 45 ? C6 43 ? ? C7 43 ? ? ? ? ? C7 43 ? ? ? ? ? C7 43 ? ? ? ? ? C7 43 ? ? ? ? ? C7 03 ? ? ? ? C7 43 ? ? ? ? ? C7 43 ? ? ? ? ? ");

		// \x55\xB9\x00\x00\x00\x00\x89\xE5\x53\x83\xEC\x00\x8B\x5D\x00\x8B\x45\x00\x8B\x55\x00\xC6\x43\x00\x00\x89\x43\x00\x0F\xB6\x43\x00\x85\xD2 xx????xxxxx?xx?xx?xx?xx??xx?xxx?xx
		Add("ConCommand_Ctor1", "Portal 2 Build 7054",
			"ConCommand",
			"55 B9 ? ? ? ? 89 E5 53 83 EC ? 8B 5D ? 8B 45 ? 8B 55 ? C6 43 ? ? 89 43 ? 0F B6 43 ? 85 D2");

		// \x55\xB9\x00\x00\x00\x00\x89\xE5\x53\x83\xEC\x00\x8B\x5D\x00\x8B\x45\x00\x8B\x55\x00\xC6\x43\x00\x00\x89\x43\x00\x0F\xB6\x43\x00\xC7\x43\x00\x00\x00\x00\x00 xx????xxxxx?xx?xx?xx?xx??xx?xxx?xx?????
		Add("ConCommand_Ctor2", "Portal 2 Build 7054",
			"ConCommand",
			"55 B9 ? ? ? ? 89 E5 53 83 EC ? 8B 5D ? 8B 45 ? 8B 55 ? C6 43 ? ? 89 43 ? 0F B6 43 ? C7 43 ? ? ? ? ? ");

		// \x55\x89\xE5\x57\x56\x53\x83\xEC\x00\x8B\x5D\x00\x89\x1C\x24\xE8\x00\x00\x00\x00\xC7\x04\x24\x00\x00\x00\x00\xE8\x00\x00\x00\x00 xxxxxxxx?xx?xxxx????xxx????x????
		Add("m_bLoadgame", "Portal 2 Build 7054",
			"CGameClient::ActivatePlayer",
			"55 89 E5 57 56 53 83 EC ? 8B 5D ? 89 1C 24 E8 ? ? ? ? C7 04 24 ? ? ? ? E8 ? ? ? ? ",
			34);

		// \x55\x89\xE5\x83\xEC\x00\x8B\x45\x00\x89\x75\x00\x89\x5D\x00\x8B\x75\x00\x89\x7D\x00\x83\xF8\x00\x0F\x84\x00\x00\x00\x00 xxxxx?xx?xx?xx?xx?xx?xx?xx????
		Add("Key_SetBinding", "Portal 2 Build 7054",
			"Key_SetBinding",
			"55 89 E5 83 EC ? 8B 45 ? 89 75 ? 89 5D ? 8B 75 ? 89 7D ? 83 F8 ? 0F 84 ? ? ? ? ");


		// vguimatsurface.so


		// \x55\x89\xE5\x53\x83\xEC\x00\x80\x3D\x00\x00\x00\x00\x00\x8B\x5D\x00\x0F\x84\x00\x00\x00\x00 xxxxxx?xx?????xx?xx????
		Add("StartDrawing", "Portal 2 Build 7054",
			"CMatSystemSurface::StartDrawing",
			"55 89 E5 53 83 EC ? 80 3D ? ? ? ? ? 8B 5D ? 0F 84 ? ? ? ? ");

		// \x55\x89\xE5\x53\x83\xEC\x00\xC7\x04\x24\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xA1\x00\x00\x00\x00 xxxxxx?xxx????x????x????
		Add("FinishDrawing", "Portal 2 Build 7054",
			"CMatSystemSurface::FinishDrawing",
			"55 89 E5 53 83 EC ? C7 04 24 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? ");
	}
	void Offsets()
	{
		// engine.so


		InternalSetValue = 19; // ConVar
		InternalSetFloatValue = 20; // ConVar
		InternalSetIntValue = 21; // ConVar
		FindVar = 15; // CCvarUtilities::IsValidToggleCommand
		ClientCmd = 7; // CEngineClient
		GetLocalPlayer = 12; // CEngineClient
		GetViewAngles = 18; // CEngineClient
		SetViewAngles = 19; // CEngineClient
		GetGameDirectory = 35; // CEngineClient
		StringToButtonCode = 31; // ReadCheatCommandsFromFile
		GetRecordingTick = 1; // CDemoRecorder
		SetSignonState = 3; // CDemoRecorder
		StopRecording = 7; // CDemoRecorder
		GetPlaybackTick = 3; // CDemoPlayer
		StartPlayback = 6; // CDemoPlayer
		IsPlayingBack = 7; // CDemoPlayer
		m_szFileName = 4; // CDemoPlayer::SkipToTick
		m_szDemoBaseName = 1344; // CDemoRecorder::StartupDemoFile
		m_nDemoNumber = 1608; // CDemoRecorder::StartupDemoFile
		m_bRecording = 1606; // CDemoRecorder::SetSignonState
		Paint = 15; // IEngineVGuiInternal
		ProcessTick = 12; // CClientState
		tickcount = 73; // CClientState::ProcessTick
		interval_per_tick = 81; // CClientState::ProcessTick
		Disconnect = 37; //  CClientState
		GetClientStateFunction = 11; // CEngineClient::ClientCmd
		GetCurrentMap = 26; // CEngineTool
		demoplayer = 93; // CClientState::Disconnect
		demorecorder = 106; // CClientState::Disconnect
		m_szLevelName = 72; // CEngineTool::GetCurrentMap
		GetIScheme = 9; // CSchemeManager
		GetFont = 4; // CScheme


		// server.so


		PlayerMove = 16; // CPortalGameMovement
		CheckJumpButton = 37; // CPortalGameMovement
		mv = 8; // CPortalGameMovement::CheckJumpButton
		m_nOldButtons = 40; // CPortalGameMovement::CheckJumpButton
		Think = 31; // CServerGameDLL
		UTIL_PlayerByIndex = 61; // CServerGameDLL::Think
		iNumPortalsPlaced = 5724; // CPortal_Player::IncrementPortalsPlaced
		gpGlobals = 467; // CGameMovement::FullTossMove
		player = 4; // CPortalGameMovement::PlayerMove
		m_fFlags = 212; // CBasePlayer::UpdateStepSound
		m_MoveType = 226; // CBasePlayer::UpdateStepSound
		m_nWaterLevel = 347; // CBasePlayer::UpdateStepSound
		psurface = 4116; // CPortalGameMovement::PlayerMove
		m_vecVelocity2 = 64; // CPortalGameMovement::PlayerMove
		frametime = 16; // CBasePlayer::UpdateStepSound


		// client.so


		HudUpdate = 11; // CHLClient
		GetFontTall = 72; // CFPSPanel::ComputeSize
		DrawColoredText = 160; // CFPSPanel::Paint
		m_vecAbsOrigin = 136; // C_BasePlayer::GetAbsOrigin
		m_angAbsRotation = 172; // C_BasePlayer::GetAbsAngles
		m_vecVelocity = 244; // CFPSPanel::Paint
		GetClientEntity = 3; // IClientEntityList
	}
}