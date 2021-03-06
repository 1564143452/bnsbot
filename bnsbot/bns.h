#pragma once
#include <Windows.h>
#include <stdio.h>
#include <map>
#include "coord.h"

namespace bns {
	namespace sigs {
		typedef void *(__fastcall *SendPacket)(uintptr_t rcx, uintptr_t rdx, void *data);
		typedef bool (__fastcall *SendMove2)(uintptr_t bns_interface, float x, float y, float z);
		typedef uintptr_t(__fastcall *EInterfaceGetInstance)();
		typedef void *(__fastcall *SendKey)(uintptr_t rcx, unsigned char *data, bool once);
		typedef void *(__fastcall *SendKeyUp)(uintptr_t rcx, unsigned char *data);
	}

	class Bns {
	private:
		// Base addresses of modules.
		uintptr_t base_client_, base_shipping_;
		// Base addresses derived from base addresses of modules.
		uintptr_t base_player_, base_target_hp_, base_keybd_device_;
		// Base structures, devices, things you have to pass as arguments..
		uintptr_t keybd_device_, cutscene_if_exists_, player_;
		//unsigned char keybd_buffer_[0x20] = {0};


		// Used to track Z cooldown.
		double cooldown_start_time_;

		unsigned long target_hp_;
		bool target_is_dead_;

		// Stolen structs for SendPacket
		uintptr_t packet_rcx_, packet_rdx_;

		bool is_sleeping_ = false;

		static bool has_instance_;
		static Bns *instance_;
		Bns();

		uintptr_t GetBasePlayer();
		uintptr_t GetBaseTargetHP();
		uintptr_t GetBaseKeybdDevice();
		
	public:
		std::map<char *, char *> item;

		static Bns *getInstance();

		// Refreshes player object by caching it.
		void RefreshPlayerAddress();
		// Returns current Player object.
		uintptr_t GetPlayerAddress();
		uintptr_t GetTargetHPAddress();
		// Returns the coordinates of the player.
		// Returns the null-vector if player is not valid (eg in loading screen).
		coord::Coord GetPlayerCoord();

		// Sets to sleep mode, disables some functionality
		void SetSleep(bool);
		// Returns sleep mode
		bool IsSleeping();

		// Returns true, if the player is busy moving to a destination
		// false, if otherwise.
		bool PlayerIsBusy();

		void RefreshKeybdDevice();
		uintptr_t GetKeybdDevice();

		void SetTargetHP(unsigned long hp);
		unsigned long GetTargetHP();

		void SetTargetDead(bool dead);
		bool IsTargetDead();


		// Sends ands holds a specific key.
		void SendKeyEasy(unsigned char id);
		// Stop holding a specific key.
		void SendKeyUpEasy(unsigned char id);
		// Sends a specific key once.
		void SendKeyEasyOnce(unsigned char id);
		void SendPacketEasy(void *data);
		bool SendMoveEasy(const coord::Coord &destination);

		void SetSendPacketStructs(uintptr_t rcx, uintptr_t rdx);

		bool SkipCutscene(bool);

		double GetCooldownStartTime();
		void SetCooldownStartTime();

		// Bns executeable functions
		sigs::SendPacket SendPacket;
		sigs::EInterfaceGetInstance EInterfaceGetInstance;
		sigs::SendMove2 SendMove2;
		sigs::SendKey SendKey;
		sigs::SendKeyUp SendKeyUp;
	};
}