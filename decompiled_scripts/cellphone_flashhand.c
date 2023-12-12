#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	BOOL bLocal_73 = 0;
	int iLocal_74 = 0;
	BOOL bLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	BOOL bLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	BOOL bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	BOOL bLocal_111 = 0;
	int iLocal_112 = 0;
	Vehicle veLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	BOOL bLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	BOOL bLocal_122 = 0;
	int iLocal_123 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	var txdName;
	var gamerHandle;
	int num;
	float num2;
	float num3;
	int num4;
	int seatIndex;
	BOOL flag;
	int num5;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = (0.05f + 0.275f) - 0.01f;
	fLocal_64 = 0.73f;
	fLocal_65 = 0.55f;
	fLocal_66 = 0.73f;
	fLocal_67 = 0.45f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_21022 = _CHAR_NULL;
	MISC::CLEAR_BIT(&Global_8684, 8);
	MISC::CLEAR_BIT(&Global_8683, 14);
	MISC::CLEAR_BIT(&Global_4542983, 3);
	MISC::CLEAR_BIT(&Global_8684, 10);
	MISC::CLEAR_BIT(&Global_8683, 17);
	MISC::CLEAR_BIT(&Global_8683, 9);
	MISC::CLEAR_BIT(&Global_8683, 26);
	MISC::CLEAR_BIT(&Global_8683, 23);
	MISC::CLEAR_BIT(&Global_8684, 24);
	MISC::CLEAR_BIT(&Global_8684, 25);
	MISC::CLEAR_BIT(&Global_8684, 27);
	MISC::CLEAR_BIT(&Global_8684, 26);
	MISC::CLEAR_BIT(&Global_8683, 30);
	Global_2749459 = 0;
	iLocal_121 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_20779 = 0;
	bLocal_73 = false;
	Global_20757 = 0;
	Global_20797 = 0;
	Global_20798 = false;
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_20744 = { Global_20776 };
	Global_20817 = 4;
	Global_20818 = 0;
	Global_9288 = 1;
	Global_20793 = Global_20817;

	if (Global_20795 == false)
	{
		Global_20796 = 0;
	
		if (Global_79248)
		{
			if (func_122())
				Global_20794 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			else
				Global_20794 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
		
			iLocal_87 = 1;
			iLocal_87 == 1;
		}
		else if (Global_20756)
		{
			Global_20801 = true;
			Global_20794 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_20794 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&Global_114370.f_14054[Global_20813 /*20*/]);
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794) && Global_20796 == 0)
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
				Global_20796 = 1;
		
			if (MISC::IS_PC_VERSION())
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
					if (SYSTEM::TIMERA() > 2000)
						Global_20796 = 1;
		
			if (Global_20812 == 1)
				func_121();
		}
	
		if (Global_20796 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
				func_120(Global_20794, "SHUTDOWN_MOVIE");
		
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20794);
			Global_20754 = 0;
			Global_20795 = false;
			Global_21023 = 0;
		
			if (Global_114370.f_14054.f_84 == 1)
			{
				Global_114370.f_14054.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
		
			Global_20757 = 1;
			Global_20813.f_1 = 3;
			func_119();
			Global_20801 = false;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8683, 9);
			MISC::CLEAR_BIT(&Global_8683, 27);
			MISC::CLEAR_BIT(&Global_8683, 30);
			MISC::CLEAR_BIT(&Global_8684, 5);
			MISC::CLEAR_BIT(&Global_8684, 21);
			MISC::CLEAR_BIT(&Global_8685, 2);
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			Global_21025 = false;
			Global_23226 = false;
			Global_23225 = 0;
			Global_22179 = false;
			func_117();
			func_115();
			Global_4543262 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		Global_20737 = 0.1f;
		Global_20738 = 0.38f;
		Global_20739 = 0.195f;
		Global_20740 = 0.05f;
	
		if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
			func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
			func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
			func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
				func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
				func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
				func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
			}
		
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
				func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
				func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_107, &iLocal_108, &iLocal_109, &uLocal_110);
				func_113(Global_20794, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432);
			}
		}
	
		Global_20796 == 0;
		func_112();
	
		if (Global_79248)
			TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Michael", 24);
	
		Global_20795 = true;
	}

	Global_8686 = 99;
	func_111();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_99 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	if (HUD::IS_RADAR_HIDDEN())
		Global_23180 = 1;
	else
		Global_23180 = 0;

	func_113(Global_20794, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_20755 = true;

	if (Global_79248)
	{
		Global_21027 = false;
	
		if (func_122())
			if (Global_1836572 == 1)
				Global_4543259 = 4;
			else
				Global_4543259 = 2;
		else
			Global_4543259 = func_107(2030, -1);
	
		if (Global_4543259 < 1 || Global_4543259 > 7)
			Global_4543259 = 1;
	
		func_113(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543259), -1082130432, -1082130432, -1082130432, -1082130432);
		func_106();
	
		if (func_122())
			if (Global_1836572 == 1)
				Global_4543260 = 16;
			else
				Global_4543260 = 9;
		else
			Global_4543260 = func_107(2029, -1);
	
		if (Global_4543260 == 0)
		{
			gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			num = 0;
			NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
			Global_4543263 == 1;
		
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4543263 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&gamerHandle, &txdName))
				{
				}
				else
				{
					num = 1;
				}
			
				if (num == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_113(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_113(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_113(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4543260), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_20756)
			Global_21027 = false;
		else if (Global_114370.f_14054.f_88 == 1 || Global_114370.f_14054.f_89 == true)
			Global_21027 = false;
		else
			Global_21027 = false;
	
		func_113(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_9487 == 0)
			func_113(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
	
		func_106();
	}

	iLocal_88 = func_104();

	if (Global_20756 == false)
		func_92();

	Global_20791 = false;
	Global_21026 = false;
	MISC::CLEAR_BIT(&Global_8683, 9);
	Global_2695946 = false;

	if (func_87(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
		Global_2695946 = true;

	func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_85();
	func_84();
	func_83(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_20802, true);
	SYSTEM::SETTIMERB(0);

	while (Global_20813.f_1 < 6 && Global_20796 == 0)
	{
		SYSTEM::WAIT(0);
	
		if (SYSTEM::TIMERB() > 10000)
			Global_20796 = 1;
	
		if (Global_20813.f_1 < 4)
			Global_20796 = 1;
	}

	if (Global_20813.f_1 == 5 || Global_20813.f_1 == 6)
	{
		if (func_82(14))
			func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		else
			func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
	
		if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
			func_113(Global_20794, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		else
			func_113(Global_20794, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_20801)
			func_81(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		else
			func_81(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_20801)
			func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
		else
			func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_21027 == false)
		{
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else if (Global_79248)
		{
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else
		{
			if (Global_21026 == true)
				if (Global_20801)
					func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20801)
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		
			MISC::SET_BIT(&Global_8683, 17);
		}
	
		func_80();
	}

	Global_20799 = 1;
	func_79();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_105 = NETWORK::GET_NETWORK_TIME();
	else
		iLocal_100 = MISC::GET_GAME_TIMER();

	if (Global_21023 == 1)
	{
		if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_114370.f_14054.f_84 == 0)
			{
				Global_114370.f_14054.f_84 = 1;
			
				if (Global_20758 == 0)
				{
					num2 = 0.75f;
					num3 = 0.8f;
				}
				else
				{
					num2 = 0.65f;
					num3 = 0.77f;
				}
			
				num2 == num3;
				_DISPLAY_HELP_TEXT("CELL_7052" /*Sleep Mode is active.~n~The game story is paused. To continue it, enter the SETTINGS menu, select PROFILE then NORMAL MODE or trigger an existing mission.*/, 10000);
			}
		}
	}

	if (Global_79248 == false)
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;

	if (func_77())
		iLocal_79 = 1;
	else
		iLocal_79 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_80 = 1;
		
			if (func_77())
				func_76();
		}
		else
		{
			iLocal_80 = 0;
		}
	}

	if (MISC::IS_PC_VERSION())
	{
		if (Global_79248 == false)
		{
			iLocal_102 = MISC::GET_GAME_TIMER();
			iLocal_104 = 0;
		}
	}

	MISC::CLEAR_BIT(&Global_8685, 9);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (IS_BIT_SET(Global_4542983, 24))
		{
			if (!Global_21026)
			{
				if (Global_20813.f_1 == 6 || Global_20813.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4542983, 24);
					func_85();
					func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83(1);
				
					if (Global_20813.f_1 == 6)
						func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
				}
			}
		}
	
		if (func_75())
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	
		if (Global_79248 == false)
		{
			if (bLocal_75)
				if (Global_20813.f_1 == 6 || Global_20813.f_1 == 7)
					bLocal_75 = false;
		
			if (Global_20813.f_1 > 4)
			{
				if (IS_BIT_SET(Global_8683, 14) && Global_4543262 == 0 && Global_20753 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_74())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_76);
						
							if (Global_20759[Global_20758 /*3*/].f_1 != uLocal_76.f_1)
								func_72();
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_76);
						
							if (Global_20766[Global_20758 /*3*/].f_1 != uLocal_76.f_1)
							{
								!func_75();
							
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
									func_70();
							}
						}
					
						if (iLocal_80 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_80 = 1;
								func_70();
								func_76();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_80 = 0;
							func_72();
						
							if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
								if (Global_22166 != 2)
									func_69();
						}
					
						if (iLocal_79 == 0)
						{
							if (func_77())
							{
								iLocal_79 = 1;
							
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
									func_76();
							
								func_72();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
								if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
						
							if (func_77() == false)
							{
								iLocal_79 = 0;
								func_70();
							}
						}
					}
				}
			}
		}
	
		if (Global_2695946 == true)
		{
			if (!func_87(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_20813.f_1 > 3)
					{
						Global_20798 = true;
						func_68();
						func_65(0);
						Global_2695946 = false;
					}
				}
			}
		}
	
		if (Global_21028 == 0)
		{
			if (Global_43922 != 15 || Global_8688 == 1 || _IS_MISSION_REPEAT_ACTIVE(false))
			{
				if (!Global_21026)
				{
					if (Global_20813.f_1 == 6)
					{
						Global_8689 = 42;
						func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21028 = 1;
			}
		}
		else if (Global_43922 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8688 == 0)
		{
			if (!Global_21026)
			{
				if (Global_20813.f_1 == 6)
				{
					Global_8689 = 255;
					func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21028 = 0;
		}
	
		if (Global_21029 == 0)
		{
			if (IS_BIT_SET(Global_8684, 3))
			{
				if (!Global_21026)
				{
					if (Global_20813.f_1 == 6)
					{
						func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_21029 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_8684, 3))
		{
			if (!Global_21026)
			{
				if (Global_20813.f_1 == 6)
				{
					func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_21029 = 0;
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20741.f_1 != Global_20759[Global_20758 /*3*/].f_1 || func_77())
			{
				if (Global_20813.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
						if (Global_79248)
							if (Global_20813.f_1 == 9)
								if (Global_22219 == 1 || IS_BIT_SET(Global_8684, 23))
									PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20782);
							else
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20782);
						else
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20782);
				
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
					
						if (IS_BIT_SET(Global_8683, 17))
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20784);
					}
				
					if (!func_63() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20785);
				}
			}
		
			Global_20741.f_1 == Global_20759[Global_20758 /*3*/].f_1;
		}
	
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_76369)
			{
				if (!func_75())
				{
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
				}
			
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20787);
			
				if (!func_63())
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20788);
			
				if (Global_20813.f_1 > 4)
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20790);
			}
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20781, 0))
		{
			bLocal_97 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (iLocal_74 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20782))
			{
				Global_8687 = 1;
				iLocal_74 = 0;
			}
		
			if (!(Global_20813.f_1 > 3))
				iLocal_74 = 0;
		}
	
		if (bLocal_97)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20781))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_20813.f_1 = 3;
					func_60();
				}
			}
			else
			{
				bLocal_97 = false;
			}
		}
	
		Global_9291 = MISC::GET_GAME_TIMER();
	
		if (Global_20800)
		{
			func_79();
			Global_20799 = 1;
			Global_20800 = false;
		}
	
		if (Global_21025 == false)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
			func_53();
			func_52();
			HUD::SET_TEXT_RENDER_ID(iLocal_85);
		
			if (Global_20799 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			
				if (Global_20756)
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20794, Global_20733, Global_20734, Global_20735, Global_20736, 255, 255, 255, 255, 0);
				else
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20794, Global_20733, Global_20734, Global_20735, Global_20736, 255, 255, 255, 255, 0);
			
				func_111();
			}
		
			if (Global_20753 == 1)
			{
				if (Global_20813.f_1 > 3)
					func_51();
			}
			else if (Global_20813.f_1 > 3)
			{
				if (Global_4543262 == 1)
					func_50();
			
				if (IS_BIT_SET(Global_8684, 25))
				{
					if (Global_79248 == true)
						func_49();
				}
				else if (!IS_BIT_SET(Global_8684, 24))
				{
					if (IS_BIT_SET(Global_8684, 26))
					{
						if (func_62(FRONTEND_CONTROL, Global_20780, 0))
						{
							MISC::SET_BIT(&Global_8684, 25);
							MISC::CLEAR_BIT(&Global_8684, 26);
							MISC::CLEAR_BIT(&Global_8685, 2);
						}
					}
				}
				else if (Global_79248 == true)
				{
					func_48();
				}
			}
		}
	
		if (bLocal_73)
		{
			if (Global_20813.f_1 == 6)
				func_44();
		}
		else if (!IS_BIT_SET(Global_8683, 23))
		{
			if (Global_20813.f_1 == 5 || Global_20813.f_1 == 6)
			{
				if (Global_21025 == false)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_20756 == false)
							if (IS_BIT_SET(Global_8683, 14))
								if (!Global_79248)
									if (iLocal_74 == 0)
										if (!func_82(14))
											func_43();
										else if (Global_2695946)
											func_42();
								else if (IS_BIT_SET(Global_8685, 9))
									func_41();
								else
									func_24();
					
						if (IS_BIT_SET(Global_8683, 9))
						{
							func_22(0, 0, 1, true);
						}
						else if (Global_23225 == 0)
						{
							if (!IS_BIT_SET(Global_4542983, 3))
							{
								if (Global_79248)
									func_21();
							
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_79248)
								func_21();
						
							if (!IS_BIT_SET(Global_4542983, 3))
							{
								if (Global_23225 == 1)
								{
									if (IS_BIT_SET(Global_4542983, 1))
									{
										if (IS_BIT_SET(Global_8683, 14))
										{
											if (Global_79248)
												func_22(7, 0, 1, false);
											else
												Global_23226 = false;
										
											Global_23225 = 0;
											MISC::CLEAR_BIT(&Global_4542983, 1);
										}
									}
									else if (IS_BIT_SET(Global_8683, 14))
									{
										func_22(7, 0, 1, false);
										Global_23225 = 0;
									}
								}
								else
								{
									if (Global_23225 == 3)
									{
										func_22(1, 0, 1, false);
										Global_23225 = 0;
									}
								
									if (Global_23225 == 2)
									{
										func_22(14, 0, 1, false);
										Global_23225 = 0;
									}
								
									if (Global_23225 == 4)
									{
										func_22(23, 0, 1, false);
										Global_23225 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8690[Global_20816 /*15*/].f_5)))
		{
			if (Global_20816 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[Global_20816 /*15*/].f_9) == 0)
					Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[Global_20816 /*15*/].f_5), CONTACTS_APP);
			}
			else
			{
				num4 = 0;
			
				if (Global_20816 == 23)
					IS_BIT_SET(Global_4542983, 4) == false && Global_1836171 == false;
			
				if (Global_20816 == 2 || num4 == 1)
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[Global_20816 /*15*/].f_9) == 0)
						Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[Global_20816 /*15*/].f_5), APP_INTERNET);
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[Global_20816 /*15*/].f_9) == 0)
					Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[Global_20816 /*15*/].f_5), CELLPHONE);
			}
		
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8690[Global_20816 /*15*/].f_5));
			Global_8686 = 99;
			MISC::CLEAR_BIT(&Global_8683, 23);
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (Global_20813.f_1 == 1)
			func_9();
	
		if (Global_20813.f_1 == 0)
			func_9();
	
		if (Global_20813.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22179)
			{
				if (Global_20813.f_1 == 9)
				{
					if (Global_79248)
					{
						if (!IS_BIT_SET(Global_8684, 31))
						{
							if (!IS_BIT_SET(Global_8684, 27))
							{
								if (func_8())
								{
									if (!IS_BIT_SET(Global_8683, 9))
									{
										if (func_62(FRONTEND_CONTROL, Global_20785, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!(Global_20812 == 1))
												{
													if (Global_20813.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8684, 24);
														MISC::SET_BIT(&Global_8684, 27);
														MISC::CLEAR_BIT(&Global_8684, 26);
														MISC::CLEAR_BIT(&Global_8684, 25);
														MISC::SET_BIT(&(Global_2738587.f_1832), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		
			if (Global_20796 == 1)
			{
				Global_20798 = true;
				func_65(0);
			}
		
			if (Global_20797 == 1)
			{
				Global_20798 = true;
				func_65(0);
			}
		
			if (Global_79248)
			{
				if (!IS_BIT_SET(Global_8685, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2745629.f_1 == true)
						{
						}
						else
						{
							func_68();
							func_65(0);
						}
					}
				}
			}
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
						MISC::SET_BIT(&Global_8684, 4);
				
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919171)
						{
							func_5(true, true);
							MISC::SET_BIT(&Global_8683, 14);
						}
						else
						{
							Global_20798 = true;
							func_68();
							func_65(0);
						}
					}
				}
			
				if (func_82(14))
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
						bLocal_122 = false;
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						bLocal_122 = true;
			
				if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0 || Global_79510 == true || func_3(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || GRAPHICS::GET_USINGNIGHTVISION() || bLocal_122)
					if (!Global_20756)
						MISC::SET_BIT(&Global_8684, 4);
			
				if (MISC::IS_PC_VERSION())
				{
					if (Global_79248 == false)
					{
						if (iLocal_104 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_102 = MISC::GET_GAME_TIMER();
									iLocal_104 = 1;
								}
							}
						}
						else
						{
							iLocal_103 = MISC::GET_GAME_TIMER();
							iLocal_106 = iLocal_103 - iLocal_102;
						
							if (iLocal_106 < 4000)
								MISC::SET_BIT(&Global_8684, 4);
							else
								iLocal_104 = 0;
						}
					}
				}
			
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				{
					if (Global_79248)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_112, true);
					
						if (iLocal_112 != joaat("WEAPON_UNARMED") && Global_20813.f_1 < 7)
							MISC::SET_BIT(&Global_8684, 4);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_113 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("submersible2"))
						bLocal_116 = true;
					else
						bLocal_116 = false;
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("cutter") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("chernobog") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("khanjali") || bLocal_116 || VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_113, false) == false)
						MISC::SET_BIT(&Global_8684, 4);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("technical") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("trash2") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("limo2") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("insurgent3") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("halftrack") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("dune3") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("trailersmall2") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("technical2") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("boxville5") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("mogul") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("bombushka") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("tula") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_113))
						{
							seatIndex = func_2(PLAYER::PLAYER_PED_ID(), veLocal_113);
						
							if (seatIndex != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("limo2"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("trash2"))
									if (seatIndex == 2 || seatIndex == 1)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("technical2"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("boxville5"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("insurgent3"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("halftrack"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("dune3"))
									if (seatIndex == 0)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("trailersmall2"))
									if (seatIndex == -1)
										MISC::SET_BIT(&Global_8684, 4);
							
								if (VEHICLE::IS_TURRET_SEAT(veLocal_113, seatIndex))
									MISC::SET_BIT(&Global_8684, 4);
							}
						}
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
					{
						if (Global_79248 == false)
						{
							if (Global_20813.f_1 == 6 || Global_20813.f_1 == 7)
							{
								flag = true;
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(veLocal_113))
									flag = false;
							
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(veLocal_113)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veLocal_113)) || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(veLocal_113) == joaat("submersible2"))
									flag = false;
							
								if (flag)
									func_65(0);
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_ATTACK))
						if (Global_79248 == false)
							if (Global_20813.f_1 == 6 || Global_20813.f_1 == 7)
								func_65(0);
				
					bLocal_116 = false;
				}
			
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919171)
					{
						func_5(true, true);
					}
					else
					{
						Global_20798 = true;
						func_68();
						func_65(0);
					}
				}
			
				if (Global_79248 == false)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_99)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20798 = true;
							func_68();
							func_65(0);
						}
					}
				
					if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_20798 = true;
							func_68();
							func_65(0);
						}
					}
				}
				else if (func_75())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_99)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20798 = true;
							func_68();
							func_65(0);
						}
					}
				}
			
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_75())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_112, true);
						
							if (iLocal_112 == joaat("WEAPON_SNIPERRIFLE") || iLocal_112 == joaat("WEAPON_HEAVYSNIPER") || iLocal_112 == joaat("WEAPON_REMOTESNIPER"))
								bLocal_111 = true;
							else
								bLocal_111 = false;
						
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_111)
								{
									Global_20798 = true;
									func_68();
									func_65(0);
								}
							}
						}
					}
				}
			
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_20798 = true;
					func_68();
					func_65(0);
				}
			
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_20798 = true;
					func_68();
					func_65(0);
				}
			
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_20798 = true;
					func_68();
					func_65(0);
				}
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79248 == false)
					{
						Global_20798 = true;
						func_68();
						func_65(0);
					}
				}
			}
			else
			{
				num5 = 0;
			
				if (Global_79248 && Global_2745629.f_1 && Global_2745629.f_37 && Global_20813.f_1 == 9)
				{
					num5 = 1;
				
					if (!IS_BIT_SET(Global_8684, 24))
					{
						if (IS_BIT_SET(Global_8684, 26))
						{
							MISC::SET_BIT(&Global_8684, 25);
							MISC::CLEAR_BIT(&Global_8684, 26);
							MISC::CLEAR_BIT(&Global_8685, 2);
						}
					}
				}
			
				if (num5 == 0)
				{
					Global_20798 = true;
					func_68();
					func_65(0);
				}
			}
		}
	
		if (Global_20791 == true)
			func_1();
	
		if (Global_20812 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20782);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}

	return;
}

void func_1() // Position - 0x1ECB Hash - 0xA1971F4E ^0xD5FA4604
{
	if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20782) && !PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20781))
		Global_20791 = false;

	return;
}

int func_2(Ped pedParam0, Vehicle veParam1) // Position - 0x1EF1 Hash - 0xE817AD6A ^0xE00B3CE3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, -1, false) == pedParam0)
				return -1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 0, false) == pedParam0)
				return 0;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 1, false) == pedParam0)
				return 1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 2, false) == pedParam0)
				return 2;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 3, false) == pedParam0)
				return 3;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 4, false) == pedParam0)
				return 4;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 5, false) == pedParam0)
				return 5;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 6, false) == pedParam0)
				return 6;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 7, false) == pedParam0)
				return 3;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 8, false) == pedParam0)
				return 4;
		}
	}

	return -2;
}

BOOL func_3(Ped pedParam0) // Position - 0x1FCA Hash - 0xD8C74549 ^0xD8C74549
{
	if (pedParam0 == 0)
		return false;

	if (func_4(pedParam0) == -1)
		return false;

	return true;
}

int func_4(Ped pedParam0) // Position - 0x1FEB Hash - 0xDCBB968F ^0xDCBB968F
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_44908[i /*5*/] == -1))
			if (pedParam0 == Global_44908[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_5(BOOL bParam0, BOOL bParam1) // Position - 0x2034 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_21025 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
		
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == true)
	{
		Global_21025 = false;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
	}

	return;
}

BOOL func_6(int iParam0) // Position - 0x20A8 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20813.f_1 > 3)
			if (IS_BIT_SET(Global_8683, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20813.f_1 > 3)
		return true;

	return false;
}

BOOL func_7() // Position - 0x20FF Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_8() // Position - 0x210D Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_2745629.f_1;
}

void func_9() // Position - 0x211B Hash - 0x4D174CAC ^0x37BBCB07
{
	float num;
	var unk;
	float num2;

	Global_23225 = 0;
	Global_23226 = false;
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);

	if (Global_20779 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
	
		if (func_74())
			iLocal_16 = MISC::GET_GAME_TIMER();
		else
			iLocal_16 = 0;
	
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_20779 = 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (Global_114370.f_14054.f_84 == 1)
	{
		Global_114370.f_14054.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}

	num = 350f;

	if (IS_BIT_SET(Global_8683, 30) || IS_BIT_SET(Global_8685, 2))
		num = 25f;

	unk = { Global_20773 };

	if (Global_20798 == true)
		unk = { -45f, 45f, 25f };

	if (IS_BIT_SET(Global_8684, 26) || IS_BIT_SET(Global_8683, 30) || IS_BIT_SET(Global_8685, 2))
		uLocal_118 = { Global_20759[Global_20758 /*3*/] };
	else
		uLocal_118 = { Global_20766[Global_20758 /*3*/] };

	num2 = func_15(uLocal_118, Global_20759[Global_20758 /*3*/], Global_20773, unk, num, false);

	if (!bLocal_86 && num2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		bLocal_86 = true;
	}

	if (bLocal_86 && MISC::GET_GAME_TIMER() - iLocal_16 > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
		Global_20813.f_1 == 3;
		Global_20813.f_1 == 1;
		Global_20813.f_1 == 0;
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_20754 = 0;
		Global_20795 = false;
		Global_21023 = 0;
	
		if (Global_114370.f_14054.f_84 == 1)
		{
			Global_114370.f_14054.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
	
		Global_20757 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	
		Global_23180 == 0;
		Global_21025 = false;
	
		if (func_12(0))
			func_11();
	
		MISC::CLEAR_BIT(&Global_8684, 8);
		MISC::CLEAR_BIT(&Global_8683, 14);
		MISC::CLEAR_BIT(&Global_8683, 9);
		MISC::CLEAR_BIT(&Global_8683, 27);
		MISC::CLEAR_BIT(&Global_8683, 30);
		MISC::CLEAR_BIT(&Global_8684, 5);
		MISC::CLEAR_BIT(&Global_8684, 19);
		MISC::CLEAR_BIT(&Global_8684, 21);
		MISC::CLEAR_BIT(&Global_8684, 24);
		MISC::CLEAR_BIT(&Global_8684, 25);
		MISC::CLEAR_BIT(&Global_8684, 27);
		MISC::CLEAR_BIT(&Global_8684, 26);
		MISC::CLEAR_BIT(&Global_8685, 2);
		Global_2749459 = 0;
		iLocal_121 = 0;
	
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_10();
	
		SYSTEM::SETTIMERA(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_20811))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
			
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_85);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20794, Global_20733, Global_20734, Global_20735, Global_20736, 255, 255, 255, 255, 0);
				}
			
				if (SYSTEM::TIMERA() > 5000)
					SCRIPT::TERMINATE_THREAD(Global_20811);
			}
		}
	
		Global_20801 = false;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
			func_120(Global_20794, "SHUTDOWN_MOVIE");
	
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20794);
		Global_20779 = 0;
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
	
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (Global_2745629.f_1)
				if (Global_79248)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				else
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20802, true);
	
		func_117();
		func_115();
		Global_22179 = false;
		Global_4543262 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_10() // Position - 0x2494 Hash - 0xE32CF1EF ^0xB9A7BEB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9 || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}

	return;
}

void func_11() // Position - 0x24EB Hash - 0x53295875 ^0x53295875
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8683, 25);
	MISC::SET_BIT(&Global_8684, 11);
	return;
}

BOOL func_12(int iParam0) // Position - 0x2568 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x258A Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_14(iParam0, Global_43922);
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x259B Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

float func_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x277C Hash - 0x7D12D12A ^0x5CB36A2F
{
	var position;
	float num;
	float num2;
	float num3;

	if (Global_4543262 == 0)
	{
		if (IS_BIT_SET(Global_8683, 14) && Global_20813.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&position);
		
			if (Global_20766[Global_20758 /*3*/].f_1 == position.f_1)
				Global_4543262 = 1;
		}
	}

	if (func_74() && Global_4543262 == 0)
		return 2f;

	if (iLocal_16 == 0)
		iLocal_16 = MISC::GET_GAME_TIMER();

	num = func_17(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER() - iLocal_16) / fParam12, 0f, 1f);

	if (num < 1f)
	{
		num2 = num;
	
		if (bParam13)
		{
			num2 = num2 - 1f;
			num3 = 0.670158f;
			num2 = (num2 * num2 * (((num3 + 1f) * num2) + num3)) + 1f;
		}
		else
		{
			num2 = SYSTEM::SIN(num * 90f);
		}
	
		Global_20741 = { func_16(uParam0, uParam3, num2) };
		Global_20744 = { func_16(fParam6, fParam9, num2) };
	}
	else
	{
		Global_20741 = { uParam3 };
		Global_20744 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20744, 0);
	return num;
}

Vector3 func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x288B Hash - 0x2CB61ED2 ^0x2CB61ED2
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_17(float fParam0, float fParam1, float fParam2) // Position - 0x28A5 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_18() // Position - 0x28CC Hash - 0xED4B829 ^0xC9E2283A
{
	if (Global_20791 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20785, 0))
		{
			if (Global_79248 == false)
			{
				if (Global_21027)
				{
					if (Global_21026 == false)
					{
						Global_21026 = true;
						func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(2);
						func_19();
						func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
						Global_20793 = Global_20818;
					}
					else
					{
						Global_21026 = false;
						func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(1);
						func_19();
						func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
						Global_20793 = Global_20817;
					}
				}
			}
		}
	}

	return;
}

void func_19() // Position - 0x29A5 Hash - 0xAD86E876 ^0x19F58518
{
	if (Global_21027 == false)
	{
		func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8683, 17);
	}
	else if (Global_79248)
	{
		func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8683, 17);
	}
	else
	{
		if (Global_21026 == true)
			if (Global_20801)
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
			else
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
		else if (Global_20801)
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
		else
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
	
		MISC::SET_BIT(&Global_8683, 17);
	}

	return;
}

void func_20() // Position - 0x2A7E Hash - 0xFA51763C ^0xED97EB49
{
	if (IS_BIT_SET(Global_8684, 10) || iLocal_121 == 1)
	{
		Global_9290 = MISC::GET_GAME_TIMER();
		Global_9289 = 0;
		Global_20791 = true;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
		iLocal_72 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		bLocal_73 = true;
	}
	else if (Global_20791 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20782, 0))
		{
			if (iLocal_74 == 0)
			{
				Global_9290 = MISC::GET_GAME_TIMER();
				Global_9289 = 0;
				Global_20791 = true;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
				iLocal_72 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				bLocal_73 = true;
			}
		}
	}

	return;
}

void func_21() // Position - 0x2AFD Hash - 0x86D72257 ^0x67B568E5
{
	if (Global_20791 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20780, 1))
		{
			if (func_107(2092, -1) == 1)
			{
				if (Global_114370.f_14054[Global_20813 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_8684, 3))
					{
						if (!Global_20756)
						{
							if (!IS_BIT_SET(Global_4542983, 3))
							{
								if (!IS_BIT_SET(Global_8683, 14))
								{
									Global_20791 = true;
									MISC::SET_BIT(&Global_4542983, 3);
									func_22(3, 0, 1, false);
									Global_23225 = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_22(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2B74 Hash - 0x687B7981 ^0x511E81EC
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_79248 == false)
	{
		if (func_82(14))
		{
			if (Global_23225 == 2 || Global_23225 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (Global_20813.f_1 == 9)
		return 0;

	if (iParam2 == 0)
		if (func_6(0) == true)
			return 0;

	if (Global_20779 == 1)
		return 0;

	if (Global_20813.f_1 == 7)
		return 0;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20810))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20813.f_1 < 4)
			{
				func_23("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_20795)
	{
		SYSTEM::WAIT(0);
	}

	func_85();
	func_84();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
	{
		Global_9289 = 0;
		Global_20813.f_1 = 7;
		func_23(&(Global_8690[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
				Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
			Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8690[iParam0 /*15*/].f_5));
		return 1;
	}

	return 1;
}

void func_23(char* sParam0) // Position - 0x2CDA Hash - 0x68B96D20 ^0xE2CC02C7
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_24() // Position - 0x2CFA Hash - 0x31EA63CA ^0x44CE5358
{
	if (func_40())
	{
		if (func_62(FRONTEND_CONTROL, Global_20785, 0))
		{
			func_38();
			Global_20817 = Global_20793;
			func_35();
			return;
		}
	}

	if (Global_20792)
		if (SYSTEM::TIMERA() > 50)
			Global_20792 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[1])
					{
						func_33();
						Global_20793 = 1;
					}
					break;
			
				case 1:
					if (Global_9252[2])
					{
						func_33();
						Global_20793 = 2;
					}
					break;
			
				case 2:
					if (Global_9252[3])
					{
						func_33();
						func_31();
						Global_20793 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20793 = 4;
					}
					break;
			
				case 3:
					if (Global_9252[4])
					{
						func_33();
						Global_20793 = 4;
					}
					break;
			
				case 4:
					if (Global_9252[5])
					{
						func_33();
						Global_20793 = 5;
					}
					break;
			
				case 5:
					if (Global_9252[6])
					{
						func_33();
						func_31();
						Global_20793 = 6;
					}
					break;
			
				case 6:
					if (Global_9252[7])
					{
						func_33();
						Global_20793 = 7;
					}
					break;
			
				case 7:
					if (Global_9252[8])
					{
						func_33();
						Global_20793 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20793 = 0;
					}
					break;
			
				case 8:
					if (Global_9252[0])
					{
						func_33();
						func_31();
						Global_20793 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[8])
					{
						func_29();
						func_26();
						Global_20793 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20793 = 7;
					}
					break;
			
				case 1:
					if (Global_9252[0])
					{
						func_29();
						Global_20793 = 0;
					}
					else if (Global_9252[8])
					{
						func_26();
						func_33();
					}
					else
					{
						func_26();
					}
					break;
			
				case 2:
					if (Global_9252[1])
					{
						func_29();
						Global_20793 = 1;
					}
					break;
			
				case 3:
					if (Global_9252[2])
					{
						func_29();
						func_26();
						Global_20793 = 2;
					}
					break;
			
				case 4:
					if (Global_9252[3])
					{
						func_29();
						Global_20793 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_21030 = 1;
						Global_20793 = 2;
					}
					break;
			
				case 5:
					if (Global_9252[4])
					{
						func_29();
						Global_20793 = 4;
					}
					break;
			
				case 6:
					if (Global_9252[5])
					{
						func_26();
						func_29();
						Global_20793 = 5;
					}
					break;
			
				case 7:
					if (Global_9252[6])
					{
						func_29();
						Global_20793 = 6;
					}
					break;
			
				case 8:
					if (Global_9252[7])
					{
						func_29();
						Global_20793 = 7;
					}
					break;
			}
		}
	}

	if (Global_20792 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20788, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 2:
					if (Global_9252[0] == true)
					{
						Global_20793 = 0;
					}
					else
					{
						Global_20793 = 1;
						Global_21030 = 1;
					}
					break;
			
				case 5:
					Global_20793 = 3;
					break;
			
				case 6:
					Global_20793 = 7;
					break;
			
				case 7:
					if (Global_9252[Global_20793 + 1] == true)
					{
						Global_20793 = 8;
					}
					else
					{
						Global_20793 = 6;
						Global_21030 = 1;
					}
					break;
			
				case 8:
					Global_20793 = 6;
					break;
			
				default:
					Global_20793 = Global_20793 + 1;
					break;
			}
		
			if (Global_21030 == 1)
				func_29();
			else
				func_33();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20787, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					Global_20793 = 2;
					break;
			
				case 1:
					if (Global_9252[0] == true)
					{
						Global_20793 = 0;
					}
					else
					{
						Global_20793 = 2;
						Global_21030 = 1;
					}
					break;
			
				case 3:
					Global_20793 = 5;
					break;
			
				case 6:
					if (Global_9252[8] == true)
					{
						Global_20793 = 8;
					}
					else
					{
						Global_20793 = 7;
						Global_21030 = 1;
					}
					break;
			
				default:
					Global_20793 = Global_20793 - 1;
					break;
			}
		
			if (Global_21030 == 1)
				func_33();
			else
				func_29();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20789, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[6])
						Global_20793 = 6;
					break;
			
				case 1:
					if (Global_9252[7])
					{
						Global_20793 = 7;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 4;
					}
					break;
			
				case 2:
					if (Global_9252[8])
					{
						Global_20793 = 8;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 5;
					}
					break;
			
				case 3:
					if (Global_9252[0])
					{
						Global_20793 = 0;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 6;
					}
					break;
			
				case 4:
					if (Global_9252[1])
						Global_20793 = 1;
					break;
			
				case 5:
					if (Global_9252[2])
						Global_20793 = 2;
					break;
			
				case 6:
					if (Global_9252[3])
						Global_20793 = 3;
					break;
			
				case 7:
					if (Global_9252[4])
						Global_20793 = 4;
					break;
			
				case 8:
					if (Global_9252[5])
						Global_20793 = 5;
					break;
			}
		
			if (Global_21030 == 1)
				func_31();
			else
				func_26();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20790, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[3])
						Global_20793 = 3;
					break;
			
				case 1:
					if (Global_9252[4])
						Global_20793 = 4;
					break;
			
				case 2:
					if (Global_9252[5])
						Global_20793 = 5;
					break;
			
				case 3:
					if (Global_9252[6])
						Global_20793 = 6;
					break;
			
				case 4:
					if (Global_9252[7])
					{
						Global_20793 = 7;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 1;
					}
					break;
			
				case 5:
					if (Global_9252[8])
					{
						Global_20793 = 8;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 2;
					}
					break;
			
				case 6:
					if (Global_9252[0])
					{
						Global_20793 = 0;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 3;
					}
					break;
			
				case 7:
					if (Global_9252[1])
						Global_20793 = 1;
					break;
			
				case 8:
					if (Global_9252[2])
						Global_20793 = 2;
					break;
			}
		
			if (Global_21030 == 1)
				func_26();
			else
				func_31();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	if (Global_8690[23 /*15*/].f_10 == 57)
	{
		if (Global_20792 == true && Global_20793 == 8)
		{
			if (iLocal_123 == 0)
			{
				iLocal_123 = 1;
				func_25(12);
			}
		}
	}

	return;
}

void func_25(int iParam0) // Position - 0x3377 Hash - 0xF11EB1F3 ^0x618C6F9E
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2738587.f_5234.f_7[num], offset);
	return;
}

void func_26() // Position - 0x33A0 Hash - 0xE70DEC1F ^0xF47E1ADE
{
	func_113(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_27();
	return;
}

void func_27() // Position - 0x33DD Hash - 0xA6C955E7 ^0xAF2E403B
{
	if (func_28())
		if (Global_21030 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL func_28() // Position - 0x3400 Hash - 0xE8350107 ^0x112591EA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_79248)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4543261 || flag)
		return true;

	return true;
}

void func_29() // Position - 0x3447 Hash - 0x92BBCEAE ^0x5612118E
{
	func_113(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_30();
	return;
}

void func_30() // Position - 0x3484 Hash - 0x4CBD8394 ^0xE7121211
{
	if (func_28())
		if (Global_21030 == 0)
			MOBILE::CELL_SET_INPUT(3);
		else
			MOBILE::CELL_SET_INPUT(4);

	return;
}

void func_31() // Position - 0x34A7 Hash - 0x27F2007C ^0xD3D47445
{
	func_113(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_32();
	return;
}

void func_32() // Position - 0x34E4 Hash - 0x47667904 ^0x5056AC19
{
	if (func_28())
		if (Global_21030 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_33() // Position - 0x3507 Hash - 0xB44339D9 ^0xA34FAB0A
{
	func_113(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_34();
	return;
}

void func_34() // Position - 0x3544 Hash - 0x17AED8F8 ^0x7197C9FD
{
	if (func_28())
		if (Global_21030 == 0)
			MOBILE::CELL_SET_INPUT(4);
		else
			MOBILE::CELL_SET_INPUT(3);

	return;
}

void func_35() // Position - 0x3567 Hash - 0x91356320 ^0x78A05D11
{
	MISC::SET_BIT(&Global_8685, 9);
	func_37(10, "CELL_16" /*Settings*/, 0, "appSettings", 24, 1, 1, 0, 0);
	func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	for (iLocal_70 = 0; iLocal_70 < 9; iLocal_70 = iLocal_70 + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_70);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_36(&Global_8690[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	Global_9216[0] = 10;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[10 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_36(&Global_8690[10 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19();
	func_113(Global_20794, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_80();
	return;
}

void func_36(char* sParam0) // Position - 0x3681 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x3693 Hash - 0xC22558F4 ^0xA170BFDC
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8690[iParam0 /*15*/], sParam1, 16);
	Global_8690[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8690[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8690[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8690[iParam0 /*15*/].f_10 = iParam4;
	Global_8690[iParam0 /*15*/].f_11 = iParam5;
	Global_8690[iParam0 /*15*/].f_12 = iParam6;
	Global_8690[iParam0 /*15*/].f_13 = iParam7;
	Global_8690[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8690[iParam0 /*15*/].f_12 == 0)
		Global_8690[iParam0 /*15*/].f_12 = 0;

	if (Global_8690[iParam0 /*15*/].f_13 == 0)
		Global_8690[iParam0 /*15*/].f_13 = 0;

	if (Global_8690[iParam0 /*15*/].f_14 == 0)
		Global_8690[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_38() // Position - 0x3749 Hash - 0x457672CB ^0x3EB905B4
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20802, true);
		func_39();
	}

	return;
}

void func_39() // Position - 0x376F Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_28())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_40() // Position - 0x3783 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_41() // Position - 0x378C Hash - 0x8D23DA7E ^0x36653680
{
	if (func_62(FRONTEND_CONTROL, Global_20785, 0))
	{
		func_38();
		MISC::CLEAR_BIT(&Global_8685, 9);
		func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_83(1);
		func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
		func_80();
	}

	return;
}

void func_42() // Position - 0x37F6 Hash - 0x1D1C2FB2 ^0x75EDABA0
{
	if (Global_20792)
		if (SYSTEM::TIMERA() > 50)
			Global_20792 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20793)
			{
				case 6:
					if (Global_9252[7])
					{
						func_33();
						Global_20793 = 7;
					}
					break;
			
				case 7:
					if (Global_9252[6])
					{
						func_29();
						Global_20793 = 6;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20793)
			{
				case 6:
					if (Global_9252[7])
					{
						func_33();
						Global_20793 = 7;
					}
					break;
			
				case 7:
					if (Global_9252[6])
					{
						func_29();
						Global_20793 = 6;
					}
					break;
			}
		}
	}

	if (Global_20792 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20788, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 2:
					Global_20793 = 0;
					break;
			
				case 5:
					Global_20793 = 3;
					break;
			
				case 7:
					if (Global_9252[Global_20793 + 1] == true)
					{
						Global_20793 = 8;
					}
					else
					{
						Global_20793 = 6;
						Global_21030 = 1;
					}
					break;
			
				case 8:
					Global_20793 = 6;
					break;
			
				default:
					Global_20793 = Global_20793 + 1;
					break;
			}
		
			if (Global_21030 == 1)
				func_29();
			else
				func_33();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20787, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					Global_20793 = 2;
					break;
			
				case 3:
					Global_20793 = 5;
					break;
			
				case 6:
					if (Global_9252[8] == true)
					{
						Global_20793 = 8;
					}
					else
					{
						Global_20793 = 7;
						Global_21030 = 1;
					}
					break;
			
				default:
					Global_20793 = Global_20793 - 1;
					break;
			}
		
			if (Global_21030 == 1)
				func_33();
			else
				func_29();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_43() // Position - 0x39B4 Hash - 0x6E12A3FE ^0x492BB3F2
{
	if (Global_20792)
		if (SYSTEM::TIMERA() > 50)
			Global_20792 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[1])
					{
						func_33();
						Global_20793 = 1;
					}
					break;
			
				case 1:
					if (Global_9252[2])
					{
						func_33();
						Global_20793 = 2;
					}
					break;
			
				case 2:
					if (Global_9252[3])
					{
						func_33();
						func_31();
						Global_20793 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20793 = 4;
					}
					break;
			
				case 3:
					if (Global_9252[4])
					{
						func_33();
						Global_20793 = 4;
					}
					break;
			
				case 4:
					if (Global_9252[5])
					{
						func_33();
						Global_20793 = 5;
					}
					break;
			
				case 5:
					if (Global_9252[6])
					{
						func_33();
						func_31();
						Global_20793 = 6;
					}
					break;
			
				case 6:
					if (Global_9252[7])
					{
						func_33();
						Global_20793 = 7;
					}
					break;
			
				case 7:
					if (Global_9252[8])
					{
						func_33();
						Global_20793 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20793 = 0;
					}
					break;
			
				case 8:
					if (Global_9252[0])
					{
						func_33();
						func_31();
						Global_20793 = 0;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[8])
					{
						func_29();
						func_26();
						Global_20793 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20793 = 7;
					}
					break;
			
				case 1:
					if (Global_9252[0])
					{
						func_29();
						Global_20793 = 0;
					}
					break;
			
				case 2:
					if (Global_9252[1])
					{
						func_29();
						Global_20793 = 1;
					}
					break;
			
				case 3:
					if (Global_9252[2])
					{
						func_29();
						func_26();
						Global_20793 = 2;
					}
					break;
			
				case 4:
					if (Global_9252[3])
					{
						func_29();
						Global_20793 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_21030 = 1;
						Global_20793 = 2;
					}
					break;
			
				case 5:
					if (Global_9252[4])
					{
						func_29();
						Global_20793 = 4;
					}
					break;
			
				case 6:
					if (Global_9252[5])
					{
						func_26();
						func_29();
						Global_20793 = 5;
					}
					break;
			
				case 7:
					if (Global_9252[6])
					{
						func_29();
						Global_20793 = 6;
					}
					break;
			
				case 8:
					if (Global_9252[7])
					{
						func_29();
						Global_20793 = 7;
					}
					break;
			}
		}
	}

	if (Global_20792 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20788, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 2:
					Global_20793 = 0;
					break;
			
				case 5:
					Global_20793 = 3;
					break;
			
				case 7:
					if (Global_9252[Global_20793 + 1] == true)
					{
						Global_20793 = 8;
					}
					else
					{
						Global_20793 = 6;
						Global_21030 = 1;
					}
					break;
			
				case 8:
					Global_20793 = 6;
					break;
			
				default:
					Global_20793 = Global_20793 + 1;
					break;
			}
		
			if (Global_21030 == 1)
				func_29();
			else
				func_33();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20787, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					Global_20793 = 2;
					break;
			
				case 3:
					Global_20793 = 5;
					break;
			
				case 6:
					if (Global_9252[8] == true)
					{
						Global_20793 = 8;
					}
					else
					{
						Global_20793 = 7;
						Global_21030 = 1;
					}
					break;
			
				default:
					Global_20793 = Global_20793 - 1;
					break;
			}
		
			if (Global_21030 == 1)
				func_33();
			else
				func_29();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20789, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[6])
						Global_20793 = 6;
					break;
			
				case 1:
					if (Global_9252[7])
						Global_20793 = 7;
					break;
			
				case 2:
					if (Global_9252[8])
					{
						Global_20793 = 8;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 5;
					}
					break;
			
				case 3:
					if (Global_9252[0])
						Global_20793 = 0;
					break;
			
				case 4:
					if (Global_9252[1])
						Global_20793 = 1;
					break;
			
				case 5:
					if (Global_9252[2])
						Global_20793 = 2;
					break;
			
				case 6:
					if (Global_9252[3])
						Global_20793 = 3;
					break;
			
				case 7:
					if (Global_9252[4])
						Global_20793 = 4;
					break;
			
				case 8:
					if (Global_9252[5])
						Global_20793 = 5;
					break;
			}
		
			if (Global_21030 == 1)
				func_31();
			else
				func_26();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20790, 0))
		{
			Global_21030 = 0;
		
			switch (Global_20793)
			{
				case 0:
					if (Global_9252[3])
						Global_20793 = 3;
					break;
			
				case 1:
					if (Global_9252[4])
						Global_20793 = 4;
					break;
			
				case 2:
					if (Global_9252[5])
						Global_20793 = 5;
					break;
			
				case 3:
					if (Global_9252[6])
						Global_20793 = 6;
					break;
			
				case 4:
					if (Global_9252[7])
						Global_20793 = 7;
					break;
			
				case 5:
					if (Global_9252[8])
					{
						Global_20793 = 8;
					}
					else
					{
						Global_21030 = 1;
						Global_20793 = 2;
					}
					break;
			
				case 6:
					if (Global_9252[0])
						Global_20793 = 0;
					break;
			
				case 7:
					if (Global_9252[1])
						Global_20793 = 1;
					break;
			
				case 8:
					if (Global_9252[2])
						Global_20793 = 2;
					break;
			}
		
			if (Global_21030 == 1)
				func_26();
			else
				func_31();
		
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_44() // Position - 0x3F46 Hash - 0x52B4545C ^0x227ACE69
{
	int num;
	Vehicle vehiclePedIsIn;
	char* str;

	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_72))
	{
		bLocal_73 = false;
		iLocal_71 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_72);
	
		if (Global_21026 == false)
			Global_20817 = iLocal_71;
		else
			Global_20818 = iLocal_71;
	
		if (iLocal_71 < 0)
			iLocal_71 = 0;
	
		Global_20816 = Global_9216[iLocal_71];
	
		if (IS_BIT_SET(Global_8684, 10))
		{
			Global_20816 = 2;
			MISC::CLEAR_BIT(&Global_8684, 10);
		}
	
		if (iLocal_121 == 1)
		{
			Global_20817 = 1;
			Global_20816 = 0;
			Global_2749459 = 0;
			iLocal_121 = 0;
		}
	
		num = 0;
	
		if (Global_79248)
			Global_20816 == 24 && func_40();
	
		if (SCRIPT::IS_THREAD_ACTIVE(Global_20811))
			num = 1;
	
		if (Global_20816 == 3)
		{
			if (IS_BIT_SET(Global_8684, 3))
			{
				num = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || GRAPHICS::GET_USINGNIGHTVISION())
					num = 1;
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == false)
						num = 1;
				
					vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0f)
						num = 1;
				}
			
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
					num = 1;
			
				if (Global_79248)
				{
					if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_112, true);
					
						if (iLocal_112 != joaat("WEAPON_UNARMED"))
							num = 1;
					}
				}
			}
		}
	
		if (Global_20816 == 2)
			if (IS_BIT_SET(Global_8684, 6))
				num = 1;
	
		if (Global_20816 == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8690[Global_20816 /*15*/], "CELL_BENWEB" /*Benny's*/))
			if (IS_BIT_SET(Global_8684, 6))
				num = 1;
	
		if (Global_79248)
		{
			if (Global_20816 == 15 || Global_20816 == 5)
			{
			}
			else
			{
				if (Global_20816 == 23)
				{
					IS_BIT_SET(Global_4542983, 4) == false && Global_1836171 == false && IS_BIT_SET(Global_4542983, 20) == false && IS_BIT_SET(Global_4542983, 22) == false;
				
					if (IS_BIT_SET(Global_4542983, 20) == true && IS_BIT_SET(Global_4542983, 4) == false && Global_1836171 == false && IS_BIT_SET(Global_4542983, 22) == false && IS_BIT_SET(Global_4542983, 26) == false)
					{
						num = 1;
						MISC::SET_BIT(&Global_4542983, 21);
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						if (Global_20816 == 3)
							num = 1;
			
				if (Global_76368 && Global_20816 == 2)
				{
					num = 1;
					str = func_47();
				
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
						_DISPLAY_HELP_TEXT(str, -1);
				}
			
				if (func_122())
				{
					if (Global_20816 == 10)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/))
							_DISPLAY_HELP_TEXT("FIX_MPCHAR_BLCK" /*This app is currently unavailable. Please try again later.*/, -1);
					
						num = 1;
					}
				}
			
				if (num == 0)
				{
					func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8683, 17);
					Global_20813.f_1 = 7;
				
					if (IS_BIT_SET(Global_8683, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_8690[Global_20816 /*15*/].f_5));
						MISC::SET_BIT(&Global_8683, 23);
					}
				}
				else
				{
					Global_20816 == 2 || Global_20816 == 3;
					func_45();
				}
			}
		}
		else
		{
			switch (Global_20816)
			{
				case 3:
					if (Global_113423 == true)
						num = 1;
					break;
			
				case 8:
					num = 1;
					break;
			
				case 15:
					num = 1;
					break;
			
				case 16:
					num = 1;
					MISC::SET_BIT(&Global_8683, 26);
					break;
			
				case 5:
					num = 1;
					break;
			
				case 20:
					num = 1;
				
					if (Global_21028 == 0)
					{
						if (Global_8687 == 0 && iLocal_74 == 0 && Global_43922 == 15)
						{
							iLocal_74 = 1;
							func_38();
							!Global_114370.f_14054.f_85;
						}
					}
					else
					{
						func_45();
					}
					break;
			
				default:
					break;
			}
		
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
				if (Global_20816 != 0)
					num = 1;
		
			if (func_82(14))
				if (Global_20816 != 3 && Global_20816 != 14)
					num = 1;
		
			if (num == 0)
			{
				func_38();
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
				Global_20813.f_1 = 7;
			
				if (IS_BIT_SET(Global_8683, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8690[Global_20816 /*15*/].f_5));
					MISC::SET_BIT(&Global_8683, 23);
				}
			}
			else if (Global_20816 != 20)
			{
				if (Global_114370.f_14054.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_20816 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									_DISPLAY_HELP_TEXT("CELL_38" /*You cannot use the Snapmatic application while in cover.*/, -1);
									Global_114370.f_14054.f_86 = 1;
								}
							}
						}
					}
				}
			
				func_45();
			}
		}
	}

	return;
}

void func_45() // Position - 0x4437 Hash - 0xD1E0EACF ^0x6F174F5D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20802, true);

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x4459 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_47() // Position - 0x446C Hash - 0x306ACA3A ^0x7BE81829
{
	return "BLOCK_APP_WEB" /*The Internet app is currently unavailable. Please try again later.*/;
}

void func_48() // Position - 0x4478 Hash - 0x54943C34 ^0x54943C34
{
	if (Global_20779 == 0)
	{
		if (func_15(Global_20766[Global_20758 /*3*/], Global_20759[Global_20758 /*3*/], Global_20773, Global_20773, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8684, 24);
			MISC::SET_BIT(&Global_8684, 26);
		}
	}

	return;
}

void func_49() // Position - 0x44C9 Hash - 0xAE56A861 ^0xAE56A861
{
	if (Global_20779 == 0)
	{
		if (func_15(Global_20759[Global_20758 /*3*/], Global_20766[Global_20758 /*3*/], Global_20773, Global_20773, 350f, true) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8684, 25);
		
			if (Global_22179)
				MISC::CLEAR_BIT(&Global_8684, 27);
		}
	}

	return;
}

void func_50() // Position - 0x4520 Hash - 0x7FD51E78 ^0x7FD51E78
{
	if (Global_20779 == 0 && Global_20753 == 0)
	{
		if (func_15(Global_20766[Global_20758 /*3*/], Global_20759[Global_20758 /*3*/], Global_20773, Global_20773, 350f, false) >= 1f)
		{
			iLocal_16 = 0;
			Global_4543262 = 0;
		}
	}

	return;
}

void func_51() // Position - 0x456F Hash - 0x7E00FF0B ^0x32944E5A
{
	float num;
	float num2;

	if (IS_BIT_SET(Global_8685, 2))
	{
		MISC::SET_BIT(&Global_8684, 8);
		MISC::SET_BIT(&Global_8683, 14);
		Global_20753 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20773, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		num = func_15(Global_20759[Global_20758 /*3*/], Global_20766[Global_20758 /*3*/], Global_20776, Global_20773, 450f, true);
	
		if (num >= 1f)
		{
			MISC::SET_BIT(&Global_8684, 8);
			MISC::SET_BIT(&Global_8683, 14);
			Global_20753 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8685, 2);
			iLocal_81 = 0;
		}
		else if (num >= 0.75f)
		{
			MISC::SET_BIT(&Global_8684, 8);
		}
	}
	else
	{
		if (iLocal_81 == 0)
		{
			fLocal_82 = { Global_20766[Global_20758 /*3*/] };
			fLocal_82 = fLocal_82 - 10f;
			fLocal_82.f_1 = fLocal_82.f_1 + 20f;
			iLocal_81 = 1;
		}
	
		num2 = func_15(Global_20759[Global_20758 /*3*/], fLocal_82, -90f, 0f, 90f, -90f, 0f, 90f, 450f, true);
	
		if (num2 >= 1f)
		{
			MISC::SET_BIT(&Global_8684, 8);
			MISC::SET_BIT(&Global_8683, 14);
			Global_20753 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8685, 2);
			iLocal_81 = 0;
		}
		else if (num2 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8684, 8);
		}
	}

	return;
}

void func_52() // Position - 0x46C2 Hash - 0x75DBCED5 ^0x5D365EDF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_106 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_105);
	}
	else
	{
		iLocal_101 = MISC::GET_GAME_TIMER();
		iLocal_106 = iLocal_101 - iLocal_100;
	}

	if (iLocal_106 > 4000)
	{
		iLocal_88 = func_104();
		AUDIO::IS_MOBILE_PHONE_CALL_ONGOING();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_105 = NETWORK::GET_NETWORK_TIME();
		else
			iLocal_100 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_53() // Position - 0x4718 Hash - 0xF966873F ^0xF966873F
{
	if (Global_20812 == 1)
	{
		func_121();
	
		if (Global_20791 == false)
		{
			if (func_62(FRONTEND_CONTROL, Global_20783, 0))
			{
				if (IS_BIT_SET(Global_8684, 8))
				{
					if (Global_22213 == false)
					{
						func_45();
						Global_20791 = true;
						Global_20812 = 3;
						Global_22215 = 1;
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
	
		if (Global_20791 == false)
		{
			if (func_62(FRONTEND_CONTROL, Global_20782, 0))
			{
				if (IS_BIT_SET(Global_8684, 8))
				{
					func_38();
					Global_20791 = true;
					Global_20812 = 2;
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				
					func_59();
					func_58();
				}
			}
		}
	}
	else
	{
		if (iLocal_98 == 0)
		{
			if (IS_BIT_SET(Global_8683, 27))
			{
				iLocal_98 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_20813.f_1 > 3)
				if (SYSTEM::TIMERB() > 1500)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
							if (Global_20756)
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							else if (!IS_BIT_SET(Global_8685, 5))
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
		
			if (!IS_BIT_SET(Global_8683, 27))
			{
				iLocal_98 = 0;
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	
		if (Global_20812 == 0)
		{
			if (Global_20791 == false)
			{
				if (func_62(FRONTEND_CONTROL, Global_20781, 0) || Global_2749459 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (IS_BIT_SET(Global_8684, 8))
							{
								switch (Global_20813.f_1)
								{
									case 3:
										break;
								
									case 4:
										break;
								
									case 6:
										if (Global_21025 == false)
										{
											if (Global_21026 == true)
											{
												func_45();
												Global_21026 = false;
												func_113(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_85();
												func_84();
												func_83(1);
												func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_20802, true);
											
												iLocal_16 = 0;
												Global_20813.f_1 = 3;
											}
										}
										break;
								
									case 5:
										Global_20813.f_1 = 3;
										break;
								
									case 7:
										IS_BIT_SET(Global_8683, 23) == true;
									
										if (Global_9291 - Global_9290 > Global_9292 && IS_BIT_SET(Global_8683, 23) == false)
										{
											if (IS_BIT_SET(Global_8684, 0))
											{
											}
											else
											{
												func_45();
												Global_9289 = 1;
												Global_20813.f_1 = 6;
											
												if (Global_79248)
													func_113(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543259), -1082130432, -1082130432, -1082130432, -1082130432);
											
												Global_8686 = 99;
											
												if (Global_2749459 == 0)
													func_54();
											}
										}
										break;
								
									case 8:
										break;
								
									case 10:
										if (Global_7998 == CHAR_CHAT_CALL)
										{
											if (Global_2745629.f_1 || IS_BIT_SET(Global_8684, 20))
											{
												func_45();
												func_76();
											}
										}
										else
										{
											func_45();
											func_76();
											Global_22215 = 1;
										}
										break;
								
									case 9:
										if (Global_22166 == 0)
											Global_20813.f_1 = 3;
										break;
								
									default:
										break;
								}
							
								if (Global_2749459 == 1)
								{
									iLocal_121 = 1;
									Global_2749459 = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_54() // Position - 0x4A45 Hash - 0xC0EDC8FD ^0xA0778517
{
	var unk;

	if (Global_20796 == 1)
		return;

	if (Global_20813.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		if (Global_79248)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_20813.f_1)
	{
		case 6:
			func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_83(Global_9288);
		
			if (Global_9288 == 1)
			{
				func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20817;
			}
			else
			{
				func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20818;
			}
		
			if (Global_20801)
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21027 == false)
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else if (Global_79248)
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else
			{
				if (Global_21026 == true)
					if (Global_20801)
						func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20801)
					func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_8683, 17);
			}
		
			if (Global_79248)
			{
				func_80();
				MISC::CLEAR_BIT(&Global_8685, 9);
				func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_113(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_81(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20812 == 1)
			{
				func_106();
				func_113(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300" /*CHAR_DEFAULT*/);
					func_36("CELL_217" /*INCOMING CALL*/);
					func_36("CELL_217" /*INCOMING CALL*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_57(Global_7998, Global_20813) == 0)
				{
					func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
			
				func_113(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22166 == 4 || Global_22166 == 3)
			{
				func_113(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_106();
			
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300" /*CHAR_DEFAULT*/);
					func_36("CELL_219" /*CONNECTED*/);
					func_36("CELL_219" /*CONNECTED*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22424)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_57(Global_7998, Global_20813) == 0)
					{
						func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_113(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), &unk, &(Global_2139[Global_7998 /*29*/].f_3), 0);
					}
				}
			
				func_113(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_55();
			break;
	
		default:
			break;
	}

	return;
}

void func_55() // Position - 0x5018 Hash - 0x94709EF9 ^0x4FD337F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		func_56();
	
		if (Global_20812 == 1)
		{
			if (Global_20801)
				func_81(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_81(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22213)
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8683, 20))
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20801)
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else
		{
			func_81(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_56() // Position - 0x5199 Hash - 0x697A4120 ^0x745FE124
{
	if (Global_79248)
	{
		func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8683, 17);
	}

	return;
}

int func_57(eCharacter echParam0, eCharacter echParam1) // Position - 0x51C9 Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_24[echParam1];
}

void func_58() // Position - 0x51F3 Hash - 0x3DE2499A ^0x55EE22D9
{
	if (Global_22179)
	{
		if (Global_79248)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2738587.f_1832), 15);
				}
			}
		}
	}

	return;
}

void func_59() // Position - 0x5242 Hash - 0x9CA1F021 ^0x5B209066
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		if (!Global_22174)
		{
			func_81(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_22179)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_36("CELL_300" /*CHAR_DEFAULT*/);
				func_36("CELL_219" /*CONNECTED*/);
				func_36("CELL_219" /*CONNECTED*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_57(Global_7998, Global_20813) == 0)
			{
				func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_219" /*CONNECTED*/, "CELL_195" /*Unknown*/, 0);
			}
			else
			{
				func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_219" /*CONNECTED*/, &(Global_2139[Global_7998 /*29*/].f_3), 0);
			}
		}
	
		func_113(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_60() // Position - 0x53EF Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21032 = 0;
	func_61();
	return;
}

void func_61() // Position - 0x53FF Hash - 0xB0D09B77 ^0xCD98BAF0
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20812 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23177 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = Global_20815;
		return;
	}

	return;
}

BOOL func_62(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x5436 Hash - 0xBB00BE4E ^0xA27687FD
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

BOOL func_63() // Position - 0x54A8 Hash - 0x9E06F5B4 ^0x7950556C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
		return true;

	return false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x54C5 Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

void func_65(int iParam0) // Position - 0x54ED Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_67())
		return;

	if (Global_21025)
		if (func_7())
			func_5(true, true);
		else
			func_5(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		MISC::SET_BIT(&Global_8684, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22166 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8683, 30);
	else
		MISC::CLEAR_BIT(&Global_8683, 30);

	if (!func_66())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_66() // Position - 0x5577 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

BOOL func_67() // Position - 0x559E Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1956030, 19);
}

void func_68() // Position - 0x55AD Hash - 0xF8FE2348 ^0xA77911B2
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = 0;
		Global_22215 = 1;
	}

	return;
}

void func_69() // Position - 0x55D6 Hash - 0xE3E059E8 ^0xA4F17C
{
	int num;
	int num2;
	int pedPropIndex;

	num = 0;
	num2 = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_77() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			num2 = 1;

	if (!Global_79248)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && num2 == 0)
		{
			pedPropIndex = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
		
			if (Global_79248)
				if (pedPropIndex == 15 || pedPropIndex == 16 || pedPropIndex == 17 || pedPropIndex == 18 || pedPropIndex == 19 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					num = 1;
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				num = 1;
		
			if (!Global_20756)
			{
				if (Global_7998 != _CHAR_DETONATEBOMB_2)
				{
					if (num == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_79248)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
							
								MISC::SET_BIT(&Global_8683, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_70() // Position - 0x56FA Hash - 0x3F949401 ^0xDDE062DB
{
	if (IS_BIT_SET(Global_8683, 14) && Global_4543262 == 0 && Global_20753 == 0)
	{
		if (func_75())
		{
		}
		else
		{
			func_71();
		}
	
		if (Global_20813.f_1 == 9)
			if (Global_22179 == false)
				bLocal_75 = true;
	}

	return;
}

void func_71() // Position - 0x5742 Hash - 0x4E1AB757 ^0x5CCDF7AE
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_20766[Global_20758 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_20753 = 1;
	}

	return;
}

void func_72() // Position - 0x5769 Hash - 0xFC84DADE ^0x408F7A0C
{
	if (IS_BIT_SET(Global_8683, 14) && Global_4543262 == 0 && Global_20753 == 0)
	{
		if (bLocal_75 == false)
		{
			if (IS_BIT_SET(Global_8684, 26))
			{
				MISC::CLEAR_BIT(&Global_8684, 24);
				MISC::CLEAR_BIT(&Global_8684, 25);
				MISC::CLEAR_BIT(&Global_8684, 27);
				MISC::CLEAR_BIT(&Global_8684, 26);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						func_71();
					else if (func_74() == false)
						func_71();
			}
		}
	
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			if (func_74())
				func_73();
		}
		else if (func_75())
		{
		}
		else if (func_74())
		{
			func_73();
		}
	
		if (Global_20813.f_1 == 9)
			if (Global_22179 == false)
				bLocal_75 = true;
	}

	return;
}

void func_73() // Position - 0x583F Hash - 0x6CD9D5B7 ^0x3134360C
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_20759[Global_20758 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_4543262 = 1;
	}

	return;
}

BOOL func_74() // Position - 0x5867 Hash - 0xA4B50453 ^0xAB3B9EF5
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
			if (Global_20756 == false)
				if (Global_7998 != _CHAR_DETONATEBOMB_2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_22166 != 2;
	
		if (func_82(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919171))
			return false;
	
		if (Global_113418)
			return false;
	}

	if (Global_79248)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON && camActiveViewModeContext == ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		num = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("seashark") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("seashark2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("submersible2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("toro"))
					num = 0;
			}
		}
	}

	if (Global_4543261 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114370.f_14054.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_75() // Position - 0x5AB0 Hash - 0x9E06F5B4 ^0xC825B580
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		return true;

	return false;
}

void func_76() // Position - 0x5ACD Hash - 0xFFA5CCBC ^0x5FF4415
{
	if (!Global_79248)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_8683, 11))
			{
				if (!Global_20756)
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
			
				if (Global_79248)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
			
				MISC::CLEAR_BIT(&Global_8683, 11);
			}
		}
	}

	return;
}

BOOL func_77() // Position - 0x5B34 Hash - 0xF99F1C42 ^0xCC7DF7CD
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x5B58 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_79() // Position - 0x5B6F Hash - 0xE38952B5 ^0xB23F8926
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_85);
	iLocal_85 == -1;
	return;
}

void func_80() // Position - 0x5B83 Hash - 0x2E4D7C19 ^0x4F7EE11F
{
	if (Global_79248)
	{
		if (func_40() == false)
			return;
	
		func_81(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8683, 17);
	}

	return;
}

void func_81(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x5BBE Hash - 0x39E054FF ^0x41D02682
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_36(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_36(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_36(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_36(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_36(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_82(int iParam0) // Position - 0x5C71 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43922 == iParam0;
}

void func_83(int iParam0) // Position - 0x5C7F Hash - 0xEDE59C89 ^0xEDE59C89
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_23234 = 0;
	Global_9288 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9252[i] = false;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_82(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8690[num /*15*/].f_11)
				{
					if (i == Global_8690[num /*15*/].f_4)
					{
						if (Global_9252[i] == false)
						{
							Global_9216[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8684, 3))
								{
									value = 42;
									Global_21029 = 1;
								}
								else
								{
									value = 255;
									Global_21029 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8690[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2695946)
								if (num == 14)
									func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
						
							Global_9252[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8690[num /*15*/].f_11)
				{
					if (i == Global_8690[num /*15*/].f_4)
					{
						if (Global_9252[i] == false)
						{
							Global_9216[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114370.f_14144[j /*104*/].f_24 != 0)
										if (Global_114370.f_14144[j /*104*/].f_28 == 0)
											if (Global_114370.f_14144[j /*104*/].f_99[Global_20813] == 1)
												Global_23234 = Global_23234 + 1;
								}
							
								func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79248)
								{
									value2 = 0;
									value2 = Global_4541717;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541718[k /*104*/].f_24 != 0)
											if (Global_4541718[k /*104*/].f_28 == 0)
												if (Global_4541718[k /*104*/].f_99[Global_20813] == 1)
													value2 = value2 + 1;
									}
								
									func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case CHAR_MICHAEL:
											value3 = Global_45133;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45134;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45135;
											break;
									
										default:
											break;
									}
								
									func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8690[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8689);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8684, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8690[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8684, 3))
								{
									value5 = 42;
									Global_21029 = 1;
								}
								else
								{
									value5 = 255;
									Global_21029 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8690[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8690[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8690[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8684, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8690[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8690[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1881898.f_1;
								func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_81(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9252[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_84() // Position - 0x6219 Hash - 0x27D4231F ^0xAF2142F1
{
	if (Global_79248 == false)
	{
		Global_8690[14 /*15*/].f_4 = -99;
		Global_8690[4 /*15*/].f_4 = -99;
	
		if (Global_2695946)
		{
			if (func_82(14))
			{
				func_37(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_37(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_37(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_37(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_85() // Position - 0x62A7 Hash - 0x5BBDBFC7 ^0x21A4F70B
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8690[i /*15*/].f_4 = -99;
	}

	if (Global_79248 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_86(num2, Global_20813) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_37(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_43922 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8688 == 0)
		{
			func_37(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 0;
			Global_8689 = 255;
		}
		else
		{
			func_37(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 1;
			Global_8689 = 42;
		}
	
		if (num == 1)
			func_37(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_37(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_37(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114370.f_14054.f_89 == true)
			func_37(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114370.f_14054.f_88 == 1)
			func_37(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_37(25, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_37(27, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_37(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_37(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_37(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_37(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
		func_37(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542983, 4) == true)
			func_37(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_37(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_37(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_37(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_37(23, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_37(24, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_37(25, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_37(26, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_37(27, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_37(33, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4542983, 4) == true)
			if (Global_1836171)
				func_37(23, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 20) == true)
				func_37(23, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 22) == true)
				func_37(23, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 26) == true)
				if (func_122())
					func_37(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_37(23, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542983, 4) == false && Global_1836171 == false && IS_BIT_SET(Global_4542983, 20) == false && IS_BIT_SET(Global_4542983, 22) == false && IS_BIT_SET(Global_4542983, 26) == false)
			if (func_122())
				func_37(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_37(23, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

int func_86(int iParam0, eCharacter echParam1) // Position - 0x6857 Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[iParam0 /*29*/].f_19[echParam1];
}

BOOL func_87(int iParam0) // Position - 0x6881 Hash - 0x6FA42958 ^0xA1653597
{
	int num;

	iParam0 == 1;

	if (iParam0 == 0)
		if (func_90() == 0)
			return false;

	if (func_88(&num) && MISC::GET_PROFILE_SETTING(903) == 1)
		return true;

	if (!func_88(&num))
		if (num == 6)
			return true;
		else if (num == 7)
			return true;
		else if (num == 8)
			return true;
		else if (num == 10)
			return true;
		else if (num == 12)
			return true;
		else if (num == 13)
			return true;
		else if (num == 11)
			return true;

	return false;
}

BOOL func_88(int* piParam0) // Position - 0x6924 Hash - 0xC34CCBA6 ^0x27444525
{
	if (func_89())
	{
		*piParam0 = 11;
		return true;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}

BOOL func_89() // Position - 0x6942 Hash - 0x21D64237 ^0x21D64237
{
	return Global_33106;
}

int func_90() // Position - 0x694D Hash - 0xC9821971 ^0xCAB6B80C
{
	if (IS_PLAYSTATION_PLATFORM())
	{
		if (!NETWORK::NETWORK_IS_NP_AVAILABLE())
		{
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
				return 0;
		}
	}

	return 1;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x6995 Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_92() // Position - 0x69AB Hash - 0xC9639F4 ^0x2D4859DA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_114 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));

	switch (iLocal_114)
	{
		case 0:
			iLocal_89 = 5;
			break;
	
		case 1:
			iLocal_89 = 5;
			break;
	
		case 2:
			iLocal_89 = 4;
			break;
	
		case 3:
			iLocal_89 = 4;
			break;
	
		case 4:
			iLocal_89 = 3;
			break;
	
		case 5:
			iLocal_89 = 2;
			break;
	
		default:
			iLocal_89 = 3;
			break;
	}

	iLocal_115 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);

	if (iLocal_115 < 2)
		if (iLocal_89 > 2)
			iLocal_89 = iLocal_89 - 1;

	if (bLocal_116 == true || func_93())
		iLocal_89 = 0;

	func_113(Global_20794, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_88), SYSTEM::TO_FLOAT(iLocal_89), -1082130432, -1082130432, -1082130432);
	return;
}

BOOL func_93() // Position - 0x6A7B Hash - 0x650CF115 ^0x4665B089
{
	eCharacter character;
	var entityCoords;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (func_98(character))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			for (i = 0; i < Global_114370.f_7691.f_136; i = i + 1)
			{
				if (IS_BIT_SET(Global_114370.f_7691[i /*15*/].f_2, character))
					if (func_96(entityCoords, func_97(i)))
						return true;
			}
		
			for (i = 0; i < Global_114370.f_7691.f_764; i = i + 1)
			{
				if (IS_BIT_SET(Global_114370.f_7691.f_651[i /*14*/].f_2, character))
					if (func_96(entityCoords, func_95(i)))
						return true;
			}
		
			for (i = 0; i < Global_114370.f_7691.f_866; i = i + 1)
			{
				if (IS_BIT_SET(Global_114370.f_7691.f_765[i /*10*/].f_2, character))
					if (func_96(entityCoords, func_94(i)))
						return true;
			}
		}
	}

	return false;
}

int func_94(int iParam0) // Position - 0x6B7B Hash - 0xC69036C ^0x85EF2DFF
{
	return Global_114370.f_7691.f_765[iParam0 /*10*/].f_7;
}

int func_95(int iParam0) // Position - 0x6B93 Hash - 0xC69036C ^0x85EF2DFF
{
	return Global_114370.f_7691.f_651[iParam0 /*14*/].f_7;
}

BOOL func_96(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x6BAB Hash - 0x8FDDEC66 ^0x335C0812
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_43923)
			return false;
	
		if (SYSTEM::VDIST2(vParam0, Global_43923[iParam3 /*5*/]) <= Global_43923[iParam3 /*5*/].f_3 * Global_43923[iParam3 /*5*/].f_3)
			return true;
		else if (Global_43923[iParam3 /*5*/].f_4 != -1)
			return func_96(vParam0, Global_43923[iParam3 /*5*/].f_4);
	}

	return false;
}

int func_97(int iParam0) // Position - 0x6C16 Hash - 0xEA791A51 ^0x566D0A18
{
	return Global_114370.f_7691[iParam0 /*15*/].f_7;
}

BOOL func_98(eCharacter echParam0) // Position - 0x6C2B Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6C37 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_100();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_100() // Position - 0x6C50 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_98(character) && !func_82(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_98(Global_114370.f_2366.f_539.f_4321))
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
			
				Global_114370.f_2366.f_539.f_4323 = character;
				Global_114370.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_114370.f_2366.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x6D4D Hash - 0xAC4E9801 ^0xB379A75F
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6D8A Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_98(character))
		return func_103(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_103(eCharacter echParam0) // Position - 0x6DAF Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2139[echParam0 /*29*/];
}

int func_104() // Position - 0x6DBE Hash - 0x9ADB3117 ^0x14EFBA7F
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	return Global_114370.f_14054[Global_20813 /*20*/].f_8;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x6DD8 Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_106() // Position - 0x6DEF Hash - 0x8961A3BB ^0x93F6EC7D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813 == CHAR_MICHAEL)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20813 == CHAR_FRANKLIN)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20813 == CHAR_TREVOR)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20813 == CHAR_MULTIPLAYER)
		{
			switch (Global_4543259)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

int func_107(int iParam0, int iParam1) // Position - 0x7066 Hash - 0x744E461C ^0x94D7C845
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14626)
	{
		statHash = func_108(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_108(int iParam0, int iParam1) // Position - 0x7095 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_109(iParam1));
}

int func_109(int iParam0) // Position - 0x70AA Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_110();
	
		if (num2 > -1)
		{
			Global_2750546 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750546 = 1;
		}
	}

	return num;
}

int func_110() // Position - 0x70DE Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574925;
}

void func_111() // Position - 0x70EA Hash - 0x2D2267F2 ^0x7E6EC045
{
	if (func_82(14))
	{
		if (Global_2695946)
		{
			if (Global_20813.f_1 == 6)
			{
				if (Global_20793 == 7)
				{
					func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_20793 = 6;
					func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_20813.f_1 == 6)
		{
			func_113(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}

	iLocal_91 = CLOCK::GET_CLOCK_MINUTES();

	if (iLocal_91 != Global_8686)
	{
		Global_8686 = iLocal_91;
		iLocal_90 = CLOCK::GET_CLOCK_HOURS();
		iLocal_92 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	
		switch (iLocal_92)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_920" /*Sun*/, 16);
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_921" /*Mon*/, 16);
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_922" /*Tue*/, 16);
				break;
		
			case 3:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_923" /*Wed*/, 16);
				break;
		
			case 4:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_924" /*Thu*/, 16);
				break;
		
			case 5:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_925" /*Fri*/, 16);
				break;
		
			case 6:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_926" /*Sat*/, 16);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_206" /*BACK*/, 16);
				break;
		}
	
		func_81(Global_20794, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_90), SYSTEM::TO_FLOAT(iLocal_91), -1f, -1f, -1f, &uLocal_93, 0, 0, 0, 0);
	
		if (Global_20756 == false)
			func_92();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			iLocal_99 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}

	return;
}

void func_112() // Position - 0x726A Hash - 0x5781E9C3 ^0xDD1830DE
{
	if (Global_79248)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_20756)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_20813)
		{
			case CHAR_MICHAEL:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		
			case CHAR_TREVOR:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
		
			case CHAR_FRANKLIN:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		}
	}

	Global_20776 = { -90f, -130f, 0f };

	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_20758 = 0;
		Global_20759[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f, -113f };
		Global_20766[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f, -113f };
	}
	else
	{
		Global_20758 = 0;
		Global_20759[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f, -91.5f };
		Global_20766[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f, -91.5f };
	}

	Global_20741 = { Global_20759[Global_20758 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20759[Global_20758 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20776, 0);
	Global_20753 = 1;
	return;
}

void func_113(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x73CF Hash - 0x5F496D0E ^0x86F8205
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL IS_XBOX_PLATFORM() // Position - 0x7432 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_115() // Position - 0x7448 Hash - 0x7654F905 ^0x603F3E5C
{
	Global_2745629.f_1 = 0;
	Global_2745629 = 0;
	Global_2745629.f_2 = 0;
	Global_2745629.f_33 = -1;
	Global_2745629.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2745629.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2745629.f_39[0 /*16*/], "", 64);
	Global_2745629.f_38 = 0;
	Global_2745629.f_56 = 0;
	Global_2745629.f_57 = 0;
	Global_2745629.f_58 = -2;
	Global_2745629.f_3 = 0;
	func_116(&(Global_2745629.f_20));
	return;
}

void func_116(Any* panParam0) // Position - 0x74BB Hash - 0x9819A0D5 ^0x98F58DC2
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	panParam0->f_4 = 0;
	panParam0->f_5 = 0;
	panParam0->f_6 = 0;
	panParam0->f_7 = 0;
	panParam0->f_8 = 0;
	panParam0->f_9 = 0;
	panParam0->f_10 = 0;
	panParam0->f_11 = 0;
	panParam0->f_12 = 0;
	return;
}

void func_117() // Position - 0x7503 Hash - 0xC6837976 ^0x9471743
{
	Global_2745629.f_2 = 1;
	Global_2745629.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2745629 = 0;
			Global_2745629.f_2 = 0;
		}
		else if (IS_GAMER_HANDLE_VALID(Global_2745629.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2745629.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2745629.f_20)))
					func_115();
		}
		else
		{
			func_115();
		}
	}
	else
	{
		func_115();
	}

	if (Global_2745629.f_37)
		func_65(0);

	Global_2745629.f_37 = 0;
	Global_2745629.f_3 = 0;
	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x75A3 Hash - 0x4709BB10 ^0xDD69BC9A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_119() // Position - 0x75B3 Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21032 = 0;
	func_10();
	return;
}

void func_120(int iParam0, char* sParam1) // Position - 0x75C3 Hash - 0x224F1443 ^0x78F3B6C9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_121() // Position - 0x75D8 Hash - 0x2E089AFE ^0x9A6FC466
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20782);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20782);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20783);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	}

	if (Global_79248)
		Global_114370.f_14054[3 /*20*/].f_10 = func_107(1198, -1);

	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (MISC::GET_GAME_TIMER() - iLocal_117 >= 300 || iLocal_117 == 0 || iLocal_117 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);
			iLocal_117 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_114370.f_14054[Global_20813 /*20*/].f_10 == 1)
	{
		if (MISC::GET_GAME_TIMER() - iLocal_117 >= 300 || iLocal_117 == 0 || iLocal_117 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);
			iLocal_117 = MISC::GET_GAME_TIMER();
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_79248)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&Global_9488[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1) /*6*/], "Silent Ringtone Dummy"))
					AUDIO::PLAY_PED_RINGTONE(&Global_9488[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1) /*6*/], PLAYER::PLAYER_PED_ID(), true);
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_14054[Global_20813 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!(Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 1))
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_114370.f_14054[Global_20813 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_114370.f_14054[Global_20813 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}

	return;
}

BOOL func_122() // Position - 0x77AE Hash - 0x4F6FCCAE ^0x4F6FCCAE
{
	if (Global_79248)
		if (Global_1836571 || Global_1836572 == 1)
			return true;

	return false;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x77D5 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_82(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
				Global_20813 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
				Global_20813 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
				Global_20813 = CHAR_TREVOR;
			else
				Global_20813 = CHAR_MICHAEL;
	}
	else
	{
		Global_20813 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20813 == _CHAR_NULL)
			Global_20813 = CHAR_MULTIPLAYER;
	
		if (Global_79248)
			Global_20813 = CHAR_MULTIPLAYER;
	
		if (Global_20813 > CHAR_MULTIPLAYER)
			Global_20813 = CHAR_MULTIPLAYER;
	}

	return;
}

