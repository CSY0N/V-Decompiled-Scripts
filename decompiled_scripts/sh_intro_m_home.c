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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	Hash hLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	BOOL bLocal_37 = 0;
	BOOL bLocal_38 = 0;
	BOOL bLocal_39 = 0;
	BOOL bLocal_40 = 0;
	BOOL bLocal_41 = 0;
	int iLocal_42 = 0;
	BOOL bLocal_43 = 0;
	Cam caLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	Interior inLocal_49 = 0;
	Interior inLocal_50 = 0;
	var uLocal_51 = 15;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	var entityCoords;
	var unk3;

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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_35 = 2;
	iLocal_45 = -1;
	func_233(25);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
		func_231();

	iLocal_35 = 0;
	iLocal_45 = -1;
	bLocal_41 = false;
	inLocal_49 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-809.1374f, 179.9676f, 71.1531f, "v_michael");
	inLocal_50 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1f, 188.2f, 73.2f, "v_michael_garage");
	bLocal_39 = false;
	bLocal_40 = false;
	func_230(&uLocal_51);
	func_229(&uLocal_51, -844.14935f, 162.55867f, 65.89324f);
	func_229(&uLocal_51, -849.6625f, 166.86949f, 66.54545f);
	func_229(&uLocal_51, -846.0641f, 198.59845f, 76.9182f);
	func_229(&uLocal_51, -796.5247f, 194.14273f, 77.94861f);
	func_229(&uLocal_51, -774.87134f, 195.20262f, 77.13674f);
	func_229(&uLocal_51, -768.13275f, 190.18369f, 76.24245f);
	func_229(&uLocal_51, -761.38745f, 139.44395f, 66.47416f);
	func_229(&uLocal_51, -764.73773f, 137.70203f, 66.47416f);
	func_229(&uLocal_51, -800.0312f, 141.21796f, 61.96946f);
	func_229(&uLocal_51, -851.1459f, 139.22386f, 60.13711f);
	func_229(&uLocal_51, -850.16095f, 150.52716f, 64.38181f);
	func_229(&uLocal_51, -844.149f, 155.82861f, 65.77842f);
	func_228(&uLocal_51);

	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) <= 0)
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					
						if (!func_227(&uLocal_51, entityCoords))
							iLocal_35 = 1;
						else
							SYSTEM::WAIT(3000);
					}
				}
				break;
		
			case 1:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -871.9259f, 162.00055f, 52.99224f, -741.59485f, 155.08728f, 113.025475f, 90f, false, true, 0))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							STREAMING::NEW_LOAD_SCENE_STOP();
					
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(-817.6152f, 178.5613f, 71.2275f, 200f, 0);
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_35 = 2;
					}
				}
				break;
		
			case 2:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_38)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -871.9259f, 162.00055f, 52.99224f, -741.59485f, 155.08728f, 113.025475f, 90f, false, true, 0))
						{
							if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								STREAMING::NEW_LOAD_SCENE_STOP();
						
							iLocal_35 = 1;
						}
					}
				
					unk3 = { -808.7974f, 169.31934f, 70.9558f };
					entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				
					if (func_226(entityCoords, unk3, 100f) || bLocal_38)
					{
						if (func_223() || bLocal_38)
						{
							if (INTERIOR::IS_VALID_INTERIOR(inLocal_49))
							{
								if (!INTERIOR::IS_INTERIOR_READY(inLocal_49))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_49);
									bLocal_39 = true;
								}
							}
						
							if (INTERIOR::IS_VALID_INTERIOR(inLocal_50))
							{
								if (!INTERIOR::IS_INTERIOR_READY(inLocal_50))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_50);
									bLocal_40 = true;
								}
							}
						
							if (Global_113417)
								bLocal_41 = true;
						
							if (entityCoords.f_2 > 59f && entityCoords.f_2 < 90f || bLocal_38)
							{
								if (func_227(&uLocal_51, entityCoords) || bLocal_38)
								{
									if (func_217() || bLocal_38)
									{
										if (!bLocal_38)
											func_216(true);
									
										if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || bLocal_41)
										{
											if (bLocal_41 || STREAMING::IS_NEW_LOAD_SCENE_LOADED() || MISC::GET_GAME_TIMER() - iLocal_48 > 12000)
											{
												STREAMING::NEW_LOAD_SCENE_STOP();
												iLocal_48 = MISC::GET_GAME_TIMER();
												func_216(true);
												iLocal_36 = 0;
												bLocal_37 = false;
												iLocal_46 = MISC::GET_GAME_TIMER();
												iLocal_48 = MISC::GET_GAME_TIMER();
												iLocal_35 = 3;
											}
											else
											{
												if (!CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
													CAM::DO_SCREEN_FADE_OUT(800);
											
												func_216(true);
											}
										}
										else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
										{
											STREAMING::NEW_LOAD_SCENE_START_SPHERE(-817.6152f, 178.5613f, 71.2275f, 200f, 0);
											iLocal_48 = MISC::GET_GAME_TIMER();
										}
										else
										{
											SYSTEM::WAIT(100);
										}
									}
								}
								else
								{
									SYSTEM::WAIT(100);
								}
							}
							else
							{
								SYSTEM::WAIT(100);
							}
						}
						else
						{
							func_215();
							SYSTEM::WAIT(100);
						}
					}
					else
					{
						func_215();
						SYSTEM::WAIT(1000);
					}
				}
				else
				{
					func_215();
					SYSTEM::WAIT(1000);
				}
				break;
		
			case 3:
				if (INTERIOR::IS_VALID_INTERIOR(inLocal_49) && INTERIOR::IS_INTERIOR_READY(inLocal_49) && INTERIOR::IS_VALID_INTERIOR(inLocal_50) && INTERIOR::IS_INTERIOR_READY(inLocal_50) || MISC::GET_GAME_TIMER() - iLocal_48 > 500)
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_48 = MISC::GET_GAME_TIMER();
					iLocal_36 = 0;
					bLocal_37 = false;
					iLocal_46 = MISC::GET_GAME_TIMER();
					iLocal_48 = MISC::GET_GAME_TIMER();
					iLocal_35 = 4;
				}
				else
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_49);
					INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_50);
					bLocal_39 = true;
					bLocal_40 = true;
				}
				break;
		
			case 4:
				func_2();
				break;
		
			case 5:
				func_1(25);
				MISC::SET_BIT(&Global_2883591[17], 1);
				MISC::SET_BIT(&Global_2883591[18], 1);
				MISC::SET_BIT(&Global_2883591[19], 1);
				func_231();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

int func_1(int iParam0) // Position - 0x57B Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9088.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_114370.f_9088.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

void func_2() // Position - 0x5D2 Hash - 0xBED69447 ^0xC33B62AC
{
	var unk;
	var unk8;
	var unk15;
	Vector3 vector;
	float radius;
	int num;
	int num2;

	unk = 2;
	unk8 = 2;
	unk15 = 2;
	radius = 20f;
	num = 9000;
	num2 = 11000;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_36)
		{
			case 0:
				if (func_205(0, 1093140480, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
						CAM::DO_SCREEN_FADE_IN(800);
				
					HUD::CLEAR_PRINTS();
				
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						HUD::CLEAR_HELP(true);
				
					func_203();
					func_193(true, true, true, false, false, false, false);
					func_65(0f, 0f, 0f, 1, 1, 1, 0, 0, false, false, true, 1, true);
					CAM::SET_WIDESCREEN_BORDERS(false, 0);
					HUD::DISPLAY_HUD(true);
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					iLocal_46 = MISC::GET_GAME_TIMER();
					iLocal_48 = MISC::GET_GAME_TIMER();
					iLocal_47 = MISC::GET_GAME_TIMER();
				
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					MISC::CLEAR_AREA_OF_COPS(-808.7974f, 169.31934f, 70.9558f, 150f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-808.7974f, 169.31934f, 70.9558f, 100f, 0);
					unk[0 /*3*/] = { -842.1f, 178.6f, 72.2f };
					unk8[0 /*3*/] = { 6.6f, 0f, -96.1f };
					unk15[0] = 39.8f;
					unk[1 /*3*/] = { -842f, 178.8f, 72.2f };
					unk8[1 /*3*/] = { 6.6f, 0f, -96.1f };
					unk15[1] = 39.8f;
					vector = { func_64(unk8[0 /*3*/]) };
				
					if (!CAM::DOES_CAM_EXIST(caLocal_44))
						caLocal_44 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				
					if (CAM::DOES_CAM_EXIST(caLocal_44))
					{
						CAM::SET_CAM_PARAMS(caLocal_44, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_44, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num, 0, 0, 2);
					}
				
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					func_10();
					bLocal_37 = true;
					_DISPLAY_HELP_TEXT("SHI_M_HOUSE_1" /*This is Michael's safehouse. You can save vehicles by parking them in the Garage.*/, num + 10000);
					AUDIO::TRIGGER_MUSIC_EVENT("MICHAELS_HOUSE");
					iLocal_36 = 1;
				}
				break;
		
			case 1:
				unk[0 /*3*/] = { -810.7f, 179.2f, 77.3f };
				unk8[0 /*3*/] = { -10.7f, 0f, 60.7f };
				unk15[0] = 50f;
				unk[1 /*3*/] = { -810.7f, 179.2f, 77.2f };
				unk8[1 /*3*/] = { -10.7f, 0f, 60.7f };
				unk15[1] = 50f;
				vector = { func_64(unk8[0 /*3*/]) };
				radius = 12f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && INTERIOR::IS_VALID_INTERIOR(inLocal_49) && INTERIOR::IS_VALID_INTERIOR(inLocal_50) && INTERIOR::IS_INTERIOR_READY(inLocal_49) && INTERIOR::IS_INTERIOR_READY(inLocal_50) && MISC::GET_GAME_TIMER() - iLocal_46 > num || MISC::GET_GAME_TIMER() - iLocal_48 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_44))
					{
						CAM::SET_CAM_PARAMS(caLocal_44, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_44, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num, 0, 0, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						_DISPLAY_HELP_TEXT("SHI_M_HOUSE_2" /*Sleep in the bed to save your game.*/, num + 10000);
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_36 = 2;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 2:
				unk[0 /*3*/] = { -814.4f, 174.1f, 76.7f };
				unk8[0 /*3*/] = { -1.2f, 0f, -70.6f };
				unk15[0] = 50.1f;
				unk[1 /*3*/] = { -814.4f, 174.1f, 76.7f };
				unk8[1 /*3*/] = { 18.9f, 0f, -70.6f };
				unk15[1] = 50.1f;
				vector = { func_64(unk8[0 /*3*/]) };
				radius = 10f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() - iLocal_46 > num || MISC::GET_GAME_TIMER() - iLocal_48 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_44))
					{
						CAM::SET_CAM_PARAMS(caLocal_44, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_44, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num, 1, 1, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						_DISPLAY_HELP_TEXT("SHI_M_HOUSE_3" /*You can change clothes in the wardrobe.*/, num + 10000);
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_36 = 3;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 3:
				unk[0 /*3*/] = { -803.8f, 168.2f, 73.4f };
				unk8[0 /*3*/] = { -10.5f, 0f, -18.4f };
				unk15[0] = 54f;
				unk[1 /*3*/] = { -803.8f, 168.3f, 73.6f };
				unk8[1 /*3*/] = { -10.5f, 0f, -18.4f };
				unk15[1] = 54f;
				vector = { func_64(unk8[0 /*3*/]) };
				radius = 25f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() - iLocal_46 > num || MISC::GET_GAME_TIMER() - iLocal_48 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_44))
					{
						CAM::SET_CAM_PARAMS(caLocal_44, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num / 2, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_44, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num / 2, 1, 1, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						_DISPLAY_HELP_TEXT("SHI_M_HOUSE_4" /*Walk around the house to find various activities to take part in.*/, num + 10000);
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_36 = 4;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 4:
				unk[0 /*3*/] = { -803.574f, 181.4357f, 73.2662f };
				unk8[0 /*3*/] = { -8.1845f, 0f, -48.1518f };
				unk15[0] = 41.6f;
				unk[1 /*3*/] = { -803.6697f, 181.5426f, 73.2662f };
				unk8[1 /*3*/] = { -8.1845f, 0f, -48.1518f };
				unk15[1] = 41.6f;
				vector = { func_64(unk8[0 /*3*/]) };
				radius = 12f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() - iLocal_46 > num / 2 || MISC::GET_GAME_TIMER() - iLocal_48 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_44))
					{
						CAM::SET_CAM_PARAMS(caLocal_44, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num / 2, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_44, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num / 2, 1, 1, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_36 = 5;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 5:
				if (iLocal_42 == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == FIRST_PERSON && MISC::GET_GAME_TIMER() - iLocal_46 >= num - 300)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_42 = 1;
					}
				}
			
				if (MISC::GET_GAME_TIMER() - iLocal_46 > num)
					iLocal_36 = 6;
				break;
		
			case 6:
				func_216(false);
			
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_IN(800);
			
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					HUD::CLEAR_HELP(true);
			
				func_193(false, true, true, false, false, false, false);
				func_6(1, 1, 1, true);
				GRAPHICS::RESET_ADAPTATION(6);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			
				if (CAM::DOES_CAM_EXIST(caLocal_44))
				{
					CAM::SET_CAM_ACTIVE(caLocal_44, false);
					CAM::DESTROY_CAM(caLocal_44, false);
				}
			
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			
				if (bLocal_39)
				{
					if (INTERIOR::IS_VALID_INTERIOR(inLocal_49))
						INTERIOR::UNPIN_INTERIOR(inLocal_49);
				
					bLocal_39 = false;
				}
			
				if (bLocal_40)
				{
					if (INTERIOR::IS_VALID_INTERIOR(inLocal_50))
						INTERIOR::UNPIN_INTERIOR(inLocal_50);
				
					bLocal_40 = false;
				}
			
				STREAMING::NEW_LOAD_SCENE_STOP();
				AUDIO::TRIGGER_MUSIC_EVENT("MICHAELS_HOUSE_STOP");
				bLocal_37 = false;
				iLocal_35 = 5;
				break;
		}
	
		if (iLocal_36 > 0 && iLocal_36 < 6)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE);
		
			if (!bLocal_43)
				if (func_4(1000))
					if (MISC::GET_GAME_TIMER() - iLocal_47 > 1000)
						bLocal_43 = true;
			else if (!func_3())
				iLocal_36 = 6;
		}
	}

	return;
}

BOOL func_3() // Position - 0xE27 Hash - 0x57459B9C ^0xAED0EE35
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

BOOL func_4(int iParam0) // Position - 0xE59 Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_5())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_5() // Position - 0xEA3 Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_6(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xED5 Hash - 0xD5DA5E14 ^0x5BD94F24
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, false);
	PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam3, 0);
	func_193(false, true, false, false, false, false, false);

	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}

	HUD::CLEAR_HELP(true);

	if (iParam0 == 1)
		CAM::SET_WIDESCREEN_BORDERS(false, 0);

	if (iParam1 == 1)
		if (hLocal_34 != 0 && hLocal_34 != joaat("OBJECT") && hLocal_34 != joaat("GADGET_PARACHUTE"))
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_34, false))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_34, false);

	if (func_7(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);

	return;
}

BOOL func_7(Ped pedParam0) // Position - 0xF7F Hash - 0x7E48B415 ^0x126328AB
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0xF9F Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xFC0 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_10() // Position - 0xFD7 Hash - 0x555DD089 ^0x765F1F4D
{
	Vehicle playersLastVehicle;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -840.6724f, 159.0602f, 66.2181f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 305.1602f);
	}

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, false, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
		
			if (ENTITY::GET_ENTITY_HEALTH(playersLastVehicle) < 1)
				ENTITY::SET_ENTITY_HEALTH(playersLastVehicle, 10, 0, 0);
		
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(playersLastVehicle) < 1f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(playersLastVehicle, 10f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(playersLastVehicle) < 1f)
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(playersLastVehicle, 10f);
		
			MISC::CLEAR_AREA(-857.1225f, 157.4701f, 63.7638f, 5f, true, false, false, false);
			ENTITY::SET_ENTITY_COORDS(playersLastVehicle, -857.1225f, 157.4701f, 63.7638f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(playersLastVehicle, 352.5659f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
			func_11(playersLastVehicle, -857.1225f, 157.4701f, 63.7638f, 352.5659f, 24, false);
		}
	}

	return;
}

void func_11(Vehicle veParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x10FF Hash - 0x29B4C4C8 ^0x31C8EC4C
{
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_484[25], false))
				if (Global_78038.f_484[25] == veParam0)
					return;
	
		if (!bParam6)
			if (VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tourbus"))
				return;
	
		func_63(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_58(veParam0, &unk);
	
		if (func_57(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
				Global_79026 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_50(iParam5, &unk, fParam1, fParam4, func_56(veParam0));
		func_12(iParam5, veParam0, 0);
	}

	return;
}

void func_12(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x1228 Hash - 0x9860D273 ^0xD433FB9F
{
	Vehicle vehicle;

	if (iParam0 == -1)
		return;

	if (!func_46(&Global_78038.f_555[0 /*21*/], iParam0))
		return;

	if (!IS_BIT_SET(Global_78038.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_78038.f_555[0 /*21*/].f_9, 10))
		if (Global_78038.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(veParam1))
			return;

	if (Global_78945 != -1 && Global_78945 != iParam0)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
		
			if (iParam0 == 24)
				Global_114370.f_32752.f_4801 = func_35();
		
			if (veParam1 != Global_78038.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_34(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 != vehicle)
						func_13(vehicle, _CHAR_NULL);
				}
			
				Global_78944 = veParam1;
				Global_78945 = iParam0;
				Global_78946 = iParam2;
			}
		}
	}

	return;
}

void func_13(Vehicle veParam0, eCharacter echParam1) // Position - 0x133F Hash - 0x403E4E98 ^0x34F9BF63
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_14(veParam0))
		return;

	if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Zero"))
				echParam1 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_One"))
				echParam1 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Two"))
				echParam1 = CHAR_TREVOR;
	
		if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
			echParam1 = Global_114370.f_2366.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114370.f_32752.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114370.f_32752.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_114370.f_32752.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_114370.f_32752.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114370.f_32752.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114370.f_32752.f_5600[i /*78*/].f_1)))
					Global_114370.f_32752.f_5600[i /*78*/].f_66 = 0;
	}

	Global_114370.f_32752.f_5590 = echParam1;
	Global_78943 = veParam0;
	Global_114370.f_32752.f_5588 = 1;
	func_58(veParam0, &(Global_114370.f_32752.f_5510));
	return;
}

BOOL func_14(Vehicle veParam0) // Position - 0x1541 Hash - 0x835CB3EF ^0xB88368F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_32(veParam0, 0, false) || func_32(veParam0, 1, false) || func_32(veParam0, 2, false) || func_56(veParam0) != _CHAR_NULL || func_31(veParam0) || func_30(veParam0) || func_29(veParam0) || func_28(veParam0) || !func_15(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_30(veParam0);
		func_30(veParam0);
		func_32(veParam0, 0, false);
		func_32(veParam0, 1, false);
		func_32(veParam0, 2, false);
		func_56(veParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_15(Hash hParam0) // Position - 0x161E Hash - 0x66FE4A4A ^0x10D5195D
{
	if (hParam0 == 0)
		return false;

	if (!func_16(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case -671564942:
		case -902029319:
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_16(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x17DC Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
				if (hParam0 == outData.f_1)
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
		}
	}

	if (hParam0 == joaat("blimp"))
		if (!func_26() && !func_25() && !func_24() && !func_23() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
		}
		else if (!func_24())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_19(hParam0, iParam2))
			return false;

	if (!func_17(hParam0))
		return false;

	return true;
}

BOOL func_17(Hash hParam0) // Position - 0x195E Hash - 0x1C7406B5 ^0xE5658F0A
{
	int num;
	var unk;
	var name;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x1A27 Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_19(Hash hParam0, int iParam1) // Position - 0x1A3E Hash - 0x2FF24ACC ^0x65397852
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2707028 && iParam1 >= 0 && iParam1 <= 515)
		if (IS_BIT_SET(Global_1586504[iParam1 /*142*/].f_103, 2))
			return true;

	if (Global_2707027)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == joaat("btype3"))
		if (!Global_262145.f_7131 && !Global_262145.f_13597 && cloudTimeAsInt < Global_262145.f_13598)
			num = 0;

	if (hParam0 == joaat("faction3"))
		if (!Global_262145.f_14940 && cloudTimeAsInt < Global_262145.f_14952)
			num = 0;
	else if (hParam0 == joaat("virgo3") || hParam0 == joaat("virgo2"))
		if (!Global_262145.f_14936 && cloudTimeAsInt < Global_262145.f_14948)
			num = 0;
	else if (hParam0 == joaat("sabregt2"))
		if (!Global_262145.f_14937 && cloudTimeAsInt < Global_262145.f_14949)
			num = 0;
	else if (hParam0 == joaat("tornado5"))
		if (!Global_262145.f_14938 && cloudTimeAsInt < Global_262145.f_14950)
			num = 0;
	else if (hParam0 == joaat("minivan2"))
		if (!Global_262145.f_14939 && cloudTimeAsInt < Global_262145.f_14951)
			num = 0;
	else if (hParam0 == joaat("slamvan3"))
		if (!Global_262145.f_14941 && cloudTimeAsInt < Global_262145.f_14953)
			num = 0;

	if (hParam0 == joaat("prototipo"))
		if (!Global_262145.f_14942 && cloudTimeAsInt < Global_262145.f_14945)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!Global_262145.f_14943 && cloudTimeAsInt < Global_262145.f_14946)
			num = 0;
	else if (hParam0 == joaat("pfister811"))
		if (!Global_262145.f_14944 && cloudTimeAsInt < Global_262145.f_14947)
			num = 0;

	if (hParam0 == joaat("bf400"))
		if (!Global_262145.f_17521 && cloudTimeAsInt < Global_262145.f_17486)
			num = 0;
	else if (hParam0 == joaat("brioso"))
		if (!Global_262145.f_17516 && cloudTimeAsInt < Global_262145.f_17481)
			num = 0;
	else if (hParam0 == joaat("cliffhanger"))
		if (!Global_262145.f_17520 && cloudTimeAsInt < Global_262145.f_17485)
			num = 0;
	else if (hParam0 == joaat("contender"))
		if (!Global_262145.f_17519 && cloudTimeAsInt < Global_262145.f_17484)
			num = 0;
	else if (hParam0 == joaat("le7b"))
		if (!Global_262145.f_17513 && cloudTimeAsInt < Global_262145.f_17478)
			num = 0;
	else if (hParam0 == joaat("omnis"))
		if (!Global_262145.f_17514 && cloudTimeAsInt < Global_262145.f_17479)
			num = 0;
	else if (hParam0 == joaat("trophytruck"))
		if (!Global_262145.f_17517 && cloudTimeAsInt < Global_262145.f_17482)
			num = 0;
	else if (hParam0 == joaat("trophytruck2"))
		if (!Global_262145.f_17518 && cloudTimeAsInt < Global_262145.f_17483)
			num = 0;
	else if (hParam0 == joaat("tropos"))
		if (!Global_262145.f_17515 && cloudTimeAsInt < Global_262145.f_17480)
			num = 0;
	else if (hParam0 == joaat("gargoyle"))
		if (!Global_262145.f_17523 && cloudTimeAsInt < Global_262145.f_17488)
			num = 0;
	else if (hParam0 == joaat("rallytruck"))
		if (!Global_262145.f_17524 && cloudTimeAsInt < Global_262145.f_17489)
			num = 0;
	else if (hParam0 == joaat("tampa2"))
		if (!Global_262145.f_17512 && cloudTimeAsInt < Global_262145.f_17477)
			num = 0;
	else if (hParam0 == joaat("tyrus"))
		if (!Global_262145.f_17511 && cloudTimeAsInt < Global_262145.f_17476)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!Global_262145.f_17510 && cloudTimeAsInt < Global_262145.f_17475)
			num = 0;
	else if (hParam0 == joaat("lynx"))
		if (!Global_262145.f_17522 && cloudTimeAsInt < Global_262145.f_17487)
			num = 0;
	else if (hParam0 == joaat("stalion2"))
		if (!Global_262145.f_17525 && cloudTimeAsInt < Global_262145.f_17490)
			num = 0;
	else if (hParam0 == joaat("gauntlet2"))
		if (!Global_262145.f_17526 && cloudTimeAsInt < Global_262145.f_17491)
			num = 0;
	else if (hParam0 == joaat("dominator2"))
		if (!Global_262145.f_17527 && cloudTimeAsInt < Global_262145.f_17492)
			num = 0;
	else if (hParam0 == joaat("buffalo3"))
		if (!Global_262145.f_17528 && cloudTimeAsInt < Global_262145.f_17493)
			num = 0;

	if (hParam0 == joaat("defiler"))
		if (!Global_262145.f_17682 && cloudTimeAsInt < Global_262145.f_17704)
			num = 0;
	else if (hParam0 == joaat("nightblade"))
		if (!Global_262145.f_17683 && cloudTimeAsInt < Global_262145.f_17705)
			num = 0;
	else if (hParam0 == joaat("zombiea"))
		if (!Global_262145.f_17684 && cloudTimeAsInt < Global_262145.f_17706)
			num = 0;
	else if (hParam0 == joaat("esskey"))
		if (!Global_262145.f_17685 && cloudTimeAsInt < Global_262145.f_17707)
			num = 0;
	else if (hParam0 == joaat("avarus"))
		if (!Global_262145.f_17686 && cloudTimeAsInt < Global_262145.f_17708)
			num = 0;
	else if (hParam0 == joaat("zombieb"))
		if (!Global_262145.f_17687 && cloudTimeAsInt < Global_262145.f_17709)
			num = 0;
	else if (hParam0 == joaat("hakuchou2"))
		if (!Global_262145.f_17689 && cloudTimeAsInt < Global_262145.f_17710)
			num = 0;
	else if (hParam0 == joaat("vortex"))
		if (!Global_262145.f_17690 && cloudTimeAsInt < Global_262145.f_17711)
			num = 0;
	else if (hParam0 == joaat("shotaro"))
		if (!Global_262145.f_17691 && cloudTimeAsInt < Global_262145.f_17712)
			num = 0;
	else if (hParam0 == joaat("chimera"))
		if (!Global_262145.f_17692 && cloudTimeAsInt < Global_262145.f_17713)
			num = 0;
	else if (hParam0 == joaat("raptor"))
		if (!Global_262145.f_17693 && cloudTimeAsInt < Global_262145.f_17714)
			num = 0;
	else if (hParam0 == joaat("daemon2"))
		if (!Global_262145.f_17694 && cloudTimeAsInt < Global_262145.f_17715)
			num = 0;
	else if (hParam0 == joaat("blazer4"))
		if (!Global_262145.f_17695 && cloudTimeAsInt < Global_262145.f_17716)
			num = 0;
	else if (hParam0 == joaat("tornado6"))
		if (!Global_262145.f_17701 && cloudTimeAsInt < Global_262145.f_17723)
			num = 0;
	else if (hParam0 == joaat("youga2"))
		if (!Global_262145.f_17698 && cloudTimeAsInt < Global_262145.f_17719)
			num = 0;
	else if (hParam0 == joaat("wolfsbane"))
		if (!Global_262145.f_17699 && cloudTimeAsInt < Global_262145.f_17720)
			num = 0;
	else if (hParam0 == joaat("faggio3"))
		if (!Global_262145.f_17700 && cloudTimeAsInt < Global_262145.f_17721)
			num = 0;
	else if (hParam0 == joaat("faggio"))
		if (!Global_262145.f_17688 && cloudTimeAsInt < Global_262145.f_17722)
			num = 0;
	else if (hParam0 == joaat("bagger"))
		if (!Global_262145.f_17702 && cloudTimeAsInt < Global_262145.f_17724)
			num = 0;
	else if (hParam0 == joaat("sanctus"))
		if (!Global_262145.f_17696 && cloudTimeAsInt < Global_262145.f_17717)
			num = 0;
	else if (hParam0 == joaat("manchez"))
		if (!Global_262145.f_17697 && cloudTimeAsInt < Global_262145.f_17718)
			num = 0;
	else if (hParam0 == joaat("ratbike"))
		if (!Global_262145.f_17703 && cloudTimeAsInt < Global_262145.f_17725)
			num = 0;

	if (hParam0 == joaat("voltic2"))
		if (!Global_262145.f_19341 && cloudTimeAsInt < Global_262145.f_19438)
			num = 0;
	else if (hParam0 == joaat("ruiner2"))
		if (!Global_262145.f_19342 && cloudTimeAsInt < Global_262145.f_19439)
			num = 0;
	else if (hParam0 == joaat("dune4"))
		if (!Global_262145.f_19343 && cloudTimeAsInt < Global_262145.f_19440)
			num = 0;
	else if (hParam0 == joaat("dune5"))
		if (!Global_262145.f_19344 && cloudTimeAsInt < Global_262145.f_19441)
			num = 0;
	else if (hParam0 == joaat("phantom2"))
		if (!Global_262145.f_19345 && cloudTimeAsInt < Global_262145.f_19442)
			num = 0;
	else if (hParam0 == joaat("technical2"))
		if (!Global_262145.f_19346 && cloudTimeAsInt < Global_262145.f_19443)
			num = 0;
	else if (hParam0 == joaat("boxville5"))
		if (!Global_262145.f_19347 && cloudTimeAsInt < Global_262145.f_19444)
			num = 0;
	else if (hParam0 == joaat("wastelander"))
		if (!Global_262145.f_19348 && cloudTimeAsInt < Global_262145.f_19445)
			num = 0;
	else if (hParam0 == joaat("blazer5"))
		if (!Global_262145.f_19349 && cloudTimeAsInt < Global_262145.f_19446)
			num = 0;
	else if (hParam0 == joaat("comet2"))
		if (!Global_262145.f_19350 && cloudTimeAsInt < Global_262145.f_19447)
			num = 0;
	else if (hParam0 == joaat("comet3"))
		if (!Global_262145.f_19351 && cloudTimeAsInt < Global_262145.f_19448)
			num = 0;
	else if (hParam0 == joaat("diablous"))
		if (!Global_262145.f_19352 && cloudTimeAsInt < Global_262145.f_19449)
			num = 0;
	else if (hParam0 == joaat("diablous2"))
		if (!Global_262145.f_19353 && cloudTimeAsInt < Global_262145.f_19450)
			num = 0;
	else if (hParam0 == joaat("elegy"))
		if (!Global_262145.f_19354 && cloudTimeAsInt < Global_262145.f_19451)
			num = 0;
	else if (hParam0 == joaat("elegy2"))
		if (!Global_262145.f_19355 && cloudTimeAsInt < Global_262145.f_19452)
			num = 0;
	else if (hParam0 == joaat("fcr"))
		if (!Global_262145.f_19356 && cloudTimeAsInt < Global_262145.f_19453)
			num = 0;
	else if (hParam0 == joaat("fcr2"))
		if (!Global_262145.f_19357 && cloudTimeAsInt < Global_262145.f_19454)
			num = 0;
	else if (hParam0 == joaat("italigtb"))
		if (!Global_262145.f_19358 && cloudTimeAsInt < Global_262145.f_19455)
			num = 0;
	else if (hParam0 == joaat("italigtb2"))
		if (!Global_262145.f_19359 && cloudTimeAsInt < Global_262145.f_19456)
			num = 0;
	else if (hParam0 == joaat("nero"))
		if (!Global_262145.f_19360 && cloudTimeAsInt < Global_262145.f_19457)
			num = 0;
	else if (hParam0 == joaat("nero2"))
		if (!Global_262145.f_19361 && cloudTimeAsInt < Global_262145.f_19458)
			num = 0;
	else if (hParam0 == joaat("penetrator"))
		if (!Global_262145.f_19362 && cloudTimeAsInt < Global_262145.f_19459)
			num = 0;
	else if (hParam0 == joaat("specter"))
		if (!Global_262145.f_19363 && cloudTimeAsInt < Global_262145.f_19460)
			num = 0;
	else if (hParam0 == joaat("specter2"))
		if (!Global_262145.f_19364 && cloudTimeAsInt < Global_262145.f_19461)
			num = 0;
	else if (hParam0 == joaat("tempesta"))
		if (!Global_262145.f_19365 && cloudTimeAsInt < Global_262145.f_19462)
			num = 0;

	if (hParam0 == joaat("gp1"))
		if (!Global_262145.f_20422 && cloudTimeAsInt < Global_262145.f_20418)
			num = 0;
	else if (hParam0 == joaat("infernus2"))
		if (!Global_262145.f_20423 && cloudTimeAsInt < Global_262145.f_20419)
			num = 0;
	else if (hParam0 == joaat("ruston"))
		if (!Global_262145.f_20424 && cloudTimeAsInt < Global_262145.f_20420)
			num = 0;
	else if (hParam0 == joaat("turismo2"))
		if (!Global_262145.f_20425 && cloudTimeAsInt < Global_262145.f_20421)
			num = 0;

	if (hParam0 == joaat("xa21"))
		if (!Global_262145.f_21304 && cloudTimeAsInt < Global_262145.f_21312)
			num = 0;
	else if (hParam0 == joaat("cheetah2"))
		if (!Global_262145.f_21305 && cloudTimeAsInt < Global_262145.f_21313)
			num = 0;
	else if (hParam0 == joaat("torero"))
		if (!Global_262145.f_21306 && cloudTimeAsInt < Global_262145.f_21314)
			num = 0;
	else if (hParam0 == joaat("vagner"))
		if (!Global_262145.f_21307 && cloudTimeAsInt < Global_262145.f_21315)
			num = 0;
	else if (hParam0 == joaat("ardent"))
		if (!Global_262145.f_21308 && cloudTimeAsInt < Global_262145.f_21316)
			num = 0;
	else if (hParam0 == joaat("nightshark"))
		if (!Global_262145.f_21309 && cloudTimeAsInt < Global_262145.f_21317)
			num = 0;

	if (hParam0 == joaat("microlight"))
		if (!Global_262145.f_22103 && cloudTimeAsInt < Global_262145.f_22123)
			num = 0;
	else if (hParam0 == joaat("mogul"))
		if (!Global_262145.f_22115 && cloudTimeAsInt < Global_262145.f_22135)
			num = 0;
	else if (hParam0 == joaat("rogue"))
		if (!Global_262145.f_22106 && cloudTimeAsInt < Global_262145.f_22126)
			num = 0;
	else if (hParam0 == joaat("starling"))
		if (!Global_262145.f_22116 && cloudTimeAsInt < Global_262145.f_22136)
			num = 0;
	else if (hParam0 == joaat("seabreeze"))
		if (!Global_262145.f_22104 && cloudTimeAsInt < Global_262145.f_22124)
			num = 0;
	else if (hParam0 == joaat("tula"))
		if (!Global_262145.f_22120 && cloudTimeAsInt < Global_262145.f_22140)
			num = 0;
	else if (hParam0 == joaat("pyro"))
		if (!Global_262145.f_22118 && cloudTimeAsInt < Global_262145.f_22138)
			num = 0;
	else if (hParam0 == joaat("molotok"))
		if (!Global_262145.f_22119 && cloudTimeAsInt < Global_262145.f_22139)
			num = 0;
	else if (hParam0 == joaat("nokota"))
		if (!Global_262145.f_22114 && cloudTimeAsInt < Global_262145.f_22134)
			num = 0;
	else if (hParam0 == joaat("bombushka"))
		if (!Global_262145.f_22121 && cloudTimeAsInt < Global_262145.f_22141)
			num = 0;
	else if (hParam0 == joaat("hunter"))
		if (!Global_262145.f_22117 && cloudTimeAsInt < Global_262145.f_22137)
			num = 0;
	else if (hParam0 == joaat("havok"))
		if (!Global_262145.f_22113 && cloudTimeAsInt < Global_262145.f_22133)
			num = 0;
	else if (hParam0 == joaat("howard"))
		if (!Global_262145.f_22105 && cloudTimeAsInt < Global_262145.f_22125)
			num = 0;
	else if (hParam0 == joaat("alphaz1"))
		if (!Global_262145.f_22107 && cloudTimeAsInt < Global_262145.f_22127)
			num = 0;
	else if (hParam0 == joaat("cyclone"))
		if (!Global_262145.f_22108 && cloudTimeAsInt < Global_262145.f_22128)
			num = 0;
	else if (hParam0 == joaat("visione"))
		if (!Global_262145.f_22109 && cloudTimeAsInt < Global_262145.f_22129)
			num = 0;
	else if (hParam0 == joaat("vigilante"))
		if (!Global_262145.f_22110 && cloudTimeAsInt < Global_262145.f_22130)
			num = 0;
	else if (hParam0 == joaat("retinue"))
		if (!Global_262145.f_22111 && cloudTimeAsInt < Global_262145.f_22131)
			num = 0;
	else if (hParam0 == joaat("rapidgt3"))
		if (!Global_262145.f_22112 && cloudTimeAsInt < Global_262145.f_22132)
			num = 0;

	if (hParam0 == joaat("deluxo"))
		if (!Global_262145.f_23071 && cloudTimeAsInt < Global_262145.f_23099)
			num = 0;
	else if (hParam0 == joaat("stromberg"))
		if (!Global_262145.f_23072 && cloudTimeAsInt < Global_262145.f_23100)
			num = 0;
	else if (hParam0 == joaat("riot2"))
		if (!Global_262145.f_23073 && cloudTimeAsInt < Global_262145.f_23101)
			num = 0;
	else if (hParam0 == joaat("chernobog"))
		if (!Global_262145.f_23074 && cloudTimeAsInt < Global_262145.f_23102)
			num = 0;
	else if (hParam0 == joaat("khanjali"))
		if (!Global_262145.f_23075 && cloudTimeAsInt < Global_262145.f_23103)
			num = 0;
	else if (hParam0 == joaat("akula"))
		if (!Global_262145.f_23076 && cloudTimeAsInt < Global_262145.f_23104)
			num = 0;
	else if (hParam0 == joaat("thruster"))
		if (!Global_262145.f_23077 && cloudTimeAsInt < Global_262145.f_23105)
			num = 0;
	else if (hParam0 == joaat("barrage"))
		if (!Global_262145.f_23078 && cloudTimeAsInt < Global_262145.f_23106)
			num = 0;
	else if (hParam0 == joaat("volatol"))
		if (!Global_262145.f_23079 && cloudTimeAsInt < Global_262145.f_23107)
			num = 0;
	else if (hParam0 == joaat("comet4"))
		if (!Global_262145.f_23080 && cloudTimeAsInt < Global_262145.f_23108)
			num = 0;
	else if (hParam0 == joaat("neon"))
		if (!Global_262145.f_23081 && cloudTimeAsInt < Global_262145.f_23109)
			num = 0;
	else if (hParam0 == joaat("streiter"))
		if (!Global_262145.f_23082 && cloudTimeAsInt < Global_262145.f_23110)
			num = 0;
	else if (hParam0 == joaat("sentinel3"))
		if (!Global_262145.f_23083 && cloudTimeAsInt < Global_262145.f_23111)
			num = 0;
	else if (hParam0 == joaat("yosemite"))
		if (!Global_262145.f_23084 && cloudTimeAsInt < Global_262145.f_23112)
			num = 0;
	else if (hParam0 == joaat("sc1"))
		if (!Global_262145.f_23085 && cloudTimeAsInt < Global_262145.f_23113)
			num = 0;
	else if (hParam0 == joaat("autarch"))
		if (!Global_262145.f_23086 && cloudTimeAsInt < Global_262145.f_23114)
			num = 0;
	else if (hParam0 == joaat("gt500"))
		if (!Global_262145.f_23087 && cloudTimeAsInt < Global_262145.f_23115)
			num = 0;
	else if (hParam0 == joaat("hustler"))
		if (!Global_262145.f_23088 && cloudTimeAsInt < Global_262145.f_23116)
			num = 0;
	else if (hParam0 == joaat("revolter"))
		if (!Global_262145.f_23089 && cloudTimeAsInt < Global_262145.f_23117)
			num = 0;
	else if (hParam0 == joaat("pariah"))
		if (!Global_262145.f_23090 && cloudTimeAsInt < Global_262145.f_23118)
			num = 0;
	else if (hParam0 == joaat("raiden"))
		if (!Global_262145.f_23091 && cloudTimeAsInt < Global_262145.f_23119)
			num = 0;
	else if (hParam0 == joaat("savestra"))
		if (!Global_262145.f_23092 && cloudTimeAsInt < Global_262145.f_23120)
			num = 0;
	else if (hParam0 == joaat("riata"))
		if (!Global_262145.f_23093 && cloudTimeAsInt < Global_262145.f_23121)
			num = 0;
	else if (hParam0 == joaat("hermes"))
		if (!Global_262145.f_23094 && cloudTimeAsInt < Global_262145.f_23122)
			num = 0;
	else if (hParam0 == joaat("comet5"))
		if (!Global_262145.f_23095 && cloudTimeAsInt < Global_262145.f_23123)
			num = 0;
	else if (hParam0 == joaat("z190"))
		if (!Global_262145.f_23096 && cloudTimeAsInt < Global_262145.f_23124)
			num = 0;
	else if (hParam0 == joaat("viseris"))
		if (!Global_262145.f_23097 && cloudTimeAsInt < Global_262145.f_23125)
			num = 0;
	else if (hParam0 == joaat("kamacho"))
		if (!Global_262145.f_23098 && cloudTimeAsInt < Global_262145.f_23126)
			num = 0;

	if (hParam0 == joaat("gb200"))
		if (!Global_262145.f_24293 && cloudTimeAsInt < Global_262145.f_24309)
			num = 0;
	else if (hParam0 == joaat("fagaloa"))
		if (!Global_262145.f_24294 && cloudTimeAsInt < Global_262145.f_24310)
			num = 0;
	else if (hParam0 == joaat("ellie"))
		if (!Global_262145.f_24298 && cloudTimeAsInt < Global_262145.f_24314)
			num = 0;
	else if (hParam0 == joaat("issi3"))
		if (!Global_262145.f_24301 && cloudTimeAsInt < Global_262145.f_24317)
			num = 0;
	else if (hParam0 == joaat("michelli"))
		if (!Global_262145.f_24306 && cloudTimeAsInt < Global_262145.f_24322)
			num = 0;
	else if (hParam0 == joaat("flashgt"))
		if (!Global_262145.f_24300 && cloudTimeAsInt < Global_262145.f_24316)
			num = 0;
	else if (hParam0 == joaat("hotring"))
		if (!Global_262145.f_24292 && cloudTimeAsInt < Global_262145.f_24308)
			num = 0;
	else if (hParam0 == joaat("tezeract"))
		if (!Global_262145.f_24299 && cloudTimeAsInt < Global_262145.f_24315)
			num = 0;
	else if (hParam0 == joaat("tyrant"))
		if (!Global_262145.f_24305 && cloudTimeAsInt < Global_262145.f_24321)
			num = 0;
	else if (hParam0 == joaat("dominator3"))
		if (!Global_262145.f_24304 && cloudTimeAsInt < Global_262145.f_24320)
			num = 0;
	else if (hParam0 == joaat("taipan"))
		if (!Global_262145.f_24295 && cloudTimeAsInt < Global_262145.f_24311)
			num = 0;
	else if (hParam0 == joaat("entity2"))
		if (!Global_262145.f_24297 && cloudTimeAsInt < Global_262145.f_24313)
			num = 0;
	else if (hParam0 == joaat("jester3"))
		if (!Global_262145.f_24307 && cloudTimeAsInt < Global_262145.f_24323)
			num = 0;
	else if (hParam0 == joaat("cheburek"))
		if (!Global_262145.f_24303 && cloudTimeAsInt < Global_262145.f_24319)
			num = 0;
	else if (hParam0 == joaat("caracara"))
		if (!Global_262145.f_24296 && cloudTimeAsInt < Global_262145.f_24312)
			num = 0;
	else if (hParam0 == joaat("seasparrow"))
		if (!Global_262145.f_24302 && cloudTimeAsInt < Global_262145.f_24318)
			num = 0;

	if (hParam0 == joaat("terbyte"))
		if (!Global_262145.f_24383 && cloudTimeAsInt < Global_262145.f_24370)
			num = 0;
	else if (hParam0 == joaat("pbus2"))
		if (!Global_262145.f_24384 && cloudTimeAsInt < Global_262145.f_24371)
			num = 0;
	else if (hParam0 == joaat("mule4"))
		if (!Global_262145.f_24389 && cloudTimeAsInt < Global_262145.f_24376)
			num = 0;
	else if (hParam0 == joaat("pounder2"))
		if (!Global_262145.f_24388 && cloudTimeAsInt < Global_262145.f_24375)
			num = 0;
	else if (hParam0 == joaat("swinger"))
		if (!Global_262145.f_24386 && cloudTimeAsInt < Global_262145.f_24373)
			num = 0;
	else if (hParam0 == joaat("menacer"))
		if (!Global_262145.f_24392 && cloudTimeAsInt < Global_262145.f_24379)
			num = 0;
	else if (hParam0 == joaat("scramjet"))
		if (!Global_262145.f_24394 && cloudTimeAsInt < Global_262145.f_24381)
			num = 0;
	else if (hParam0 == joaat("strikeforce"))
		if (!Global_262145.f_24395 && cloudTimeAsInt < Global_262145.f_24382)
			num = 0;
	else if (hParam0 == joaat("oppressor2"))
		if (!Global_262145.f_24393 && cloudTimeAsInt < Global_262145.f_24380)
			num = 0;
	else if (hParam0 == joaat("patriot2"))
		if (!Global_262145.f_24385 && cloudTimeAsInt < Global_262145.f_24372)
			num = 0;
	else if (hParam0 == joaat("stafford"))
		if (!Global_262145.f_24387 && cloudTimeAsInt < Global_262145.f_24374)
			num = 0;
	else if (hParam0 == joaat("freecrawler"))
		if (!Global_262145.f_24391 && cloudTimeAsInt < Global_262145.f_24378)
			num = 0;
	else if (hParam0 == joaat("blimp3"))
		if (!Global_262145.f_24390 && cloudTimeAsInt < Global_262145.f_24377)
			num = 0;

	if (hParam0 == joaat("monster3"))
	{
	}
	else if (hParam0 == joaat("cerberus"))
	{
	}
	else if (hParam0 == joaat("cerberus2"))
	{
	}
	else if (hParam0 == joaat("cerberus3"))
	{
	}
	else if (hParam0 == joaat("brutus"))
	{
	}
	else if (hParam0 == joaat("brutus2"))
	{
	}
	else if (hParam0 == joaat("brutus3"))
	{
	}
	else if (hParam0 == joaat("scarab"))
	{
	}
	else if (hParam0 == joaat("scarab2"))
	{
	}
	else if (hParam0 == joaat("scarab3"))
	{
	}
	else if (hParam0 == joaat("imperator"))
	{
	}
	else if (hParam0 == joaat("imperator2"))
	{
	}
	else if (hParam0 == joaat("imperator3"))
	{
	}
	else if (hParam0 == joaat("zr380"))
	{
	}
	else if (hParam0 == joaat("zr3802"))
	{
	}
	else if (hParam0 == joaat("zr3803"))
	{
	}
	else if (hParam0 == joaat("impaler"))
	{
	}
	else if (hParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_27026 && cloudTimeAsInt < Global_262145.f_27028)
			num = 0;
	}
	else if (hParam0 == joaat("toros"))
	{
		if (!Global_262145.f_26039 && cloudTimeAsInt < Global_262145.f_26032)
			num = 0;
	}
	else if (hParam0 == joaat("clique"))
	{
		if (!Global_262145.f_26040 && cloudTimeAsInt < Global_262145.f_26033)
			num = 0;
	}
	else if (hParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_26041 && cloudTimeAsInt < Global_262145.f_26034)
			num = 0;
	}
	else if (hParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_26042 && cloudTimeAsInt < Global_262145.f_26035)
			num = 0;
	}
	else if (hParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_27027 && cloudTimeAsInt < Global_262145.f_27029)
			num = 0;
	}
	else if (hParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_26043 && cloudTimeAsInt < Global_262145.f_26036)
			num = 0;
	}
	else if (hParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_26044 && cloudTimeAsInt < Global_262145.f_26037)
			num = 0;
	}
	else if (hParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_26045 && cloudTimeAsInt < Global_262145.f_26038)
			num = 0;
	}
	else if (hParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_26050 && cloudTimeAsInt < Global_262145.f_26071)
			num = 0;
	}
	else if (hParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_26051 && cloudTimeAsInt < Global_262145.f_26072)
			num = 0;
	}
	else if (hParam0 == joaat("locust"))
	{
		if (!Global_262145.f_26052 && cloudTimeAsInt < Global_262145.f_26073)
			num = 0;
	}
	else if (hParam0 == joaat("novak"))
	{
		if (!Global_262145.f_26053 && cloudTimeAsInt < Global_262145.f_26074)
			num = 0;
	}
	else if (hParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_26054 && cloudTimeAsInt < Global_262145.f_26075)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_26055 && cloudTimeAsInt < Global_262145.f_26076)
			num = 0;
	}
	else if (hParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_26056 && cloudTimeAsInt < Global_262145.f_26077)
			num = 0;
	}
	else if (hParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_26057 && cloudTimeAsInt < Global_262145.f_26078)
			num = 0;
	}
	else if (hParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_26058 && cloudTimeAsInt < Global_262145.f_26079)
			num = 0;
	}
	else if (hParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_26059 && cloudTimeAsInt < Global_262145.f_26080)
			num = 0;
	}
	else if (hParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_26060 && cloudTimeAsInt < Global_262145.f_26081)
			num = 0;
	}
	else if (hParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_26061 && cloudTimeAsInt < Global_262145.f_26082)
			num = 0;
	}
	else if (hParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_26062 && cloudTimeAsInt < Global_262145.f_26083)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_26063 && cloudTimeAsInt < Global_262145.f_26084)
			num = 0;
	}
	else if (hParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_26064 && cloudTimeAsInt < Global_262145.f_26085)
			num = 0;
	}
	else if (hParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_26065 && cloudTimeAsInt < Global_262145.f_26086)
			num = 0;
	}
	else if (hParam0 == joaat("s80"))
	{
		if (!Global_262145.f_26066 && cloudTimeAsInt < Global_262145.f_26087)
			num = 0;
	}
	else if (hParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_26067 && cloudTimeAsInt < Global_262145.f_26088)
			num = 0;
	}
	else if (hParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_26068 && cloudTimeAsInt < Global_262145.f_26089)
			num = 0;
	}
	else if (hParam0 == joaat("neo"))
	{
		if (!Global_262145.f_26069 && cloudTimeAsInt < Global_262145.f_26090)
			num = 0;
	}
	else if (hParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26070 && cloudTimeAsInt < Global_262145.f_26091)
			num = 0;
	}
	else if (hParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28890 && cloudTimeAsInt < Global_262145.f_28911)
			num = 0;
	}
	else if (hParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28891 && cloudTimeAsInt < Global_262145.f_28912)
			num = 0;
	}
	else if (hParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28892 && cloudTimeAsInt < Global_262145.f_28913)
			num = 0;
	}
	else if (hParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28893 && cloudTimeAsInt < Global_262145.f_28914)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28894 && cloudTimeAsInt < Global_262145.f_28915)
			num = 0;
	}
	else if (hParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28895 && cloudTimeAsInt < Global_262145.f_28916)
			num = 0;
	}
	else if (hParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28896 && cloudTimeAsInt < Global_262145.f_28917)
			num = 0;
	}
	else if (hParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28897 && cloudTimeAsInt < Global_262145.f_28918)
			num = 0;
	}
	else if (hParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28898 && cloudTimeAsInt < Global_262145.f_28919)
			num = 0;
	}
	else if (hParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28899 && cloudTimeAsInt < Global_262145.f_28920)
			num = 0;
	}
	else if (hParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28900 && cloudTimeAsInt < Global_262145.f_28921)
			num = 0;
	}
	else if (hParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28901 && cloudTimeAsInt < Global_262145.f_28922)
			num = 0;
	}
	else if (hParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28902 && cloudTimeAsInt < Global_262145.f_28923)
			num = 0;
	}
	else if (hParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28903 && cloudTimeAsInt < Global_262145.f_28924)
			num = 0;
	}
	else if (hParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28904 && cloudTimeAsInt < Global_262145.f_28925)
			num = 0;
	}
	else if (hParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28905 && cloudTimeAsInt < Global_262145.f_28926)
			num = 0;
	}
	else if (hParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28906 && cloudTimeAsInt < Global_262145.f_28927)
			num = 0;
	}
	else if (hParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28907 && cloudTimeAsInt < Global_262145.f_28928)
			num = 0;
	}
	else if (hParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28908 && cloudTimeAsInt < Global_262145.f_28929)
			num = 0;
	}
	else if (hParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28909 && cloudTimeAsInt < Global_262145.f_28930)
			num = 0;
	}
	else if (hParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28910 && cloudTimeAsInt < Global_262145.f_28931)
			num = 0;
	}
	else if (hParam0 == joaat("formula"))
	{
		if (!Global_262145.f_28933 && cloudTimeAsInt < Global_262145.f_28934 && !Global_262145.f_28888)
			num = 0;
	}
	else if (hParam0 == joaat("formula2"))
	{
		if (!Global_262145.f_28936 && cloudTimeAsInt < Global_262145.f_28937 && !Global_262145.f_28889)
			num = 0;
	}
	else if (hParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28941 && cloudTimeAsInt < Global_262145.f_28944)
			num = 0;
	}
	else if (hParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28942 && cloudTimeAsInt < Global_262145.f_28945)
			num = 0;
	}
	else if (hParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28943 && cloudTimeAsInt < Global_262145.f_28946)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29959 && cloudTimeAsInt < Global_262145.f_29624)
			num = 0;
	}
	else if (hParam0 == joaat("club"))
	{
		if (!Global_262145.f_29610 && cloudTimeAsInt < Global_262145.f_29631)
			num = 0;
	}
	else if (hParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29611 && cloudTimeAsInt < Global_262145.f_29617)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29957 && cloudTimeAsInt < Global_262145.f_29625)
			num = 0;
	}
	else if (hParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29958 && cloudTimeAsInt < Global_262145.f_29626)
			num = 0;
	}
	else if (hParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29604 && cloudTimeAsInt < Global_262145.f_29623)
			num = 0;
	}
	else if (hParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29605 && cloudTimeAsInt < Global_262145.f_29632)
			num = 0;
	}
	else if (hParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29606 && cloudTimeAsInt < Global_262145.f_29622)
			num = 0;
	}
	else if (hParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29607 && cloudTimeAsInt < Global_262145.f_29620)
			num = 0;
	}
	else if (hParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29953 && cloudTimeAsInt < Global_262145.f_29627)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29954 && cloudTimeAsInt < Global_262145.f_29628)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29955 && cloudTimeAsInt < Global_262145.f_29629)
			num = 0;
	}
	else if (hParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29956 && cloudTimeAsInt < Global_262145.f_29630)
			num = 0;
	}
	else if (hParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29608 && cloudTimeAsInt < Global_262145.f_29619)
			num = 0;
	}
	else if (hParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29609 && cloudTimeAsInt < Global_262145.f_29621)
			num = 0;
	}
	else if (hParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30418 && cloudTimeAsInt < Global_262145.f_30401)
			num = 0;
	}
	else if (hParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30419 && cloudTimeAsInt < Global_262145.f_30402)
			num = 0;
	}
	else if (hParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30420 && cloudTimeAsInt < Global_262145.f_30403)
			num = 0;
	}
	else if (hParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30421 && cloudTimeAsInt < Global_262145.f_30404)
			num = 0;
	}
	else if (hParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30422 && cloudTimeAsInt < Global_262145.f_30405)
			num = 0;
	}
	else if (hParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30423 && cloudTimeAsInt < Global_262145.f_30406)
			num = 0;
	}
	else if (hParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30424 && cloudTimeAsInt < Global_262145.f_30407)
			num = 0;
	}
	else if (hParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30425 && cloudTimeAsInt < Global_262145.f_30408)
			num = 0;
	}
	else if (hParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30426 && cloudTimeAsInt < Global_262145.f_30409)
			num = 0;
	}
	else if (hParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30435)
		{
		}
		else if (!Global_262145.f_30427 && cloudTimeAsInt < Global_262145.f_30410)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30428 && cloudTimeAsInt < Global_262145.f_30411)
			num = 0;
	}
	else if (hParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30429 && cloudTimeAsInt < Global_262145.f_30412)
			num = 0;
	}
	else if (hParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30430 && cloudTimeAsInt < Global_262145.f_30413)
			num = 0;
	}
	else if (hParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30431 && cloudTimeAsInt < Global_262145.f_30414)
			num = 0;
	}
	else if (hParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30436)
		{
		}
		else if (!Global_262145.f_30432 && cloudTimeAsInt < Global_262145.f_30415)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30433 && cloudTimeAsInt < Global_262145.f_30416)
			num = 0;
	}
	else if (hParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30434 && cloudTimeAsInt < Global_262145.f_30417)
			num = 0;
	}
	else if (hParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31290 && cloudTimeAsInt < Global_262145.f_31273)
			num = 0;
	}
	else if (hParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31291 && cloudTimeAsInt < Global_262145.f_31274)
			num = 0;
	}
	else if (hParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31292 && cloudTimeAsInt < Global_262145.f_31275)
			num = 0;
	}
	else if (hParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31293 && cloudTimeAsInt < Global_262145.f_31276)
			num = 0;
	}
	else if (hParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31294 && cloudTimeAsInt < Global_262145.f_31277)
			num = 0;
	}
	else if (hParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31295 && cloudTimeAsInt < Global_262145.f_31278)
			num = 0;
	}
	else if (hParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31296 && cloudTimeAsInt < Global_262145.f_31279)
			num = 0;
	}
	else if (hParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31297 && cloudTimeAsInt < Global_262145.f_31280)
			num = 0;
	}
	else if (hParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31298 && cloudTimeAsInt < Global_262145.f_31281)
			num = 0;
	}
	else if (hParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31299 && cloudTimeAsInt < Global_262145.f_31282)
			num = 0;
	}
	else if (hParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31300 && cloudTimeAsInt < Global_262145.f_31283)
			num = 0;
	}
	else if (hParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31301 && cloudTimeAsInt < Global_262145.f_31284)
			num = 0;
	}
	else if (hParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31302 && cloudTimeAsInt < Global_262145.f_31285)
			num = 0;
	}
	else if (hParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31303 && cloudTimeAsInt < Global_262145.f_31286)
			num = 0;
	}
	else if (hParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31304 && cloudTimeAsInt < Global_262145.f_31287)
			num = 0;
	}
	else if (hParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31305 && cloudTimeAsInt < Global_262145.f_31288)
			num = 0;
	}
	else if (hParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31306 && cloudTimeAsInt < Global_262145.f_31289)
			num = 0;
	}
	else if (hParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32214 && cloudTimeAsInt < Global_262145.f_32199)
			num = 0;
	}
	else if (hParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32215 && cloudTimeAsInt < Global_262145.f_32200)
			num = 0;
	}
	else if (hParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32216 && cloudTimeAsInt < Global_262145.f_32201)
			num = 0;
	}
	else if (hParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32217 && cloudTimeAsInt < Global_262145.f_32202)
			num = 0;
	}
	else if (hParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32218 && cloudTimeAsInt < Global_262145.f_32203)
			num = 0;
	}
	else if (hParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32219 && cloudTimeAsInt < Global_262145.f_32204)
			num = 0;
	}
	else if (hParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32220 && cloudTimeAsInt < Global_262145.f_32205)
			num = 0;
	}
	else if (hParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32221 && cloudTimeAsInt < Global_262145.f_32206)
			num = 0;
	}
	else if (hParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32222 && cloudTimeAsInt < Global_262145.f_32207)
			num = 0;
	}
	else if (hParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32223 && cloudTimeAsInt < Global_262145.f_32208)
			num = 0;
	}
	else if (hParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32224 && cloudTimeAsInt < Global_262145.f_32209)
			num = 0;
	}
	else if (hParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32225 && cloudTimeAsInt < Global_262145.f_32210)
			num = 0;
	}
	else if (hParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32226 && cloudTimeAsInt < Global_262145.f_32211)
			num = 0;
	}
	else if (hParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32227 && cloudTimeAsInt < Global_262145.f_32212)
			num = 0;
	}
	else if (hParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32292)
		{
		}
		else if (!Global_262145.f_32228 && cloudTimeAsInt < Global_262145.f_32213)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("brioso3"))
	{
		if (!*Global_262145.f_33472 && cloudTimeAsInt < *Global_262145.f_33453)
			num = 0;
	}
	else if (hParam0 == joaat("corsita"))
	{
		if (!*Global_262145.f_33466 && cloudTimeAsInt < *Global_262145.f_33447)
			num = 0;
	}
	else if (hParam0 == joaat("draugur"))
	{
		if (!*Global_262145.f_33470 && cloudTimeAsInt < *Global_262145.f_33451)
			num = 0;
	}
	else if (hParam0 == joaat("greenwood"))
	{
		if (!*Global_262145.f_33464 && cloudTimeAsInt < *Global_262145.f_33445)
			num = 0;
	}
	else if (hParam0 == joaat("kanjosj"))
	{
		if (!*Global_262145.f_33475 && cloudTimeAsInt < *Global_262145.f_33456)
			num = 0;
	}
	else if (hParam0 == joaat("lm87"))
	{
		if (!*Global_262145.f_33467 && cloudTimeAsInt < *Global_262145.f_33448)
			num = 0;
	}
	else if (hParam0 == joaat("postlude"))
	{
		if (!*Global_262145.f_33476 && cloudTimeAsInt < *Global_262145.f_33457)
			num = 0;
	}
	else if (hParam0 == joaat("rhinehart"))
	{
		if (!*Global_262145.f_33478 && cloudTimeAsInt < *Global_262145.f_33459)
			num = 0;
	}
	else if (hParam0 == joaat("sm722"))
	{
		if (!*Global_262145.f_33469 && cloudTimeAsInt < *Global_262145.f_33450)
			num = 0;
	}
	else if (hParam0 == joaat("tenf"))
	{
		if (!*Global_262145.f_33477 && cloudTimeAsInt < *Global_262145.f_33458)
			num = 0;
	}
	else if (hParam0 == joaat("tenf2"))
	{
		if (!*Global_262145.f_33480 && cloudTimeAsInt < *Global_262145.f_33461)
			num = 0;
	}
	else if (hParam0 == joaat("torero2"))
	{
		if (!*Global_262145.f_33465 && cloudTimeAsInt < *Global_262145.f_33446)
			num = 0;
	}
	else if (hParam0 == joaat("vigero2"))
	{
		if (!*Global_262145.f_33473 && cloudTimeAsInt < *Global_262145.f_33454)
			num = 0;
	}
	else if (hParam0 == joaat("weevil2"))
	{
		if (!*Global_262145.f_33479 && cloudTimeAsInt < *Global_262145.f_33460)
			num = 0;
	}
	else if (hParam0 == joaat("ruiner4"))
	{
		if (!*Global_262145.f_33471 && cloudTimeAsInt < *Global_262145.f_33452)
			num = 0;
	}
	else if (hParam0 == joaat("sentinel4"))
	{
		if (!*Global_262145.f_33481 && cloudTimeAsInt < *Global_262145.f_33462)
			num = 0;
	}
	else if (hParam0 == joaat("conada"))
	{
		if (!*Global_262145.f_33468 && cloudTimeAsInt < *Global_262145.f_33449)
			num = 0;
	}
	else if (hParam0 == joaat("omnisegt"))
	{
		if (!*Global_262145.f_33463 && cloudTimeAsInt < *Global_262145.f_33444)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_34451 && cloudTimeAsInt < *Global_262145.f_34435)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_34451 && cloudTimeAsInt < *Global_262145.f_34435)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_34460 && cloudTimeAsInt < *Global_262145.f_34443)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_34454 && cloudTimeAsInt < *Global_262145.f_34438)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_34448 && cloudTimeAsInt < *Global_262145.f_34432)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_34449 && cloudTimeAsInt < *Global_262145.f_34433)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_34446 && cloudTimeAsInt < *Global_262145.f_34430)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_34457 && cloudTimeAsInt < *Global_262145.f_34441)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_34461 && cloudTimeAsInt < *Global_262145.f_34445)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_34458 && cloudTimeAsInt < *Global_262145.f_34442)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_34447 && cloudTimeAsInt < *Global_262145.f_34431)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_34450 && cloudTimeAsInt < *Global_262145.f_34434)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_34459 && cloudTimeAsInt < *Global_262145.f_34444)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_34455 && cloudTimeAsInt < *Global_262145.f_34439)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_34456 && cloudTimeAsInt < *Global_262145.f_34440)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_34453 && cloudTimeAsInt < *Global_262145.f_34437)
			num = 0;
	}
	else if (hParam0 == joaat("taxi"))
	{
		if (!*Global_262145.f_34452 && cloudTimeAsInt < *Global_262145.f_34436)
			num = 0;
	}

	if (hParam0 == joaat("exemplar"))
		if (!*Global_262145.f_35402 && !*Global_262145.f_35403)
			num = 0;
	else if (hParam0 == joaat("cogcabrio"))
		if (!*Global_262145.f_35404 && !*Global_262145.f_35405)
			num = 0;
	else if (hParam0 == joaat("thrust"))
		if (!*Global_262145.f_35406 && !*Global_262145.f_35407)
			num = 0;
	else if (hParam0 == joaat("vindicator"))
		if (!*Global_262145.f_35408 && !*Global_262145.f_35409)
			num = 0;
	else if (hParam0 == joaat("coquette3"))
		if (!*Global_262145.f_35410 && !*Global_262145.f_35411)
			num = 0;
	else if (hParam0 == joaat("brawler"))
		if (!*Global_262145.f_35412 && !*Global_262145.f_35413)
			num = 0;
	else if (hParam0 == joaat("cognoscenti"))
		if (!*Global_262145.f_35414 && !*Global_262145.f_35415)
			num = 0;
	else if (hParam0 == joaat("cognoscenti2"))
		if (!*Global_262145.f_35416 && !*Global_262145.f_35417)
			num = 0;
	else if (hParam0 == joaat("cog55"))
		if (!*Global_262145.f_35418 && !*Global_262145.f_35419)
			num = 0;
	else if (hParam0 == joaat("cog552"))
		if (!*Global_262145.f_35420 && !*Global_262145.f_35421)
			num = 0;
	else if (hParam0 == joaat("superd"))
		if (!*Global_262145.f_35422 && !*Global_262145.f_35423)
			num = 0;
	else if (hParam0 == joaat("schafter4"))
		if (!*Global_262145.f_35424 && !*Global_262145.f_35425)
			num = 0;
	else if (hParam0 == joaat("schafter6"))
		if (!*Global_262145.f_35426 && !*Global_262145.f_35427)
			num = 0;
	else if (hParam0 == joaat("alpha"))
		if (!*Global_262145.f_35428 && !*Global_262145.f_35429)
			num = 0;
	else if (hParam0 == joaat("feltzer2"))
		if (!*Global_262145.f_35430 && !*Global_262145.f_35431)
			num = 0;
	else if (hParam0 == joaat("massacro"))
		if (!*Global_262145.f_35432 && !*Global_262145.f_35433)
			num = 0;
	else if (hParam0 == joaat("rapidgt"))
		if (!*Global_262145.f_35434 && !*Global_262145.f_35435)
			num = 0;
	else if (hParam0 == joaat("rapidgt2"))
		if (!*Global_262145.f_35436 && !*Global_262145.f_35437)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!*Global_262145.f_35438 && !*Global_262145.f_35439)
			num = 0;
	else if (hParam0 == joaat("jester"))
		if (!*Global_262145.f_35440 && !*Global_262145.f_35441)
			num = 0;
	else if (hParam0 == joaat("bestiagts"))
		if (!*Global_262145.f_35442 && !*Global_262145.f_35443)
			num = 0;
	else if (hParam0 == joaat("carbonizzare"))
		if (!*Global_262145.f_35444 && !*Global_262145.f_35445)
			num = 0;
	else if (hParam0 == joaat("coquette"))
		if (!*Global_262145.f_35446 && !*Global_262145.f_35447)
			num = 0;
	else if (hParam0 == joaat("furoregt"))
		if (!*Global_262145.f_35448 && !*Global_262145.f_35449)
			num = 0;
	else if (hParam0 == joaat("ninef"))
		if (!*Global_262145.f_35450 && !*Global_262145.f_35451)
			num = 0;
	else if (hParam0 == joaat("ninef2"))
		if (!*Global_262145.f_35452 && !*Global_262145.f_35453)
			num = 0;
	else if (hParam0 == joaat("verlierer2"))
		if (!*Global_262145.f_35454 && !*Global_262145.f_35455)
			num = 0;
	else if (hParam0 == joaat("btype"))
		if (!*Global_262145.f_35456 && !*Global_262145.f_35457)
			num = 0;
	else if (hParam0 == joaat("feltzer3"))
		if (!*Global_262145.f_35458 && !*Global_262145.f_35459)
			num = 0;
	else if (hParam0 == joaat("stingergt"))
		if (!*Global_262145.f_35460 && !*Global_262145.f_35461)
			num = 0;
	else if (hParam0 == joaat("stinger"))
		if (!*Global_262145.f_35462 && !*Global_262145.f_35463)
			num = 0;
	else if (hParam0 == joaat("coquette2"))
		if (!*Global_262145.f_35464 && !*Global_262145.f_35465)
			num = 0;
	else if (hParam0 == joaat("jb700"))
		if (!*Global_262145.f_35466 && !*Global_262145.f_35467)
			num = 0;
	else if (hParam0 == joaat("mamba"))
		if (!*Global_262145.f_35468 && !*Global_262145.f_35469)
			num = 0;
	else if (hParam0 == joaat("monroe"))
		if (!*Global_262145.f_35470 && !*Global_262145.f_35471)
			num = 0;
	else if (hParam0 == joaat("btype3"))
		if (!*Global_262145.f_35472 && !*Global_262145.f_35473)
			num = 0;
	else if (hParam0 == joaat("ztype"))
		if (!*Global_262145.f_35474 && !*Global_262145.f_35475)
			num = 0;
	else if (hParam0 == joaat("voltic"))
		if (!*Global_262145.f_35476 && !*Global_262145.f_35477)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!*Global_262145.f_35478 && !*Global_262145.f_35479)
			num = 0;
	else if (hParam0 == joaat("cheetah"))
		if (!*Global_262145.f_35480 && !*Global_262145.f_35481)
			num = 0;
	else if (hParam0 == joaat("entityxf"))
		if (!*Global_262145.f_35482 && !*Global_262145.f_35483)
			num = 0;
	else if (hParam0 == joaat("infernus"))
		if (!*Global_262145.f_35484 && !*Global_262145.f_35485)
			num = 0;
	else if (hParam0 == joaat("vacca"))
		if (!*Global_262145.f_35486 && !*Global_262145.f_35487)
			num = 0;
	else if (hParam0 == joaat("bullet"))
		if (!*Global_262145.f_35488 && !*Global_262145.f_35489)
			num = 0;
	else if (hParam0 == joaat("fmj"))
		if (!*Global_262145.f_35490 && !*Global_262145.f_35491)
			num = 0;
	else if (hParam0 == joaat("baller2"))
		if (!*Global_262145.f_35492 && !*Global_262145.f_35493)
			num = 0;
	else if (hParam0 == joaat("baller3"))
		if (!*Global_262145.f_35494 && !*Global_262145.f_35495)
			num = 0;
	else if (hParam0 == joaat("baller5"))
		if (!*Global_262145.f_35496 && !*Global_262145.f_35497)
			num = 0;
	else if (hParam0 == joaat("baller4"))
		if (!*Global_262145.f_35498 && !*Global_262145.f_35499)
			num = 0;
	else if (hParam0 == joaat("baller6"))
		if (!*Global_262145.f_35500 && !*Global_262145.f_35501)
			num = 0;
	else if (hParam0 == joaat("xls"))
		if (!*Global_262145.f_35502 && !*Global_262145.f_35503)
			num = 0;
	else if (hParam0 == joaat("xls2"))
		if (!*Global_262145.f_35504 && !*Global_262145.f_35505)
			num = 0;
	else if (hParam0 == joaat("prairie"))
		if (!*Global_262145.f_35506 && !*Global_262145.f_35507)
			num = 0;
	else if (hParam0 == joaat("issi2"))
		if (!*Global_262145.f_35508 && !*Global_262145.f_35509)
			num = 0;
	else if (hParam0 == joaat("dilettante"))
		if (!*Global_262145.f_35510 && !*Global_262145.f_35511)
			num = 0;
	else if (hParam0 == joaat("felon"))
		if (!*Global_262145.f_35512 && !*Global_262145.f_35513)
			num = 0;
	else if (hParam0 == joaat("felon2"))
		if (!*Global_262145.f_35514 && !*Global_262145.f_35515)
			num = 0;
	else if (hParam0 == joaat("f620"))
		if (!*Global_262145.f_35516 && !*Global_262145.f_35517)
			num = 0;
	else if (hParam0 == joaat("jackal"))
		if (!*Global_262145.f_35518 && !*Global_262145.f_35519)
			num = 0;
	else if (hParam0 == joaat("oracle2"))
		if (!*Global_262145.f_35520 && !*Global_262145.f_35521)
			num = 0;
	else if (hParam0 == joaat("oracle"))
		if (!*Global_262145.f_35522 && !*Global_262145.f_35523)
			num = 0;
	else if (hParam0 == joaat("sentinel2"))
		if (!*Global_262145.f_35524 && !*Global_262145.f_35525)
			num = 0;
	else if (hParam0 == joaat("zion"))
		if (!*Global_262145.f_35526 && !*Global_262145.f_35527)
			num = 0;
	else if (hParam0 == joaat("zion2"))
		if (!*Global_262145.f_35528 && !*Global_262145.f_35529)
			num = 0;
	else if (hParam0 == joaat("akuma"))
		if (!*Global_262145.f_35530 && !*Global_262145.f_35531)
			num = 0;
	else if (hParam0 == joaat("double"))
		if (!*Global_262145.f_35532 && !*Global_262145.f_35533)
			num = 0;
	else if (hParam0 == joaat("enduro"))
		if (!*Global_262145.f_35534 && !*Global_262145.f_35535)
			num = 0;
	else if (hParam0 == joaat("hexer"))
		if (!*Global_262145.f_35536 && !*Global_262145.f_35537)
			num = 0;
	else if (hParam0 == joaat("innovation"))
		if (!*Global_262145.f_35538 && !*Global_262145.f_35539)
			num = 0;
	else if (hParam0 == joaat("sanchez"))
		if (!*Global_262145.f_35540 && !*Global_262145.f_35541)
			num = 0;
	else if (hParam0 == joaat("sanchez2"))
		if (!*Global_262145.f_35542 && !*Global_262145.f_35543)
			num = 0;
	else if (hParam0 == joaat("bati2"))
		if (!*Global_262145.f_35544 && !*Global_262145.f_35545)
			num = 0;
	else if (hParam0 == joaat("faggio2"))
		if (!*Global_262145.f_35546 && !*Global_262145.f_35547)
			num = 0;
	else if (hParam0 == joaat("ruffian"))
		if (!*Global_262145.f_35548 && !*Global_262145.f_35549)
			num = 0;
	else if (hParam0 == joaat("nemesis"))
		if (!*Global_262145.f_35550 && !*Global_262145.f_35551)
			num = 0;
	else if (hParam0 == joaat("hakuchou"))
		if (!*Global_262145.f_35552 && !*Global_262145.f_35553)
			num = 0;
	else if (hParam0 == joaat("pcj"))
		if (!*Global_262145.f_35554 && !*Global_262145.f_35555)
			num = 0;
	else if (hParam0 == joaat("vader"))
		if (!*Global_262145.f_35556 && !*Global_262145.f_35557)
			num = 0;
	else if (hParam0 == joaat("sovereign"))
		if (!*Global_262145.f_35558 && !*Global_262145.f_35559)
			num = 0;
	else if (hParam0 == joaat("gauntlet"))
		if (!*Global_262145.f_35560 && !*Global_262145.f_35561)
			num = 0;
	else if (hParam0 == joaat("ratloader"))
		if (!*Global_262145.f_35562 && !*Global_262145.f_35563)
			num = 0;
	else if (hParam0 == joaat("picador"))
		if (!*Global_262145.f_35564 && !*Global_262145.f_35565)
			num = 0;
	else if (hParam0 == joaat("vigero"))
		if (!*Global_262145.f_35566 && !*Global_262145.f_35567)
			num = 0;
	else if (hParam0 == joaat("ruiner"))
		if (!*Global_262145.f_35568 && !*Global_262145.f_35569)
			num = 0;
	else if (hParam0 == joaat("tampa"))
		if (!*Global_262145.f_35570 && !*Global_262145.f_35571)
			num = 0;
	else if (hParam0 == joaat("blade"))
		if (!*Global_262145.f_35572 && !*Global_262145.f_35573)
			num = 0;
	else if (hParam0 == joaat("bifta"))
		if (!*Global_262145.f_35574 && !*Global_262145.f_35575)
			num = 0;
	else if (hParam0 == joaat("dune"))
		if (!*Global_262145.f_35576 && !*Global_262145.f_35577)
			num = 0;
	else if (hParam0 == joaat("bfinjection"))
		if (!*Global_262145.f_35578 && !*Global_262145.f_35579)
			num = 0;
	else if (hParam0 == joaat("bodhi2"))
		if (!*Global_262145.f_35580 && !*Global_262145.f_35581)
			num = 0;
	else if (hParam0 == joaat("kalahari"))
		if (!*Global_262145.f_35582 && !*Global_262145.f_35583)
			num = 0;
	else if (hParam0 == joaat("rancherxl"))
		if (!*Global_262145.f_35584 && !*Global_262145.f_35585)
			num = 0;
	else if (hParam0 == joaat("rebel2"))
		if (!*Global_262145.f_35586 && !*Global_262145.f_35587)
			num = 0;
	else if (hParam0 == joaat("rebel"))
		if (!*Global_262145.f_35588 && !*Global_262145.f_35589)
			num = 0;
	else if (hParam0 == joaat("blazer"))
		if (!*Global_262145.f_35590 && !*Global_262145.f_35591)
			num = 0;
	else if (hParam0 == joaat("blazer3"))
		if (!*Global_262145.f_35592 && !*Global_262145.f_35593)
			num = 0;
	else if (hParam0 == joaat("sandking2"))
		if (!*Global_262145.f_35594 && !*Global_262145.f_35595)
			num = 0;
	else if (hParam0 == joaat("washington"))
		if (!*Global_262145.f_35596 && !*Global_262145.f_35597)
			num = 0;
	else if (hParam0 == joaat("schafter2"))
		if (!*Global_262145.f_35598 && !*Global_262145.f_35599)
			num = 0;
	else if (hParam0 == joaat("romero"))
		if (!*Global_262145.f_35600 && !*Global_262145.f_35601)
			num = 0;
	else if (hParam0 == joaat("fugitive"))
		if (!*Global_262145.f_35602 && !*Global_262145.f_35603)
			num = 0;
	else if (hParam0 == joaat("surge"))
		if (!*Global_262145.f_35604 && !*Global_262145.f_35605)
			num = 0;
	else if (hParam0 == joaat("asea"))
		if (!*Global_262145.f_35606 && !*Global_262145.f_35607)
			num = 0;
	else if (hParam0 == joaat("premier"))
		if (!*Global_262145.f_35608 && !*Global_262145.f_35609)
			num = 0;
	else if (hParam0 == joaat("regina"))
		if (!*Global_262145.f_35610 && !*Global_262145.f_35611)
			num = 0;
	else if (hParam0 == joaat("asterope"))
		if (!*Global_262145.f_35612 && !*Global_262145.f_35613)
			num = 0;
	else if (hParam0 == joaat("intruder"))
		if (!*Global_262145.f_35614 && !*Global_262145.f_35615)
			num = 0;
	else if (hParam0 == joaat("tailgater"))
		if (!*Global_262145.f_35616 && !*Global_262145.f_35617)
			num = 0;
	else if (hParam0 == joaat("stanier"))
		if (!*Global_262145.f_35618 && !*Global_262145.f_35619)
			num = 0;
	else if (hParam0 == joaat("ingot"))
		if (!*Global_262145.f_35620 && !*Global_262145.f_35621)
			num = 0;
	else if (hParam0 == joaat("warrener"))
		if (!*Global_262145.f_35622 && !*Global_262145.f_35623)
			num = 0;
	else if (hParam0 == joaat("stratum"))
		if (!*Global_262145.f_35624 && !*Global_262145.f_35625)
			num = 0;
	else if (hParam0 == joaat("schwarzer"))
		if (!*Global_262145.f_35626 && !*Global_262145.f_35627)
			num = 0;
	else if (hParam0 == joaat("surano"))
		if (!*Global_262145.f_35628 && !*Global_262145.f_35629)
			num = 0;
	else if (hParam0 == joaat("buffalo"))
		if (!*Global_262145.f_35630 && !*Global_262145.f_35631)
			num = 0;
	else if (hParam0 == joaat("buffalo2"))
		if (!*Global_262145.f_35632 && !*Global_262145.f_35633)
			num = 0;
	else if (hParam0 == joaat("massacro2"))
		if (!*Global_262145.f_35634 && !*Global_262145.f_35635)
			num = 0;
	else if (hParam0 == joaat("jester2"))
		if (!*Global_262145.f_35636 && !*Global_262145.f_35637)
			num = 0;
	else if (hParam0 == joaat("futo"))
		if (!*Global_262145.f_35638 && !*Global_262145.f_35639)
			num = 0;
	else if (hParam0 == joaat("penumbra"))
		if (!*Global_262145.f_35640 && !*Global_262145.f_35641)
			num = 0;
	else if (hParam0 == joaat("fusilade"))
		if (!*Global_262145.f_35642 && !*Global_262145.f_35643)
			num = 0;
	else if (hParam0 == joaat("btype2"))
		if (!*Global_262145.f_35644 && !*Global_262145.f_35645)
			num = 0;
	else if (hParam0 == joaat("pigalle"))
		if (!*Global_262145.f_35646 && !*Global_262145.f_35647)
			num = 0;
	else if (hParam0 == joaat("cavalcade"))
		if (!*Global_262145.f_35648 && !*Global_262145.f_35649)
			num = 0;
	else if (hParam0 == joaat("cavalcade2"))
		if (!*Global_262145.f_35650 && !*Global_262145.f_35651)
			num = 0;
	else if (hParam0 == joaat("bjxl"))
		if (!*Global_262145.f_35652 && !*Global_262145.f_35653)
			num = 0;
	else if (hParam0 == joaat("serrano"))
		if (!*Global_262145.f_35654 && !*Global_262145.f_35655)
			num = 0;
	else if (hParam0 == joaat("gresley"))
		if (!*Global_262145.f_35656 && !*Global_262145.f_35657)
			num = 0;
	else if (hParam0 == joaat("seminole"))
		if (!*Global_262145.f_35658 && !*Global_262145.f_35659)
			num = 0;
	else if (hParam0 == joaat("granger"))
		if (!*Global_262145.f_35660 && !*Global_262145.f_35661)
			num = 0;
	else if (hParam0 == joaat("landstalker"))
		if (!*Global_262145.f_35662 && !*Global_262145.f_35663)
			num = 0;
	else if (hParam0 == joaat("habanero"))
		if (!*Global_262145.f_35664 && !*Global_262145.f_35665)
			num = 0;
	else if (hParam0 == joaat("fq2"))
		if (!*Global_262145.f_35666 && !*Global_262145.f_35667)
			num = 0;
	else if (hParam0 == joaat("baller"))
		if (!*Global_262145.f_35668 && !*Global_262145.f_35669)
			num = 0;
	else if (hParam0 == joaat("patriot"))
		if (!*Global_262145.f_35670 && !*Global_262145.f_35671)
			num = 0;
	else if (hParam0 == joaat("rocoto"))
		if (!*Global_262145.f_35672 && !*Global_262145.f_35673)
			num = 0;
	else if (hParam0 == joaat("radi"))
		if (!*Global_262145.f_35674 && !*Global_262145.f_35675)
			num = 0;
	else if (hParam0 == joaat("mesa3"))
		if (!*Global_262145.f_35676 && !*Global_262145.f_35677)
			num = 0;
	else if (hParam0 == joaat("monster"))
		if (!*Global_262145.f_35678 && !*Global_262145.f_35679)
			num = 0;
	else if (hParam0 == 1336514315)
		if (!*Global_262145.f_35708 && cloudTimeAsInt < *Global_262145.f_35695)
			num = 0;
	else if (hParam0 == -1659004814)
		if (!*Global_262145.f_35707 && cloudTimeAsInt < *Global_262145.f_35694)
			num = 0;
	else if (hParam0 == -654498607)
		if (!*Global_262145.f_35709 && cloudTimeAsInt < *Global_262145.f_35696)
			num = 0;
	else if (hParam0 == -979292575)
		if (!*Global_262145.f_35700 && cloudTimeAsInt < *Global_262145.f_35687)
			num = 0;
	else if (hParam0 == -1763675285)
		if (!*Global_262145.f_35697 && cloudTimeAsInt < *Global_262145.f_35684)
			num = 0;
	else if (hParam0 == func_20(true))
		num = 1;
	else if (hParam0 == -536105557)
		if (!*Global_262145.f_35698 && cloudTimeAsInt < *Global_262145.f_35685)
			num = 0;
	else if (hParam0 == 1447690049)
		if (!*Global_262145.f_35701 && cloudTimeAsInt < *Global_262145.f_35688)
			num = 0;
	else if (hParam0 == 165968051)
		if (!*Global_262145.f_35704 && cloudTimeAsInt < *Global_262145.f_35691)
			num = 0;
	else if (hParam0 == 191916658)
		if (!*Global_262145.f_35702 && cloudTimeAsInt < *Global_262145.f_35689)
			num = 0;
	else if (hParam0 == 802856453)
		if (!*Global_262145.f_35699 && cloudTimeAsInt < *Global_262145.f_35686)
			num = 0;
	else if (hParam0 == 610429990)
		if (!*Global_262145.f_35706 && cloudTimeAsInt < *Global_262145.f_35693)
			num = 0;
	else if (hParam0 == 239897677)
		if (!*Global_262145.f_35703 && cloudTimeAsInt < *Global_262145.f_35690)
			num = 0;
	else if (hParam0 == -897824023)
		if (!*Global_262145.f_35705 && cloudTimeAsInt < *Global_262145.f_35692)
			num = 0;
	else if (hParam0 == -1983622024)
		if (!*Global_262145.f_35705 && cloudTimeAsInt < *Global_262145.f_35692)
			num = 0;
	else if (hParam0 == -122993285)
		if (!*Global_262145.f_36286 && cloudTimeAsInt < *Global_262145.f_36266)
			num = 0;
	else if (hParam0 == -38879449)
		if (!*Global_262145.f_36291 && cloudTimeAsInt < *Global_262145.f_36271)
			num = 0;
	else if (hParam0 == -465825307)
		if (!*Global_262145.f_36285 && cloudTimeAsInt < *Global_262145.f_36265)
			num = 0;
	else if (hParam0 == -441209695)
		if (!*Global_262145.f_36292 && cloudTimeAsInt < *Global_262145.f_36272)
			num = 0;
	else if (hParam0 == -1233767450)
		if (!*Global_262145.f_36297 && cloudTimeAsInt < *Global_262145.f_36277)
			num = 0;
	else if (hParam0 == joaat("Police5"))
		if (!*Global_262145.f_36288 && cloudTimeAsInt < *Global_262145.f_36268)
			num = 0;
	else if (hParam0 == -478639183)
		if (!*Global_262145.f_36296 && cloudTimeAsInt < *Global_262145.f_36276)
			num = 0;
	else if (hParam0 == -1029730482)
		if (!*Global_262145.f_36295 && cloudTimeAsInt < *Global_262145.f_36275)
			num = 0;
	else if (hParam0 == joaat("police4"))
		if (!*Global_262145.f_36289 && cloudTimeAsInt < *Global_262145.f_36269)
			num = 0;
	else if (hParam0 == 372621319)
		if (!*Global_262145.f_36287 && cloudTimeAsInt < *Global_262145.f_36267)
			num = 0;
	else if (hParam0 == -741120335)
		if (!*Global_262145.f_36293 && cloudTimeAsInt < *Global_262145.f_36273)
			num = 0;
	else if (hParam0 == -863358884)
		if (!*Global_262145.f_36301 && cloudTimeAsInt < *Global_262145.f_36281)
			num = 0;
	else if (hParam0 == -768044142)
		if (!*Global_262145.f_36300 && cloudTimeAsInt < *Global_262145.f_36280)
			num = 0;
	else if (hParam0 == -178442374)
		if (!*Global_262145.f_36299 && cloudTimeAsInt < *Global_262145.f_36279)
			num = 0;
	else if (hParam0 == 167522317)
		if (!*Global_262145.f_36302 && cloudTimeAsInt < *Global_262145.f_36282)
			num = 0;
	else if (hParam0 == -1372798934)
		if (!*Global_262145.f_36298 && cloudTimeAsInt < *Global_262145.f_36278)
			num = 0;
	else if (hParam0 == -842765535)
		if (!*Global_262145.f_36303 && cloudTimeAsInt < *Global_262145.f_36283)
			num = 0;
	else if (hParam0 == 728350375)
		if (!*Global_262145.f_36304 && cloudTimeAsInt < *Global_262145.f_36284)
			num = 0;

	return num;
}

Hash func_20(BOOL bParam0) // Position - 0x6F76 Hash - 0x9AA99395 ^0x67DFE72D
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x6F90 Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x6FA6 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_23() // Position - 0x6FBC Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_24() // Position - 0x6FC5 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_25() // Position - 0x6FCE Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_26() // Position - 0x6FD7 Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x6FF0 Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_153246 == 2)
		return true;
	else if (Global_153246 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_28(Vehicle veParam0) // Position - 0x70A8 Hash - 0xC71C0264 ^0xC0795D61
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_16(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_29(Vehicle veParam0) // Position - 0x70EF Hash - 0xA5B9FC6B ^0x23EADD90
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98733[i]))
			if (Global_98733[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_30(Vehicle veParam0) // Position - 0x712A Hash - 0xB4CAAE6F ^0x153EF8BE
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98703[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98703[i], false))
				if (Global_98703[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98703[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_31(Vehicle veParam0) // Position - 0x71A6 Hash - 0x7BB181DF ^0x17C4552A
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[24]))
		if (veParam0 == Global_78038.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_78038.f_484[i])
					return true;
	}

	return false;
}

BOOL func_32(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x728E Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_33(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114370.f_7232[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_33(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x72FC Hash - 0x8E372EAA ^0x26BB4EB6
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

Vehicle func_34(int iParam0) // Position - 0x73D5 Hash - 0x220835E3 ^0xF13BEB49
{
	if (iParam0 == -1)
		return 0;

	return Global_78038.f_139[iParam0];
}

var func_35() // Position - 0x73F1 Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_45(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_44(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_43(&unk, CLOCK::GET_CLOCK_HOURS());
	func_38(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_37(&unk, CLOCK::GET_CLOCK_MONTH());
	func_36(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_36(var uParam0, int iParam1) // Position - 0x7437 Hash - 0x15B9927E ^0x4A4674
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_37(var uParam0, int iParam1) // Position - 0x74BD Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_38(var uParam0, int iParam1) // Position - 0x74F0 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_42(*uParam0);
	num2 = func_40(*uParam0);

	if (iParam1 < 1 || iParam1 > func_39(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_39(int iParam0, int iParam1) // Position - 0x7541 Hash - 0xD3EBACB3 ^0xD3EBACB3
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_40(int iParam0) // Position - 0x75E3 Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_41(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7605 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_42(int iParam0) // Position - 0x761C Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

void func_43(var uParam0, int iParam1) // Position - 0x7629 Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_44(var uParam0, int iParam1) // Position - 0x7663 Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_45(var uParam0, int iParam1) // Position - 0x769E Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_46(var uParam0, int iParam1) // Position - 0x76DA Hash - 0xF39478F9 ^0x788C4A90
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_47(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_47(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_47(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_47(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_47(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_47(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_47(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_47(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_47(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_114370.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_57(Global_114370.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_114370.f_32752.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_114370.f_32752.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_114370.f_32752.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_57(Global_114370.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114370.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114370.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_57(Global_114370.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114370.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114370.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

int func_47(eCharacter echParam0, int iParam1) // Position - 0x8DCB Hash - 0x3C1119CD ^0x1010ECAE
{
	int num;

	if (func_49(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_48(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_48(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x8E0D Hash - 0xF92B8944 ^0xD11BCD5C
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_114370.f_9088.f_99.f_58[128] && !Global_114370.f_9088.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114370.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_114370.f_9088.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_49(eCharacter echParam0) // Position - 0x9069 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_50(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, eCharacter echParam6) // Position - 0x9075 Hash - 0xE596DE1C ^0xAEF9731A
{
	if (func_46(&Global_78038.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_78038.f_555[0 /*21*/].f_9, 10))
		{
			func_55(iParam0);
			func_54(uParam1, &Global_114370.f_32752.f_69[Global_78038.f_555[0 /*21*/].f_14 /*78*/]);
		
			if (IS_BIT_SET(Global_78038.f_555[0 /*21*/].f_9, 11))
			{
				Global_114370.f_32752.f_1864[Global_78038.f_555[0 /*21*/].f_14 /*3*/] = { uParam2 };
				Global_114370.f_32752.f_1934[Global_78038.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114370.f_32752.f_1864[Global_78038.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114370.f_32752.f_1934[Global_78038.f_555[0 /*21*/].f_14] = -1f;
			}
		
			Global_114370.f_32752.f_1958[Global_78038.f_555[0 /*21*/].f_14] = echParam6 + 1;
			func_51(iParam0, true);
		}
	}

	return;
}

void func_51(int iParam0, BOOL bParam1) // Position - 0x916E Hash - 0xF45B4890 ^0xF45B4890
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_53(iParam0, 0))
		{
			func_52(iParam0, 1, false);
			func_52(iParam0, 2, false);
			func_52(iParam0, 3, false);
			func_52(iParam0, 4, false);
			func_52(iParam0, 0, true);
			Global_78038[iParam0] = 1;
		}
	}
	else
	{
		func_52(iParam0, 0, false);
	}

	return;
}

void func_52(int iParam0, int iParam1, BOOL bParam2) // Position - 0x91CB Hash - 0xDEF0CB8B ^0x421AAE37
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_114370.f_32752[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_114370.f_32752[iParam0], iParam1);

	return;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x9206 Hash - 0x9EA0654 ^0x9EA0654
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_32752[iParam0], iParam1);
}

void func_54(var uParam0, var uParam1) // Position - 0x9226 Hash - 0x8EF4EDA5 ^0xC1247BD8
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

void func_55(int iParam0) // Position - 0x92F2 Hash - 0x64A608A0 ^0xF3C031DC
{
	if (iParam0 == -1)
		return;

	if (func_46(&Global_78038.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78038.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_78038.f_139[iParam0]);
			Global_78038.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_78038.f_555[0 /*21*/].f_9, 13))
			func_51(iParam0, false);
	}

	return;
}

eCharacter func_56(Vehicle veParam0) // Position - 0x9369 Hash - 0x593067C2 ^0x2918B7DD
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98703[i]))
			if (Global_98703[i] == veParam0)
				return Global_98713[i];
	}

	return _CHAR_NULL;
}

BOOL func_57(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x93CC Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_58(Vehicle veParam0, var uParam1) // Position - 0x9413 Hash - 0x5E84B52A ^0xEF20F807
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_62(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_61(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_60(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_59(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_59(int iParam0) // Position - 0x96BE Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_60(var uParam0, var uParam1, var uParam2) // Position - 0x976E Hash - 0x4455160E ^0x8E5B3F28
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_61(int iParam0) // Position - 0x9961 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_62(var uParam0) // Position - 0x9981 Hash - 0xB95AF921 ^0x4DC7C61C
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

void func_63(int iParam0) // Position - 0x9A32 Hash - 0x6203AFCC ^0x6203AFCC
{
	iParam0 != 24 && iParam0 != 25;
	func_55(iParam0);
	func_51(iParam0, false);
	return;
}

Vector3 func_64(float fParam0, var uParam1, var uParam2) // Position - 0x9A59 Hash - 0x6F4648E7 ^0x44C762D3
{
	return -SYSTEM::SIN(fParam0.f_2) * SYSTEM::COS(fParam0), SYSTEM::COS(fParam0.f_2) * SYSTEM::COS(fParam0), SYSTEM::SIN(fParam0);
}

void func_65(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12) // Position - 0x9A86 Hash - 0x394D5546 ^0xF43EBD07
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_PLAYING(playerIndex))
	{
		func_192(false);
	
		if (bParam9)
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (bParam8)
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					if (func_186(PLAYER::PLAYER_PED_ID(), 8, 15))
						func_68(PLAYER::PLAYER_PED_ID(), 8, PV_COMP_HEAD, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				
					if (func_186(PLAYER::PLAYER_PED_ID(), PV_COMP_TASK, PV_COMP_FEET))
						func_68(PLAYER::PLAYER_PED_ID(), 9, PV_COMP_HEAD, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			
				case CHAR_FRANKLIN:
					if (func_186(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_BERD) || func_186(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_DECL))
						func_68(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			
				case CHAR_TREVOR:
					if (func_186(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_LOWR))
						func_68(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			}
		}
	
		if (iParam6 == 1)
			MISC::CLEAR_AREA_OF_PEDS(_GET_PLAYER_COORDS(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
	
		if (iParam7 == 1)
			MISC::CLEAR_AREA_OF_OBJECTS(fParam0, 30f, 0);
	
		if (bParam10)
			FIRE::STOP_FIRE_IN_RANGE(fParam0, 30f);
	
		MISC::CLEAR_AREA_OF_PROJECTILES(fParam0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(playerIndex, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerIndex, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, true);
	
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
	
		HUD::CLEAR_PRINTS();
	
		if (iParam11 == 1)
			HUD::CLEAR_HELP(true);
	
		if (iParam3 == 1)
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
	
		if (iParam4 == 1)
		{
			hLocal_34 = 0;
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				hLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
	
		if (iParam5 == 1)
			func_66(500, false);
	}

	return;
}

void func_66(int iParam0, BOOL bParam1) // Position - 0x9C44 Hash - 0xE7B2CDD3 ^0xC2D0D6D9
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		if (!CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(iParam0);

	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}

	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x9C80 Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

int func_68(Ped pedParam0, int iParam1, ePedComponentType epctParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x9C93 Hash - 0x2F89DA4B ^0xC114075C
{
	int i;
	int j;
	int k;
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;
	ePedComponentType type4;
	ePedComponentType type5;
	ePedComponentType type6;
	ePedComponentType type7;
	Hash entityModel;
	var unk;
	var unk18;
	var unk28;
	var unk45;
	var unk59;

	if (PED::IS_PED_INJURED(pedParam0) || epctParam2 == -99)
		return 0;

	Global_79029 = Global_79029 + 1;
	type3 = -99;
	type4 = -99;
	type5 = -99;
	type6 = -99;
	type7 = -99;
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (iParam5 == 0)
	{
		Global_79031[1 /*14*/] = { func_121(entityModel, iParam1, epctParam2, -1) };
	
		if (!func_120(iParam3))
		{
			Global_79029 = Global_79029 - 1;
			return 0;
		}
	
		func_111(iParam1);
	}

	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (entityModel == joaat("Player_One"))
			{
				type3 = func_109(pedParam0, 8);
			
				if (type3 != PV_COMP_TASK)
					type3 = -99;
			}
		
			type4 = func_109(pedParam0, 9);
		
			if (entityModel == joaat("Player_Zero"))
			{
				if (type4 >= PV_COMP_TASK && type4 <= 14)
				{
				}
				else
				{
					type4 = -99;
				}
			}
			else if (entityModel == joaat("Player_One"))
			{
				if (type4 >= PV_COMP_HAND && type4 <= PV_COMP_DECL)
				{
				}
				else
				{
					type4 = -99;
				}
			}
			else if (entityModel == joaat("Player_Two"))
			{
				if (type4 >= PV_COMP_TASK && type4 <= 14 || type4 >= 15 && type4 <= 16)
				{
				}
				else
				{
					type4 = -99;
				}
			}
		
			type5 = func_108(pedParam0, PV_COMP_BERD);
		
			if (!func_107(entityModel, 14, type5, -1))
				type5 = -99;
		
			type6 = func_108(pedParam0, PV_COMP_HEAD);
		
			if (!func_106(entityModel, 14, type6, -1) && !func_105(entityModel, 14, type6, -1))
				type6 = -99;
		
			if (entityModel == joaat("Player_One"))
				type7 = func_108(pedParam0, PV_COMP_HAIR);
		}
	
		PED::CLEAR_ALL_PED_PROPS(pedParam0, 1);
		unk = 15;
	
		if (iParam5 == 1)
			unk = { Global_79074 };
		else
			unk = { func_101(entityModel, epctParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99)
			{
				Global_79031[1 /*14*/] = { func_121(entityModel, i, unk[i], -1) };
			
				if (IS_BIT_SET(Global_79031[1 /*14*/].f_6, 0))
				{
					if (i == 13)
					{
						unk18 = 9;
					
						if (iParam5 == 1)
							unk18 = { Global_79091 };
						else
							unk18 = { func_98(entityModel, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							Global_79031[1 /*14*/] = { func_121(entityModel, 14, unk18[j], -1) };
							func_88(pedParam0, Global_79031[1 /*14*/].f_12, Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4);
							func_111(14);
						
							if (Global_79029 == 1)
							{
								for (k = 0; k < 15; k = k + 1)
								{
									type = func_80(pedParam0, entityModel, 14, unk18[j], k, 0);
								
									if (type != -99)
										func_68(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
							}
						}
					}
					else if (i != 14 && i != 12)
					{
						if (entityModel == joaat("Player_One") && i == 2 && unk[i] == 20)
							func_79(entityModel, 2, 20, &type2);
					
						if (iParam4 == -1)
							PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_78(i), Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_78(i)));
						else
							PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_78(i), Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4, iParam4);
					
						func_111(i);
					
						if (Global_79029 == 1)
						{
							for (k = 0; k < 15; k = k + 1)
							{
								type = func_80(pedParam0, entityModel, i, unk[i], k, 0);
							
								if (type != -99)
									func_68(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
				}
			}
			else if (i != 12 && i != 14)
			{
				Global_79031[1 /*14*/] = { func_121(entityModel, i, func_77(pedParam0, i, PV_COMP_INVALID), -1) };
			
				if (IS_BIT_SET(Global_79031[1 /*14*/].f_6, 3))
				{
					if (i == 2)
					{
						if (entityModel == joaat("Player_One"))
							if (func_76(pedParam0, entityModel, &type2, 1))
								func_68(pedParam0, 2, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						unk28 = { func_101(entityModel, PV_COMP_HEAD) };
						func_68(pedParam0, i, unk28[i], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	
		if (iParam7 == 1)
		{
			unk45 = { func_121(entityModel, 8, type3, -1) };
		
			if (type3 != -99)
				if (func_74(entityModel, epctParam2, 8, type3, &unk, &unk45))
					func_68(pedParam0, 8, type3, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_121(entityModel, 9, type4, -1) };
		
			if (type4 != -99)
				if (func_74(entityModel, epctParam2, 9, type4, &unk, &unk45))
					func_68(pedParam0, 9, type4, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_121(entityModel, 14, type5, -1) };
		
			if (type5 != -99)
				if (func_74(entityModel, epctParam2, 14, type5, &unk, &unk45))
					func_68(pedParam0, 14, type5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_121(entityModel, 14, type6, -1) };
		
			if (type6 != -99)
				if (func_74(entityModel, epctParam2, 14, type6, &unk, &unk45))
					func_68(pedParam0, 14, type6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_121(entityModel, 14, type7, -1) };
		
			if (type7 != -99)
				if (func_74(entityModel, epctParam2, 14, type7, &unk, &unk45))
					func_68(pedParam0, 14, type7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		}
	}
	else if (iParam1 == 13)
	{
		unk59 = { func_98(entityModel, epctParam2) };
	
		for (j = 0; j <= 8; j = j + 1)
		{
			Global_79031[1 /*14*/] = { func_121(entityModel, 14, unk59[j], -1) };
			func_88(pedParam0, Global_79031[1 /*14*/].f_12, Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4);
			func_111(14);
		
			if (Global_79029 == 1)
			{
				for (k = 0; k < 15; k = k + 1)
				{
					type = func_80(pedParam0, entityModel, 14, unk59[j], k, 0);
				
					if (type != -99)
						func_68(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 14)
	{
		func_88(pedParam0, Global_79031[1 /*14*/].f_12, Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4);
		func_111(iParam1);
	
		if (Global_79029 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				type = func_80(pedParam0, entityModel, iParam1, epctParam2, k, 0);
			
				if (type != -99)
					func_68(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else
	{
		if (iParam4 == -1)
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_78(iParam1), Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_78(iParam1)));
		else
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_78(iParam1), Global_79031[1 /*14*/].f_3, Global_79031[1 /*14*/].f_4, iParam4);
	
		if (Global_79029 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				type = func_80(pedParam0, entityModel, iParam1, epctParam2, k, 0);
			
				if (type != -99)
					func_68(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	
		if (iParam6 == 0)
			func_71(entityModel, iParam1, epctParam2);
	}

	if (Global_79029 == 1)
	{
		if (func_76(pedParam0, entityModel, &type2, 0))
			func_68(pedParam0, 2, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	
		if (func_69(pedParam0, entityModel, &type2))
			func_68(pedParam0, 1, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}

	Global_79029 = Global_79029 - 1;
	return 1;
}

BOOL func_69(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xA4A4 Hash - 0xA81FB6AC ^0x11DBFE4A
{
	int num;

	num = func_70(hParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_114370.f_2366.f_539[num /*65*/].f_63 != -99)
	{
		if (!func_186(pedParam0, Global_114370.f_2366.f_539[num /*65*/].f_64, Global_114370.f_2366.f_539[num /*65*/].f_63))
		{
			*uParam2 = Global_114370.f_2366.f_539[num /*65*/].f_62;
			Global_114370.f_2366.f_539[num /*65*/].f_63 = -99;
			Global_114370.f_2366.f_539[num /*65*/].f_64 = 1;
			return true;
		}
	}

	return false;
}

int func_70(Hash hParam0) // Position - 0xA545 Hash - 0x389E0506 ^0x389E0506
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 0;
	
		case joaat("Player_One"):
			return 1;
	
		case joaat("Player_Two"):
			return 2;
	
		default:
			break;
	}

	return 145;
}

void func_71(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0xA580 Hash - 0x193E1C5C ^0xBF5A02F8
{
	ePedComponentType type;
	int num;

	if (hParam0 == joaat("Player_Zero"))
		type = PV_COMP_HAND;
	else if (hParam0 == joaat("Player_One"))
		type = PV_COMP_HAIR;
	else if (hParam0 == joaat("Player_Two"))
		type = PV_COMP_LOWR;

	if (func_73(hParam0, 12, type))
	{
		if (func_72(hParam0, iParam1, epctParam2))
		{
			num = func_70(hParam0);
		
			if (iParam1 == 3)
				Global_114370.f_2366.f_539.f_196[num] = epctParam2;
			else if (iParam1 == 4)
				Global_114370.f_2366.f_539.f_200[num] = epctParam2;
		}
	}

	return;
}

BOOL func_72(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0xA60A Hash - 0x2BE7FB4 ^0x1D60B8BA
{
	if (hParam0 == joaat("Player_Zero"))
		if (iParam1 == 4)
			if (epctParam2 >= 47 && epctParam2 <= 54)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 77 && epctParam2 <= 84)
				return true;
	else if (hParam0 == joaat("Player_One"))
		if (iParam1 == 4)
			if (epctParam2 >= 14 && epctParam2 <= 21)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 41 && epctParam2 <= 56)
				return true;
	else if (hParam0 == joaat("Player_Two"))
		if (iParam1 == 4)
			if (epctParam2 >= 18 && epctParam2 <= 29)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 54 && epctParam2 <= 69)
				return true;

	return false;
}

BOOL func_73(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0xA6E8 Hash - 0xCA8B24F3 ^0x4C678A52
{
	Global_79031[1 /*14*/] = { func_121(hParam0, iParam1, epctParam2, -1) };
	return IS_BIT_SET(Global_79031[1 /*14*/].f_6, 2);
}

BOOL func_74(Hash hParam0, ePedComponentType epctParam1, int iParam2, ePedComponentType epctParam3, var uParam4, int iParam5) // Position - 0xA710 Hash - 0x4EAC6644 ^0x84ED5CC8
{
	var unk;
	int i;

	if (uParam4->[iParam2] == epctParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (epctParam3 == 0 || epctParam3 == 1 || epctParam3 == 2 || epctParam3 == 3 || epctParam3 == 4 || epctParam3 == 5 || epctParam3 == 6 || epctParam3 == 7 || epctParam3 == 8)
			return true;

	if (epctParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_98(hParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == epctParam3)
				return true;
		}
	}

	if (func_75(hParam0, iParam2, epctParam3))
		return true;

	if (hParam0 == joaat("Player_Zero"))
	{
		if (func_107(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_106(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 4 || epctParam1 == 5 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 14 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_105(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 4 || epctParam1 == 5 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 14 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (hParam0 == joaat("Player_One"))
	{
		if (func_107(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_106(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7 || epctParam1 == 8 || epctParam1 == 21)
				if (iParam2 == 8)
					if (epctParam3 == PV_COMP_TASK)
						if (epctParam1 == 8 || epctParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (epctParam1 == 43 || epctParam1 == 44 || epctParam1 == 45 || epctParam1 == 46)
					if (epctParam3 >= PV_COMP_HAND && epctParam3 <= PV_COMP_DECL)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (epctParam1 == 43 || epctParam1 == 44 || epctParam1 == 45 || epctParam1 == 46)
					if (epctParam3 >= 26 && epctParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_105(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7 || epctParam1 == 8 || epctParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (epctParam3 >= 159 && epctParam3 <= 174)
				return true;
		}
	}
	else if (hParam0 == joaat("Player_Two"))
	{
		if (epctParam1 == 2)
			if (iParam2 == 14 && epctParam3 == PV_COMP_HEAD)
				return true;
	
		if (func_107(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 45 || epctParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_106(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 3 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 11 || epctParam1 == 45 || epctParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_105(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 3 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 11 || epctParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_75(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0xAD14 Hash - 0x1194ADFB ^0x1194ADFB
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == 15)
						return true;
					break;
			
				case 9:
					if (epctParam2 == PV_COMP_FEET)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_BERD || epctParam2 == PV_COMP_DECL)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_LOWR)
						return true;
					break;
			}
			break;
	}

	return false;
}

BOOL func_76(Ped pedParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xADAD Hash - 0x490228A8 ^0xCA034CC2
{
	int num;

	num = func_70(hParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_114370.f_2366.f_539[num /*65*/].f_60 != -99)
	{
		if (!func_186(pedParam0, Global_114370.f_2366.f_539[num /*65*/].f_61, Global_114370.f_2366.f_539[num /*65*/].f_60) || iParam3 == 1)
		{
			*uParam2 = Global_114370.f_2366.f_539[num /*65*/].f_59;
			Global_114370.f_2366.f_539[num /*65*/].f_60 = -99;
			Global_114370.f_2366.f_539[num /*65*/].f_61 = 2;
			return true;
		}
	}

	return false;
}

ePedComponentType func_77(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0xAE58 Hash - 0x6AEB8E24 ^0x393FEB8F
{
	ePedComponentType i;
	ePedComponentType j;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_186(pedParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_186(pedParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (epctParam2 == PV_COMP_INVALID)
			{
			}
			else
			{
				return func_108(pedParam0, epctParam2);
			}
		}
		else
		{
			return func_109(pedParam0, iParam1);
		}
	}

	return -99;
}

ePedComponentType func_78(int iParam0) // Position - 0xAEF9 Hash - 0xF91DA7A7 ^0xF91DA7A7
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

int func_79(Hash hParam0, int iParam1, ePedComponentType epctParam2, var uParam3) // Position - 0xAFA9 Hash - 0x66694B65 ^0x9B4A4885
{
	int num;

	*uParam3 = -99;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_TEEF || epctParam2 == 23)
						*uParam3 = 1;
					break;
			
				case 9:
					if (epctParam2 == PV_COMP_ACCS || epctParam2 >= PV_COMP_TASK && epctParam2 <= 14)
						*uParam3 = 1;
					break;
			
				case 10:
					if (epctParam2 >= 44 && epctParam2 <= 47)
						*uParam3 = 1;
					break;
			
				case 14:
					if (epctParam2 >= 31 && epctParam2 <= 32 || epctParam2 >= 33 && epctParam2 <= 34 || epctParam2 >= 35 && epctParam2 <= 36 || epctParam2 == 37 || epctParam2 >= 40 && epctParam2 <= 41 || epctParam2 == 46)
						*uParam3 = 1;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (epctParam2 == 20)
						*uParam3 = 20;
					break;
			
				case 8:
					if (epctParam2 == PV_COMP_LOWR)
						*uParam3 = 19;
					break;
			
				case 9:
					if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_DECL)
						*uParam3 = 19;
					break;
			
				case 10:
					if (epctParam2 >= 47 && epctParam2 <= 50)
						*uParam3 = 19;
					break;
			
				case 14:
					if (epctParam2 >= 26 && epctParam2 <= 27 || epctParam2 >= 28 && epctParam2 <= 29 || epctParam2 >= 30 && epctParam2 <= 31 || epctParam2 == 32 || epctParam2 >= 35 && epctParam2 <= 36)
						*uParam3 = 19;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_TEEF)
						*uParam3 = 2;
					break;
			
				case 9:
					if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 14 || epctParam2 >= 15 && epctParam2 <= 16)
						*uParam3 = 2;
					break;
			
				case 10:
					if (epctParam2 >= 29 && epctParam2 <= 32)
						*uParam3 = 2;
					break;
			
				case 14:
					if (epctParam2 >= 47 && epctParam2 <= 48 || epctParam2 >= 49 && epctParam2 <= 50 || epctParam2 >= 51 && epctParam2 <= 52 || epctParam2 == 53 || epctParam2 >= 56 && epctParam2 <= 57 || epctParam2 == 62)
						*uParam3 = 2;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_70(hParam0);
		Global_114370.f_2366.f_539[num /*65*/].f_60 = epctParam2;
		Global_114370.f_2366.f_539[num /*65*/].f_61 = iParam1;
		return 1;
	}

	return 0;
}

ePedComponentType func_80(Ped pedParam0, Hash hParam1, int iParam2, ePedComponentType epctParam3, int iParam4, int iParam5) // Position - 0xB2B0 Hash - 0x13FAC17C ^0xAC271D21
{
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;
	ePedComponentType type4;
	ePedComponentType type5;
	ePedComponentType type6;
	ePedComponentType type7;
	ePedComponentType type8;
	ePedComponentType type9;
	ePedComponentType type10;

	type = -99;

	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				type2 = func_109(pedParam0, 1);
				type = func_87(hParam1, epctParam3, type2);
				break;
		
			case 1:
				type3 = func_109(pedParam0, 2);
				type = func_87(hParam1, type3, epctParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_79(hParam1, iParam2, epctParam3, &type);
	}
	else if (iParam4 == 1)
	{
		func_86(hParam1, iParam2, epctParam3, &type);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
			func_85(hParam1, epctParam3, &type);
	}
	else
	{
		switch (hParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (epctParam3)
								{
									case 36:
										type = 17;
										break;
								
									case 37:
										type = 17;
										break;
								
									case 38:
										type = 18;
										break;
								
									case 39:
										type = 18;
										break;
								
									case 40:
										type = 19;
										break;
								
									case 41:
										type = 19;
										break;
								
									case 42:
										type = 20;
										break;
								
									case 43:
										type = 20;
										break;
								}
								break;
						
							case 11:
								if (epctParam3 >= PV_COMP_HAIR && epctParam3 <= PV_COMP_TEEF)
									if (!func_84(pedParam0, 3, 44, 59))
										type = 44;
								else if (epctParam3 >= PV_COMP_ACCS && epctParam3 <= 17 || epctParam3 >= 18 && epctParam3 <= 27 || epctParam3 >= 28 && epctParam3 <= 43)
									if (!func_84(pedParam0, 3, 135, 150))
										type = func_83(hParam1, 3, 135, 150);
								break;
						}
						break;
				
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 63:
										type = PV_COMP_LOWR;
										break;
								
									case 61:
										type = PV_COMP_UPPR;
										break;
								
									case 16:
										type = PV_COMP_BERD;
										break;
								
									case 114:
										type = 15;
										break;
								
									case 115:
										type = 17;
										break;
								
									case 116:
										type = 16;
										break;
								
									case 117:
										type = 18;
										break;
								
									case 118:
										type = 20;
										break;
								
									case 119:
										type = 19;
										break;
								
									case 125:
										type = 21;
										break;
								
									case 120:
										type = 22;
										break;
								
									case 124:
										type = 23;
										break;
								
									case 126:
										type = 24;
										break;
								
									case 121:
										type = 25;
										break;
								
									case 127:
										type = 26;
										break;
								
									case 128:
										type = 27;
										break;
								
									case 85:
										type = PV_COMP_FEET;
										break;
								
									case 77:
										type = PV_COMP_TEEF;
										break;
								
									case 78:
										type = PV_COMP_ACCS;
										break;
								
									case 79:
										type = PV_COMP_TASK;
										break;
								
									case 80:
										type = PV_COMP_DECL;
										break;
								
									case 81:
										type = PV_COMP_JBIB;
										break;
								
									case 82:
										type = PV_COMP_MAX;
										break;
								
									case 83:
										type = 13;
										break;
								
									case 84:
										type = 14;
										break;
								
									case 21:
										type = 31;
										break;
								
									case 22:
										type = 30;
										break;
								
									case 23:
										type = 29;
										break;
								
									case 24:
										type = 28;
										break;
								
									case 25:
										type = 33;
										break;
								
									case 26:
										type = 35;
										break;
								
									case 27:
										type = 34;
										break;
								
									case 28:
										type = 32;
										break;
								
									default:
										if (epctParam3 >= 17 && epctParam3 <= 20)
										{
										}
										else
										{
											type = PV_COMP_HEAD;
										}
										break;
								}
								break;
						
							case 11:
								if (epctParam3 != PV_COMP_HEAD)
									type = PV_COMP_HEAD;
								break;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (epctParam3 >= 44 && epctParam3 <= 59 || epctParam3 >= 135 && epctParam3 <= 150)
							{
							}
							else
							{
								type = PV_COMP_HEAD;
							}
						}
						else if (iParam2 == 10)
						{
							if (epctParam3 >= 36 && epctParam3 <= 43)
								type = PV_COMP_HEAD;
						}
						break;
				}
				break;
		
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 17:
										type = PV_COMP_HAIR;
										break;
								
									case 90:
										type = PV_COMP_BERD;
										break;
								
									case 268:
										type = PV_COMP_UPPR;
										break;
								
									case 269:
										type = PV_COMP_HAND;
										break;
								
									case 270:
										type = PV_COMP_LOWR;
										break;
								
									case 271:
										type = PV_COMP_FEET;
										break;
								
									case 272:
										type = PV_COMP_ACCS;
										break;
								
									case 273:
										type = PV_COMP_TEEF;
										break;
								
									case 279:
										type = PV_COMP_TASK;
										break;
								
									case 274:
										type = PV_COMP_DECL;
										break;
								
									case 278:
										type = PV_COMP_JBIB;
										break;
								
									case 280:
										type = PV_COMP_MAX;
										break;
								
									case 275:
										type = 13;
										break;
								
									case 281:
										type = 14;
										break;
								
									case 282:
										type = 15;
										break;
								
									case 107:
										type = 16;
										break;
								
									case 108:
										type = 17;
										break;
								
									case 109:
										type = 18;
										break;
								
									case 110:
										type = 19;
										break;
								
									case 111:
										type = 20;
										break;
								
									case 112:
										type = 21;
										break;
								
									case 113:
										type = 22;
										break;
								
									case 114:
										type = 23;
										break;
								
									case 115:
										type = 24;
										break;
								
									case 116:
										type = 25;
										break;
								
									case 117:
										type = 52;
										break;
								
									case 118:
										type = 27;
										break;
								
									case 119:
										type = 28;
										break;
								
									case 120:
										type = 29;
										break;
								
									case 121:
										type = 30;
										break;
								
									case 122:
										type = 31;
										break;
								
									case 296:
										type = 32;
										break;
								
									case 297:
										type = 33;
										break;
								
									case 298:
										type = 34;
										break;
								
									case 299:
										type = 35;
										break;
								
									case 300:
										type = 36;
										break;
								
									case 301:
										type = 37;
										break;
								
									case 302:
										type = 38;
										break;
								
									case 309:
										type = 39;
										break;
								
									case 310:
										type = 40;
										break;
								
									case 311:
										type = 41;
										break;
								
									case 312:
										type = 42;
										break;
								
									case 313:
										type = 43;
										break;
								
									case 314:
										type = 44;
										break;
								
									case 315:
										type = 45;
										break;
								
									case 316:
										type = 46;
										break;
								
									case 317:
										type = 51;
										break;
								
									default:
										type = PV_COMP_HEAD;
										break;
								}
								break;
						
							case 11:
								if (epctParam3 != PV_COMP_HEAD)
									type = PV_COMP_HEAD;
								break;
						}
						break;
				
					case 3:
						switch (iParam2)
						{
							case 11:
								if (epctParam3 >= 47 && epctParam3 <= 62)
									if (!func_84(pedParam0, 3, 209, 222))
										type = func_83(hParam1, 3, 209, 222);
								else if (epctParam3 >= PV_COMP_BERD && epctParam3 <= PV_COMP_LOWR || epctParam3 >= PV_COMP_HAND && epctParam3 <= PV_COMP_ACCS)
									if (!func_84(pedParam0, 3, 243, 258))
										if (epctParam3 == PV_COMP_BERD || epctParam3 == PV_COMP_HAND)
											type = func_83(hParam1, 3, 243, 246);
										else if (epctParam3 == PV_COMP_HAIR || epctParam3 == PV_COMP_FEET)
											type = func_83(hParam1, 3, 247, 250);
										else if (epctParam3 == PV_COMP_UPPR || epctParam3 == PV_COMP_TEEF)
											type = func_83(hParam1, 3, 251, 254);
										else if (epctParam3 == PV_COMP_LOWR || epctParam3 == PV_COMP_ACCS)
											type = func_83(hParam1, 3, 255, 258);
								else if (epctParam3 == 41 || epctParam3 == 42)
									if (!func_84(pedParam0, 3, 176, 191) && !func_84(pedParam0, 3, 227, 242))
										type = func_83(hParam1, 3, 176, 191);
								break;
						}
						break;
				
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								type6 = epctParam3;
								type5 = func_109(pedParam0, 3);
							}
							else if (iParam2 == 3)
							{
								type5 = epctParam3;
								type6 = func_109(pedParam0, 11);
								type6 = func_82(hParam1, type5, type6, 0);
							}
						
							type4 = func_109(pedParam0, 8);
						
							if (type6 >= PV_COMP_HAND && type6 <= PV_COMP_ACCS || type6 >= 25 && type6 <= 40 || type6 >= 42 && type6 <= 43)
								if (!func_81(joaat("Player_One"), type4, type6, type5, &type7))
									if (type7 != -99)
										type = type7;
							else if (type4 >= 27 && type4 <= 42 || type4 >= 43 && type4 <= 58 || type4 >= 59 && type4 <= 74)
								type = 26;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (epctParam3 >= 209 && epctParam3 <= 222)
							{
							}
							else if (epctParam3 >= 176 && epctParam3 <= 191 || epctParam3 >= 227 && epctParam3 <= 242 || epctParam3 >= 243 && epctParam3 <= 258)
							{
								type8 = func_109(pedParam0, 8);
								type9 = func_109(pedParam0, 11);
							
								if (type8 >= 27 && type8 <= 42 || type8 >= 43 && type8 <= 58 || type8 >= 59 && type8 <= 74)
									type = func_82(hParam1, epctParam3, type9, 0);
								else
									type = func_82(hParam1, epctParam3, type9, 1);
							}
							else if (epctParam3 >= 41 && epctParam3 <= 56)
							{
								type = 45;
							}
							else if (epctParam3 >= 223 && epctParam3 <= 226)
							{
								type = 44;
							}
							else
							{
								type = PV_COMP_HEAD;
							}
						}
						else if (iParam2 == 8)
						{
							if (epctParam3 >= 27 && epctParam3 <= 42 || epctParam3 >= 43 && epctParam3 <= 58 || epctParam3 >= 59 && epctParam3 <= 74)
							{
								type10 = func_109(pedParam0, 11);
								type = func_82(hParam1, -99, type10, 0);
							}
						}
						break;
				}
				break;
		
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 50:
										type = PV_COMP_UPPR;
										break;
								
									case 81:
										type = PV_COMP_HAND;
										break;
								
									case 82:
										type = PV_COMP_FEET;
										break;
								
									case 83:
										type = PV_COMP_TEEF;
										break;
								
									case 84:
										type = PV_COMP_DECL;
										break;
								
									case 85:
										type = PV_COMP_TASK;
										break;
								
									case 86:
										type = PV_COMP_ACCS;
										break;
								
									case 92:
										type = 22;
										break;
								
									case 87:
										type = 23;
										break;
								
									case 91:
										type = 24;
										break;
								
									case 93:
										type = 25;
										break;
								
									case 88:
										type = 26;
										break;
								
									case 94:
										type = 27;
										break;
								
									case 120:
										type = PV_COMP_JBIB;
										break;
								
									case 121:
										type = 13;
										break;
								
									case 122:
										type = 14;
										break;
								
									case 124:
										type = PV_COMP_MAX;
										break;
								
									case 126:
										type = 18;
										break;
								
									case 128:
										type = 17;
										break;
								
									case 130:
										type = 19;
										break;
								
									case 131:
										type = 16;
										break;
								
									case 134:
										type = 15;
										break;
								
									case 135:
										type = 20;
										break;
								
									default:
										type = PV_COMP_HEAD;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}

	return type;
}

BOOL func_81(int iParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3, var uParam4) // Position - 0xBE63 Hash - 0x9B2DB9BF ^0x887A15B9
{
	int num;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			break;
	
		case joaat("Player_One"):
			*uParam4 = 0;
		
			if (epctParam1 >= 27 && epctParam1 <= 42)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
					{
					}
					else
					{
						if (epctParam2 >= 42 && epctParam2 <= 43)
						{
							if (epctParam3 >= 176 && epctParam3 <= 191)
							{
								num = epctParam1 - 27;
								*uParam4 = 59 + num;
							}
							else if (epctParam3 >= 227 && epctParam3 <= 242)
							{
								num = epctParam1 - 27;
								*uParam4 = 43 + num;
							}
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 227 && epctParam3 <= 242 || epctParam3 >= 176 && epctParam3 <= 191 || epctParam3 >= 243 && epctParam3 <= 258)
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (epctParam1 >= 43 && epctParam1 <= 58)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= 42 && epctParam2 <= 43)
					{
					}
					else
					{
						if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 43;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 227 && epctParam3 <= 242)
					{
					}
					else
					{
						if (epctParam3 >= 176 && epctParam3 <= 191)
						{
							if (epctParam2 >= 42 && epctParam2 <= 43)
							{
								num = epctParam1 - 43;
								*uParam4 = 59 + num;
							}
						}
					
						return false;
					}
				}
			}
			else if (epctParam1 >= 59 && epctParam1 <= 74)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= 42 && epctParam2 <= 43)
					{
					}
					else
					{
						if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 176 && epctParam3 <= 191)
					{
					}
					else
					{
						if (epctParam3 >= 227 && epctParam3 <= 242)
						{
							if (epctParam2 >= 42 && epctParam2 <= 43)
							{
								num = epctParam1 - 59;
								*uParam4 = 43 + num;
							}
						}
						else if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			}
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_MAX)
				if (epctParam3 != 241)
					return false;
			break;
	}

	return true;
}

ePedComponentType func_82(Hash hParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, int iParam3) // Position - 0xC148 Hash - 0x243669A7 ^0x243669A7
{
	int num;

	if (epctParam1 >= 243 && epctParam1 <= 246)
	{
		if (iParam3 == 1)
			return PV_COMP_BERD;
		else
			return PV_COMP_HAND;
	}
	else if (epctParam1 >= 247 && epctParam1 <= 250)
	{
		if (iParam3 == 1)
			return PV_COMP_HAIR;
		else
			return PV_COMP_FEET;
	}
	else if (epctParam1 >= 251 && epctParam1 <= 254)
	{
		if (iParam3 == 1)
			return PV_COMP_UPPR;
		else
			return PV_COMP_TEEF;
	}
	else if (epctParam1 >= 255 && epctParam1 <= 258)
	{
		if (iParam3 == 1)
			return PV_COMP_LOWR;
		else
			return PV_COMP_ACCS;
	}
	else if (epctParam1 >= 255 && epctParam1 <= 258)
	{
		if (iParam3 == 1)
			return PV_COMP_LOWR;
		else
			return PV_COMP_ACCS;
	}
	else if (epctParam1 >= 176 && epctParam1 <= 191 || epctParam1 >= 227 && epctParam1 <= 242)
	{
		if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return epctParam2;
			}
			else
			{
				num = epctParam2 - 9;
				epctParam2 = 25 + num;
				return epctParam2;
			}
		}
		else if (epctParam2 >= 25 && epctParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				num = epctParam2 - 25;
				epctParam2 = 9 + num;
				return epctParam2;
			}
			else
			{
				return epctParam2;
			}
		}
		else if (epctParam2 == 41 || epctParam2 == 42)
		{
			if (iParam3 == 1)
				return 41;
			else
				return 42;
		}
		else
		{
			if (iParam3 == 1)
				epctParam2 = func_83(hParam0, 11, 9, 24);
			else
				epctParam2 = func_83(hParam0, 11, 25, 40);
		
			if (epctParam2 == -99)
				if (iParam3 == 1)
					return 41;
				else
					return 42;
			else
				return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_BERD && epctParam2 <= PV_COMP_LOWR)
	{
		if (iParam3 == 1)
		{
			return epctParam2;
		}
		else
		{
			num = epctParam2 - 1;
			epctParam2 = 5 + num;
			return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS)
	{
		if (iParam3 == 1)
		{
			num = epctParam2 - 5;
			epctParam2 = 1 + num;
			return epctParam2;
		}
		else
		{
			return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return epctParam2;
		}
		else
		{
			num = epctParam2 - 9;
			epctParam2 = 25 + num;
			return epctParam2;
		}
	}
	else if (epctParam2 >= 25 && epctParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			num = epctParam2 - 25;
			epctParam2 = 9 + num;
			return epctParam2;
		}
		else
		{
			return epctParam2;
		}
	}
	else if (epctParam2 == 41 || epctParam2 == 42)
	{
		if (iParam3 == 1)
			return 41;
		else
			return 42;
	}

	return -99;
}

ePedComponentType func_83(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC40F Hash - 0x836A6BCB ^0x1BDA295A
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = iParam2; i <= iParam3 - 1; i = i + 1)
	{
		type = i;
	
		if (func_73(hParam0, iParam1, type))
			return type;
	}

	return -99;
}

BOOL func_84(Ped pedParam0, int iParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0xC446 Hash - 0x181F6657 ^0x181F6657
{
	ePedComponentType type;

	type = func_109(pedParam0, iParam1);

	if (type >= epctParam2 && type <= epctParam3)
		return true;

	return false;
}

BOOL func_85(Hash hParam0, ePedComponentType epctParam1, var uParam2) // Position - 0xC46F Hash - 0x9FD3CF97 ^0x79A65971
{
	*uParam2 = -99;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (epctParam1 == 16 || epctParam1 == 17 || epctParam1 == 21 || epctParam1 == 22 || epctParam1 == 32 || epctParam1 >= 34 && epctParam1 <= 39 || epctParam1 >= 41 && epctParam1 <= 45 || epctParam1 == 46 || epctParam1 >= 47 && epctParam1 <= 54 || epctParam1 >= 55 && epctParam1 <= 70 || epctParam1 >= 72 && epctParam1 <= 79 || epctParam1 == 80 || epctParam1 >= 81 && epctParam1 <= 83 || epctParam1 >= 84 && epctParam1 <= 87 || epctParam1 == 88 || epctParam1 >= 89 && epctParam1 <= 91 || epctParam1 == 95 || epctParam1 >= 96 && epctParam1 <= 111 || epctParam1 == 112)
			{
				*uParam2 = 6;
				return true;
			}
			break;
	
		case joaat("Player_One"):
			if (epctParam1 == PV_COMP_MAX || epctParam1 >= 14 && epctParam1 <= 21 || epctParam1 == 32 || epctParam1 == 52 || epctParam1 >= 69 && epctParam1 <= 70 || epctParam1 == 71 || epctParam1 >= 72 && epctParam1 <= 77)
			{
				*uParam2 = 17;
				return true;
			}
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_LOWR || epctParam1 == PV_COMP_HAND || epctParam1 == PV_COMP_FEET || epctParam1 == PV_COMP_TEEF || epctParam1 == 14 || epctParam1 >= 18 && epctParam1 <= 29 || epctParam1 == 31 || epctParam1 == 32 || epctParam1 == 33 || epctParam1 == 34 || epctParam1 >= 35 && epctParam1 <= 42 || epctParam1 >= 43 && epctParam1 <= 53 || epctParam1 >= 54 && epctParam1 <= 61 || epctParam1 >= 71 && epctParam1 <= 80 || epctParam1 >= 81 && epctParam1 <= 90 || epctParam1 >= 94 && epctParam1 <= 103)
			{
				*uParam2 = 8;
				return true;
			}
			break;
	}

	return false;
}

int func_86(Hash hParam0, int iParam1, ePedComponentType epctParam2, var uParam3) // Position - 0xC739 Hash - 0x6C977D30 ^0xDCB1D2AD
{
	int num;

	*uParam3 = -99;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 10:
					if (epctParam2 >= 44 && epctParam2 <= 47)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 31 && epctParam2 <= 32 || epctParam2 >= 33 && epctParam2 <= 34 || epctParam2 >= 35 && epctParam2 <= 36 || epctParam2 == 37 || epctParam2 >= 38 && epctParam2 <= 39 || epctParam2 >= 40 && epctParam2 <= 41 || epctParam2 >= 42 && epctParam2 <= 44)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 10:
					if (epctParam2 >= 47 && epctParam2 <= 50)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 26 && epctParam2 <= 27 || epctParam2 >= 28 && epctParam2 <= 29 || epctParam2 >= 30 && epctParam2 <= 31 || epctParam2 == 32 || epctParam2 >= 35 && epctParam2 <= 36)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 9:
					if (epctParam2 >= 15 && epctParam2 <= 16)
						*uParam3 = 0;
					break;
			
				case 10:
					if (epctParam2 >= 29 && epctParam2 <= 32)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 47 && epctParam2 <= 48 || epctParam2 >= 49 && epctParam2 <= 50 || epctParam2 >= 51 && epctParam2 <= 52 || epctParam2 == 53 || epctParam2 >= 54 && epctParam2 <= 55 || epctParam2 >= 56 && epctParam2 <= 57 || epctParam2 >= 58 && epctParam2 <= 60)
						*uParam3 = 0;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_70(hParam0);
		Global_114370.f_2366.f_539[num /*65*/].f_63 = epctParam2;
		Global_114370.f_2366.f_539[num /*65*/].f_64 = iParam1;
		return 1;
	}

	return 0;
}

ePedComponentType func_87(Hash hParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0xC9C3 Hash - 0x678DE6D2 ^0x678DE6D2
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (epctParam1 == PV_COMP_BERD)
				if (epctParam2 == PV_COMP_HEAD)
					return 1;
				else if (epctParam2 == PV_COMP_LOWR)
					return 5;
				else
					return 3;
			else if (epctParam2 == PV_COMP_HEAD)
				return 0;
			else if (epctParam2 == PV_COMP_LOWR)
				return 4;
			else
				return 2;
			break;
	
		case joaat("Player_One"):
			if (epctParam1 >= PV_COMP_HEAD && epctParam1 <= 15)
				if (epctParam2 == PV_COMP_HEAD)
					return 0;
				else
					return 3;
			else if (epctParam1 >= 16 && epctParam1 <= 17)
				if (epctParam2 == PV_COMP_HEAD)
					return 2;
				else
					return 5;
			else if (epctParam1 == 18)
				if (epctParam2 == PV_COMP_HEAD)
					return 6;
				else
					return 7;
			else if (epctParam1 == 19)
				if (epctParam2 == PV_COMP_HEAD)
					return 1;
				else
					return 4;
			else if (epctParam2 == PV_COMP_HEAD)
				return 1;
			else
				return 4;
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_HAIR)
				if (epctParam2 == PV_COMP_HEAD)
					return 2;
				else
					return 3;
			else if (epctParam1 == PV_COMP_UPPR)
				if (epctParam2 == PV_COMP_HEAD)
					return 4;
				else
					return 6;
			else if (epctParam1 == PV_COMP_ACCS)
				return 5;
			else if (epctParam2 == PV_COMP_HEAD)
				return 0;
			else
				return 1;
			break;
	}

	return -99;
}

void func_88(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0xCB1A Hash - 0x64D2154E ^0x9C1670D6
{
	ePedComponentType type;

	if (epctParam2 == PV_COMP_INVALID)
	{
		PED::CLEAR_PED_PROP(pedParam0, epctParam1, 1);
	
		if (epctParam1 == PV_COMP_HEAD)
		{
			PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(pedParam0, epctParam1, epctParam2, epctParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
	
		if (epctParam1 == PV_COMP_HEAD)
		{
			type = func_93(pedParam0, epctParam2, epctParam3, epctParam1);
		
			if (func_89(ENTITY::GET_ENTITY_MODEL(pedParam0), 14, type, FILES::GET_HASH_NAME_FOR_PROP(pedParam0, 0, epctParam2, epctParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
			}
		}
	}

	return;
}

BOOL func_89(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0xCBB4 Hash - 0xC42704DB ^0xC42704DB
{
	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam3 == -1)
						hParam3 = func_90(hParam0, epctParam2, 14, 3);
				
					if (epctParam2 >= 131 && epctParam2 <= 154 || epctParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam3 == -1)
						hParam3 = func_90(hParam0, epctParam2, 14, 4);
				
					if (epctParam2 >= 131 && epctParam2 <= 154 || epctParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	}

	return false;
}

Hash func_90(Hash hParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0xCC82 Hash - 0x3B4EF0B2 ^0x11322F71
{
	var outProp;
	int componentId;
	int num;
	var outComponent;
	int componentId2;
	int num2;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = epctParam1 - func_92(hParam0);
	
		if (componentId < 0)
			return -1;
	
		num = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
	
		if (num <= componentId)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
		return outProp.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
		componentId2 = epctParam1 - func_91(hParam0, func_78(iParam2));
	
		if (componentId2 < 0)
			return -1;
	
		if (hParam0 == Global_79181.f_26[iParam2] && epctParam1 == Global_79181[iParam2] && Global_79181.f_13[iParam2] != 0)
			return Global_79181.f_13[iParam2];
	
		num2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_78(iParam2));
	
		if (num2 <= componentId2)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
		Global_79181.f_13[iParam2] = outComponent.f_1;
		Global_79181[iParam2] = epctParam1;
		Global_79181.f_26[iParam2] = hParam0;
		return outComponent.f_1;
	}

	return -1;
}

int func_91(Hash hParam0, int iParam1) // Position - 0xCD9C Hash - 0x765E2190 ^0x765E2190
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

int func_92(Hash hParam0) // Position - 0xD143 Hash - 0xC0824942 ^0x8EB5258
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 113;
	
		case joaat("Player_One"):
			return 175;
	
		case joaat("Player_Two"):
			return 155;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
	
		case joaat("MP_F_Freemode_01"):
			return 327;
	}

	return -99;
}

ePedComponentType func_93(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0xD1A4 Hash - 0x3F809B31 ^0x8E48393
{
	Hash entityModel;
	Hash hashNameForProp;
	int numberOfPedPropDrawableVariations;
	int num;
	int i;
	int j;
	int numberOfPedPropTextureVariations;

	if (epctParam1 == -1)
		return func_97(epctParam3);

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	hashNameForProp = FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, epctParam1, epctParam2);

	if (hashNameForProp != -1 && hashNameForProp != 0)
		if (entityModel == joaat("MP_M_Freemode_01"))
			return func_95(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
		else if (entityModel == joaat("MP_F_Freemode_01"))
			return func_95(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);

	numberOfPedPropDrawableVariations = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);

	for (i = 0; i <= numberOfPedPropDrawableVariations - 1; i = i + 1)
	{
		numberOfPedPropTextureVariations = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
	
		if (i != epctParam1)
		{
			num = num + numberOfPedPropTextureVariations;
		}
		else
		{
			for (j = 0; j <= numberOfPedPropTextureVariations - 1; j = j + 1)
			{
				if (i == epctParam1 && j == epctParam2)
				{
					num = num + func_94(pedParam0, epctParam3);
					return num;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return func_97(epctParam3);
}

int func_94(Ped pedParam0, ePedComponentType epctParam1) // Position - 0xD2A0 Hash - 0xB8AC6F7F ^0x2249C2B3
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	switch (entityModel)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 58;
			
				case PV_COMP_HAIR:
					return 112;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 82;
			
				case PV_COMP_HAIR:
					return 158;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 88;
			
				case PV_COMP_HAIR:
					return 154;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	}

	return -99;
}

int func_95(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xD3DE Hash - 0x37A3B7AE ^0x8CDB7FD1
{
	var outfit;
	int i;
	int num;
	int shopPedQueryPropIndex;
	int shopPedQueryComponentIndex;

	if (iParam2 == 12)
	{
		num = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
	
		for (i = 0; i < num; i = i + 1)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(i, &outfit);
		
			if (outfit.f_1 == hParam1)
				return func_96(hParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		shopPedQueryPropIndex = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
	
		if (shopPedQueryPropIndex != -1)
			return func_92(hParam0) + shopPedQueryPropIndex;
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_78(iParam2));
		shopPedQueryComponentIndex = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
	
		if (shopPedQueryComponentIndex != -1)
			return func_91(hParam0, func_78(iParam2)) + shopPedQueryComponentIndex;
	}

	return -99;
}

int func_96(Hash hParam0) // Position - 0xD499 Hash - 0x3694542E ^0xA74289BE
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 53;
	
		case joaat("Player_One"):
			return 47;
	
		case joaat("Player_Two"):
			return 48;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
	
		case joaat("MP_F_Freemode_01"):
			return 28;
	}

	return -99;
}

int func_97(ePedComponentType epctParam0) // Position - 0xD4F8 Hash - 0xEE599357 ^0xEE599357
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			return 0;
	
		case PV_COMP_BERD:
			return 1;
	
		case PV_COMP_HAIR:
			return 2;
	
		case PV_COMP_UPPR:
			return 3;
	
		case PV_COMP_LOWR:
			return 4;
	
		case PV_COMP_HAND:
			return 5;
	
		case PV_COMP_FEET:
			return 6;
	
		case PV_COMP_TEEF:
			return 7;
	
		case PV_COMP_ACCS:
			return 8;
	}

	return 0;
}

struct<10> func_98(Hash hParam0, ePedComponentType epctParam1) // Position - 0xD57E Hash - 0x2A30F768 ^0x18171033
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case 31:
					func_100(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_100(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_100(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_100(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_100(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_100(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_100(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_100(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_100(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_100(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_100(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_99(&unk, hParam0, epctParam1, 10);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case 31:
					func_100(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_100(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_100(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_100(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_100(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_100(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_100(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_100(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_100(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_100(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_99(&unk, hParam0, epctParam1, 9);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case 31:
					func_100(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_100(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_100(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_100(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_100(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_100(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_100(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_100(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_100(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_100(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_99(&unk, hParam0, epctParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case 31:
					func_100(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_100(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_100(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_100(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_100(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_100(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_100(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_100(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_100(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_100(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_100(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_100(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_100(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_100(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_100(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_100(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_100(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_100(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_100(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_100(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_100(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_100(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_100(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_100(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_100(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_100(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_99(&unk, hParam0, epctParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case 31:
					func_100(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_100(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_100(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_100(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_100(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_100(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_100(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_100(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_100(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_100(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_100(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_100(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_100(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_100(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_100(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_100(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_100(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_100(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_100(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_100(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_100(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_100(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_100(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_100(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_100(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_99(&unk, hParam0, epctParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_99(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xDEAD Hash - 0xE5FA3D79 ^0xC01023AA
{
	int num;
	Hash itemHash;
	Hash outPropVariant;
	int i;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (hParam1 == joaat("Player_Zero"))
			num = 0;
		else if (hParam1 == joaat("Player_One"))
			num = 1;
		else if (hParam1 == joaat("Player_Two"))
			num = 2;
		else if (hParam1 == joaat("MP_M_Freemode_01"))
			num = 3;
		else if (hParam1 == joaat("MP_F_Freemode_01"))
			num = 4;
	
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
	
		if (!FILES::IS_CONTENT_ITEM_LOCKED(itemHash))
		{
			for (i = 0; i < itemHash.f_3; i = i + 1)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 != -1)
					if (outPropVariant != 0 && outPropVariant != -1 && outPropVariant != joaat("0"))
						uParam0->[outPropVariant.f_2] = func_95(hParam1, outPropVariant, 14, num);
					else if (outPropVariant.f_1 != -1)
						uParam0->[outPropVariant.f_2] = outPropVariant.f_1;
			}
		}
	}

	return;
}

void func_100(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xDFD7 Hash - 0xF7320378 ^0xF7320378
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_101(Hash hParam0, ePedComponentType epctParam1) // Position - 0xE01F Hash - 0x10D20E1D ^0x38BDAFC5
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case 0:
					if (Global_114370.f_9088.f_99.f_58[120])
						func_104(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_104(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_104(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_104(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_104(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_104(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_104(&unk, -99, -99, Global_114370.f_2366.f_539.f_196[0], Global_114370.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_104(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_104(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_104(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_104(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_104(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_104(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_104(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_104(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_104(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_104(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_104(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_104(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_104(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_104(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_104(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_104(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_104(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_104(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_104(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_104(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_104(&unk, -99, -99, PV_COMP_UPPR, PV_COMP_UPPR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_104(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_104(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_104(&unk, -99, -99, PV_COMP_HAIR, PV_COMP_HAIR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_104(&unk, -99, -99, 161, PV_COMP_UPPR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_104(&unk, -99, -99, PV_COMP_UPPR, PV_COMP_UPPR, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_104(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_104(&unk, -99, -99, 86, PV_COMP_LOWR, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_104(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_104(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_104(&unk, -99, -99, PV_COMP_LOWR, PV_COMP_LOWR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_104(&unk, -99, -99, PV_COMP_HAND, PV_COMP_HAND, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_104(&unk, -99, -99, PV_COMP_FEET, PV_COMP_FEET, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_104(&unk, -99, -99, PV_COMP_TEEF, PV_COMP_TEEF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_104(&unk, -99, -99, PV_COMP_ACCS, PV_COMP_ACCS, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_104(&unk, -99, -99, PV_COMP_TASK, PV_COMP_TASK, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_104(&unk, -99, -99, PV_COMP_DECL, PV_COMP_DECL, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_104(&unk, -99, -99, PV_COMP_JBIB, PV_COMP_JBIB, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_104(&unk, -99, -99, PV_COMP_MAX, PV_COMP_MAX, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_104(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_104(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_104(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_104(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_104(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_104(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_104(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_104(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_102(&unk, hParam0, epctParam1, 53);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case 0:
					func_104(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_104(&unk, -99, -99, 22, PV_COMP_DECL, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_104(&unk, -99, -99, Global_114370.f_2366.f_539.f_196[1], Global_114370.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_104(&unk, -99, -99, 23, PV_COMP_JBIB, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_104(&unk, -99, -99, 23, PV_COMP_JBIB, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_104(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_104(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_104(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_104(&unk, -99, -99, 17, PV_COMP_HAND, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_104(&unk, -99, -99, 16, PV_COMP_LOWR, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_104(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_104(&unk, -99, -99, 259, PV_COMP_DECL, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_104(&unk, -99, -99, 18, PV_COMP_FEET, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_104(&unk, -99, -99, 19, PV_COMP_TEEF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_104(&unk, -99, -99, 20, PV_COMP_ACCS, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_104(&unk, -99, -99, 21, PV_COMP_TASK, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_104(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_104(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_104(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_104(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_104(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_104(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_104(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_104(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_104(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_104(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_104(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_104(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_104(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_104(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_104(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_104(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_104(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_104(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_104(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_104(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_104(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_104(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_104(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_104(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_104(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_104(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_104(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_104(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_104(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_104(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_104(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_102(&unk, hParam0, epctParam1, 47);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case 0:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_104(&unk, -99, -99, 17, PV_COMP_HAND, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_104(&unk, -99, -99, 43, PV_COMP_ACCS, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_104(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_104(&unk, -99, -99, Global_114370.f_2366.f_539.f_196[2], Global_114370.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_104(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_104(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_104(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_104(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_104(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_104(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_104(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_104(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_104(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_104(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_104(&unk, -99, -99, 44, PV_COMP_TASK, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_104(&unk, -99, -99, 45, PV_COMP_DECL, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_104(&unk, -99, -99, 46, PV_COMP_JBIB, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_104(&unk, -99, -99, 47, PV_COMP_MAX, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_104(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_104(&unk, -99, -99, 98, PV_COMP_HEAD, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_104(&unk, -99, -99, 27, PV_COMP_HEAD, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_104(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_104(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_104(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_104(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_104(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_104(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_104(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_104(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_104(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_104(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_104(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_104(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_104(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_104(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_104(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_104(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_104(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_104(&unk, -99, -99, PV_COMP_HAIR, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_104(&unk, -99, -99, 55, PV_COMP_HEAD, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_104(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_104(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_104(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_104(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_102(&unk, hParam0, epctParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case 0:
					func_104(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_104(&unk, -99, -99, PV_COMP_BERD, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_104(&unk, -99, -99, PV_COMP_BERD, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_104(&unk, -99, -99, PV_COMP_BERD, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_104(&unk, -99, -99, PV_COMP_BERD, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_104(&unk, -99, -99, PV_COMP_BERD, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_104(&unk, -99, -99, PV_COMP_BERD, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_104(&unk, -99, -99, PV_COMP_BERD, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_104(&unk, -99, -99, PV_COMP_BERD, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_104(&unk, -99, -99, PV_COMP_BERD, PV_COMP_LOWR, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_104(&unk, -99, -99, PV_COMP_BERD, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_104(&unk, -99, -99, PV_COMP_BERD, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_104(&unk, -99, -99, PV_COMP_BERD, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_104(&unk, -99, -99, PV_COMP_BERD, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_104(&unk, -99, -99, PV_COMP_HAND, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_104(&unk, -99, -99, PV_COMP_HAND, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_104(&unk, -99, -99, PV_COMP_BERD, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_104(&unk, -99, -99, PV_COMP_FEET, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_104(&unk, -99, -99, PV_COMP_BERD, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_104(&unk, -99, -99, PV_COMP_BERD, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_104(&unk, -99, -99, PV_COMP_HAIR, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_102(&unk, hParam0, epctParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case 0:
					func_104(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_104(&unk, -99, -99, PV_COMP_HAND, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_104(&unk, -99, -99, PV_COMP_LOWR, PV_COMP_BERD, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_104(&unk, -99, -99, PV_COMP_BERD, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_104(&unk, -99, -99, PV_COMP_HAIR, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_104(&unk, -99, -99, PV_COMP_TASK, PV_COMP_TEEF, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_104(&unk, -99, -99, PV_COMP_BERD, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_104(&unk, -99, -99, PV_COMP_BERD, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_104(&unk, -99, -99, PV_COMP_HAND, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_104(&unk, -99, -99, PV_COMP_TASK, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_104(&unk, -99, -99, PV_COMP_HAND, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_104(&unk, -99, -99, PV_COMP_FEET, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_104(&unk, -99, -99, PV_COMP_HAND, PV_COMP_HEAD, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_104(&unk, -99, -99, PV_COMP_TASK, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_104(&unk, -99, -99, PV_COMP_HAIR, PV_COMP_ACCS, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_104(&unk, -99, -99, PV_COMP_HAND, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_104(&unk, -99, -99, PV_COMP_FEET, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_104(&unk, -99, -99, PV_COMP_UPPR, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_104(&unk, -99, -99, PV_COMP_HEAD, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_104(&unk, -99, -99, PV_COMP_HAND, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_104(&unk, -99, -99, PV_COMP_TEEF, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_104(&unk, -99, -99, PV_COMP_LOWR, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_104(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_102(&unk, hParam0, epctParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_102(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xFE67 Hash - 0xD805D094 ^0x25EDFC78
{
	int num;
	Hash outfit;
	Hash outComponentVariant;
	var outComponent;
	int i;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (hParam1 == joaat("Player_Zero"))
	{
		num = 0;
		uParam0->[13] = 10 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_One"))
	{
		num = 1;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_Two"))
	{
		num = 2;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("MP_M_Freemode_01"))
	{
		num = 3;
	}
	else if (hParam1 == joaat("MP_F_Freemode_01"))
	{
		num = 4;
	}

	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT(iParam2 - iParam3, &outfit);

	if (!FILES::IS_CONTENT_ITEM_LOCKED(outfit))
	{
		for (i = 0; i < outfit.f_4; i = i + 1)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(outfit.f_1, i, &outComponentVariant))
			{
				if (outComponentVariant != 0 && outComponentVariant != -1 && outComponentVariant != joaat("0"))
				{
					if (outComponentVariant.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
						FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
					
						if (outComponentVariant != outComponent.f_1)
							uParam0->f_16 = 1;
					}
				
					if (outComponentVariant.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_103(outComponentVariant.f_2)] = outComponentVariant;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_103(outComponentVariant.f_2)] = func_95(hParam1, outComponentVariant, func_103(outComponentVariant.f_2), num);
					}
				}
				else if (outComponentVariant.f_1 != -1)
				{
					uParam0->[func_103(outComponentVariant.f_2)] = outComponentVariant.f_1;
				}
			}
		}
	
		if (outfit.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = outfit.f_1;
	}

	return;
}

int func_103(int iParam0) // Position - 0x10051 Hash - 0xF91DA7A7 ^0xF91DA7A7
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_104(var uParam0, int iParam1, int iParam2, ePedComponentType epctParam3, ePedComponentType epctParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x10101 Hash - 0xEC425A3E ^0xEC425A3E
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = epctParam3;
	uParam0->[4] = epctParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

BOOL func_105(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x10172 Hash - 0xCC83E9BC ^0xCC83E9BC
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 == 40 || epctParam2 >= 41 && epctParam2 <= 56 || epctParam2 >= 64 && epctParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 17 && epctParam2 <= 18 || epctParam2 >= 71 && epctParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 18 && epctParam2 <= 130)
					{
						return true;
					}
					else if (epctParam2 >= PV_COMP_DECL && epctParam2 <= 17)
					{
						return true;
					}
					else if (epctParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_90(hParam0, epctParam2, 14, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_90(hParam0, epctParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (epctParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_90(hParam0, epctParam2, 1, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_90(hParam0, epctParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 18 && epctParam2 <= 130)
					{
						return true;
					}
					else if (epctParam2 >= PV_COMP_DECL && epctParam2 <= 17)
					{
						return true;
					}
					else if (epctParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_90(hParam0, epctParam2, 14, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_90(hParam0, epctParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (epctParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_90(hParam0, epctParam2, 1, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_90(hParam0, epctParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_106(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x103EF Hash - 0x261C127A ^0x57548E07
{
	if (hParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
			if (epctParam2 == PV_COMP_DECL)
				return true;
		else if (iParam1 == 8)
			if (epctParam2 == PV_COMP_TASK || epctParam2 == PV_COMP_TEEF || epctParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == PV_COMP_MAX || epctParam2 == 59 || epctParam2 == 60 || epctParam2 == 31 || epctParam2 == 32 || epctParam2 == 33 || epctParam2 == 34 || epctParam2 == 35 || epctParam2 == 36 || epctParam2 == 37 || epctParam2 == 38 || epctParam2 == 39 || epctParam2 == 40 || epctParam2 == 41 || epctParam2 >= 42 && epctParam2 <= 44 || epctParam2 == 54 || epctParam2 == 55)
				return true;
	}
	else if (hParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
			if (epctParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (epctParam2 == PV_COMP_UPPR || epctParam2 == PV_COMP_HAND || epctParam2 == PV_COMP_TASK)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_DECL)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == 82 || epctParam2 == PV_COMP_DECL || epctParam2 == 26 || epctParam2 == 27 || epctParam2 == 28 || epctParam2 == 29 || epctParam2 == 30 || epctParam2 == 31 || epctParam2 == 32 || epctParam2 == 33 || epctParam2 == 34 || epctParam2 == 35 || epctParam2 == 36 || epctParam2 >= 37 && epctParam2 <= 39)
				return true;
	}
	else if (hParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
			if (epctParam2 == 14 || epctParam2 == PV_COMP_TEEF)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 == PV_COMP_ACCS || epctParam2 >= PV_COMP_TASK && epctParam2 <= 14 || epctParam2 == 15 || epctParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == 88 || epctParam2 == PV_COMP_MAX || epctParam2 == 47 || epctParam2 == 48 || epctParam2 == 49 || epctParam2 == 50 || epctParam2 == 51 || epctParam2 == 52 || epctParam2 == 53 || epctParam2 == 54 || epctParam2 == 55 || epctParam2 == 56 || epctParam2 == 57 || epctParam2 >= 58 && epctParam2 <= 60)
				return true;
	}
	else if (hParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (epctParam2 > PV_COMP_HEAD)
			{
				if (epctParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_90(hParam0, epctParam2, 1, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (hParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (epctParam2 > PV_COMP_HEAD)
			{
				if (epctParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_90(hParam0, epctParam2, 1, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_107(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x10814 Hash - 0xAC33D304 ^0xAC33D304
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
				if (epctParam2 == 58 || epctParam2 == 61 || epctParam2 >= 62 && epctParam2 <= 69 || epctParam2 >= 70 && epctParam2 <= 79 || epctParam2 >= 80 && epctParam2 <= 89 || epctParam2 == 90 || epctParam2 >= 91 && epctParam2 <= 102 || epctParam2 >= 103 && epctParam2 <= 110 || epctParam2 == 111)
					return true;
			break;
	
		case joaat("Player_One"):
			if (iParam1 == 14)
				if (epctParam2 >= 83 && epctParam2 <= 92 || epctParam2 == 93 || epctParam2 == 94 || epctParam2 >= 95 && epctParam2 <= 101 || epctParam2 >= 102 && epctParam2 <= 111 || epctParam2 >= 112 && epctParam2 <= 121 || epctParam2 >= 122 && epctParam2 <= 131 || epctParam2 >= 132 && epctParam2 <= 139 || epctParam2 >= 140 && epctParam2 <= 149 || epctParam2 >= 150 && epctParam2 <= 156 || epctParam2 == 157)
					return true;
			break;
	
		case joaat("Player_Two"):
			if (iParam1 == 14)
				if (epctParam2 == 89 || epctParam2 >= 90 && epctParam2 <= 99 || epctParam2 >= 100 && epctParam2 <= 109 || epctParam2 == 111 || epctParam2 == 112 || epctParam2 >= 113 && epctParam2 <= 122 || epctParam2 >= 123 && epctParam2 <= 132 || epctParam2 >= 133 && epctParam2 <= 142 || epctParam2 >= 143 && epctParam2 <= 152 || epctParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (epctParam2 >= 155 && epctParam2 <= 318)
				{
					return true;
				}
				else if (epctParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_90(hParam0, epctParam2, 14, 3);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (epctParam2 >= 155 && epctParam2 <= 318)
				{
					return true;
				}
				else if (epctParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_90(hParam0, epctParam2, 14, 4);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

ePedComponentType func_108(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x10B07 Hash - 0xA9FF3076 ^0xC030B76B
{
	int pedPropIndex;
	int pedPropTextureIndex;

	if (PED::IS_PED_INJURED(pedParam0))
		return -99;

	pedPropIndex = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);

	if (pedPropIndex == -1)
		return func_97(epctParam1);

	pedPropTextureIndex = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	return func_93(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

ePedComponentType func_109(Ped pedParam0, int iParam1) // Position - 0x10B4E Hash - 0x5DC76C2F ^0x122A4DD3
{
	ePedComponentType componentId;
	int pedDrawableVariation;
	int pedTextureVariation;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || PED::IS_PED_INJURED(pedParam0))
		return -99;

	componentId = func_78(iParam1);
	pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
	pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
	return func_110(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_110(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x10BAE Hash - 0x8F4AAD60 ^0xD2AF7F3D
{
	ePedComponentType componentId;
	int numberOfPedDrawableVariations;
	int num;
	int i;

	componentId = func_78(iParam3);
	numberOfPedDrawableVariations = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);

	for (i = 0; i <= numberOfPedDrawableVariations - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num = num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
		}
		else
		{
			num = num + iParam2;
			return num;
		}
	}

	return -99;
}

void func_111(int iParam0) // Position - 0x10C05 Hash - 0xE5A1F74D ^0x61D497DD
{
	if (IS_BIT_SET(Global_79031[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_79031[1 /*14*/].f_6, 6))
		func_119(iParam0, Global_79031[1 /*14*/].f_5, Global_79031[1 /*14*/].f_2, 2, Global_79031[1 /*14*/].f_1, 1, 0);

	if (IS_BIT_SET(Global_79031[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_79031[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_112(Global_2883588, 2, true, true, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_112(Global_2883588, 2, true, true, -1);
		}
		else
		{
			func_112(Global_2883588, 2, true, true, -1);
		}
	}

	return;
}

void func_112(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x10CB1 Hash - 0x302FBF28 ^0x92BCD54A
{
	int num;
	int offset;
	int num2;
	int address;

	num = Global_79028;

	if (iParam4 != -1)
		num = iParam4;

	if (func_118(epctParam0, iParam1, &num2, &offset, bParam2, bParam3))
	{
		address = func_117(num2, num);
		MISC::SET_BIT(&address, offset);
		func_113(num2, address, num, true);
	}

	return;
}

void func_113(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x10CF9 Hash - 0x99A9B13C ^0x9ABF46
{
	Hash statName;

	if (iParam0 != 14626)
	{
		statName = func_114(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_114(int iParam0, int iParam1) // Position - 0x10D27 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_115(iParam1));
}

int func_115(int iParam0) // Position - 0x10D3C Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_116();
	
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

int func_116() // Position - 0x10D70 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574925;
}

int func_117(int iParam0, int iParam1) // Position - 0x10D7C Hash - 0x744E461C ^0x94D7C845
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14626)
	{
		statHash = func_114(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_118(ePedComponentType epctParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x10DAB Hash - 0x1B8A3878 ^0xAE12BCDE
{
	int fmMaleShopPedApparelItemIndex;

	*uParam2 = 14626;

	if (bParam4 && Global_4540169 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	fmMaleShopPedApparelItemIndex = -1;

	if (bParam4)
		if (Global_4540169)
			fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);
		else
			fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);
	else if (bParam5)
		fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);
	else
		fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);

	if (fmMaleShopPedApparelItemIndex == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = &func_4;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = &func_6;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10304;
					break;
			
				case 232:
					*uParam2 = 10305;
					break;
			
				case 233:
					*uParam2 = 10306;
					break;
			
				case 234:
					*uParam2 = 10307;
					break;
			
				case 235:
					*uParam2 = 10308;
					break;
			
				case 236:
					*uParam2 = 10309;
					break;
			
				case 237:
					*uParam2 = 10310;
					break;
			
				case 238:
					*uParam2 = 10311;
					break;
			
				case 239:
					*uParam2 = 10312;
					break;
			
				case 240:
					*uParam2 = 10313;
					break;
			
				case 241:
					*uParam2 = 10314;
					break;
			
				case 242:
					*uParam2 = 10315;
					break;
			
				case 243:
					*uParam2 = 10316;
					break;
			
				case 244:
					*uParam2 = 10317;
					break;
			
				case 245:
					*uParam2 = 10318;
					break;
			
				case 246:
					*uParam2 = 10319;
					break;
			
				case 247:
					*uParam2 = 10320;
					break;
			
				case 248:
					*uParam2 = 10321;
					break;
			
				case 249:
					*uParam2 = 10322;
					break;
			
				case 250:
					*uParam2 = 10323;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10420;
					break;
			
				case 252:
					*uParam2 = 10421;
					break;
			
				case 253:
					*uParam2 = 10422;
					break;
			
				case 254:
					*uParam2 = 10423;
					break;
			
				case 255:
					*uParam2 = 10424;
					break;
			
				case 256:
					*uParam2 = 10425;
					break;
			
				case 257:
					*uParam2 = 10426;
					break;
			
				case 258:
					*uParam2 = 10427;
					break;
			
				case 259:
					*uParam2 = 10428;
					break;
			
				case 260:
					*uParam2 = 10429;
					break;
			
				case 261:
					*uParam2 = 11847;
					break;
			
				case 262:
					*uParam2 = 11848;
					break;
			
				case 263:
					*uParam2 = 11849;
					break;
			
				case 264:
					*uParam2 = 11850;
					break;
			
				case 265:
					*uParam2 = 11851;
					break;
			
				case 266:
					*uParam2 = 11852;
					break;
			
				case 267:
					*uParam2 = 11853;
					break;
			
				case 268:
					*uParam2 = 11854;
					break;
			
				case 269:
					*uParam2 = 11855;
					break;
			
				case 270:
					*uParam2 = 11856;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11878;
					break;
			
				case 272:
					*uParam2 = 11879;
					break;
			
				case 273:
					*uParam2 = 11880;
					break;
			
				case 274:
					*uParam2 = 11881;
					break;
			
				case 275:
					*uParam2 = 11882;
					break;
			
				case 276:
					*uParam2 = 11883;
					break;
			
				case 277:
					*uParam2 = 11884;
					break;
			
				case 278:
					*uParam2 = 11885;
					break;
			
				case 279:
					*uParam2 = 11886;
					break;
			
				case 280:
					*uParam2 = 11887;
					break;
			
				case 281:
					*uParam2 = 11888;
					break;
			
				case 282:
					*uParam2 = 11889;
					break;
			
				case 283:
					*uParam2 = 11976;
					break;
			
				case 284:
					*uParam2 = 11977;
					break;
			
				case 285:
					*uParam2 = 11978;
					break;
			
				case 286:
					*uParam2 = 11979;
					break;
			
				case 287:
					*uParam2 = 11980;
					break;
			
				case 288:
					*uParam2 = 11981;
					break;
			
				case 289:
					*uParam2 = 11982;
					break;
			
				case 290:
					*uParam2 = 11983;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11984;
					break;
			
				case 292:
					*uParam2 = 11985;
					break;
			
				case 293:
					*uParam2 = 11986;
					break;
			
				case 294:
					*uParam2 = 11987;
					break;
			
				case 295:
					*uParam2 = 11988;
					break;
			
				case 296:
					*uParam2 = 11989;
					break;
			
				case 297:
					*uParam2 = 11990;
					break;
			
				case 298:
					*uParam2 = 12190;
					break;
			
				case 299:
					*uParam2 = 12191;
					break;
			
				case 300:
					*uParam2 = 12192;
					break;
			
				case 301:
					*uParam2 = 12193;
					break;
			
				case 302:
					*uParam2 = 12194;
					break;
			
				case 303:
					*uParam2 = 12195;
					break;
			
				case 304:
					*uParam2 = 12196;
					break;
			
				case 305:
					*uParam2 = 12197;
					break;
			}
			break;
	
		case 2:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = &func_14;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10324;
					break;
			
				case 232:
					*uParam2 = 10325;
					break;
			
				case 233:
					*uParam2 = 10326;
					break;
			
				case 234:
					*uParam2 = 10327;
					break;
			
				case 235:
					*uParam2 = 10328;
					break;
			
				case 236:
					*uParam2 = 10329;
					break;
			
				case 237:
					*uParam2 = 10330;
					break;
			
				case 238:
					*uParam2 = 10331;
					break;
			
				case 239:
					*uParam2 = 10332;
					break;
			
				case 240:
					*uParam2 = 10333;
					break;
			
				case 241:
					*uParam2 = 10334;
					break;
			
				case 242:
					*uParam2 = 10335;
					break;
			
				case 243:
					*uParam2 = 10336;
					break;
			
				case 244:
					*uParam2 = 10337;
					break;
			
				case 245:
					*uParam2 = 10338;
					break;
			
				case 246:
					*uParam2 = 10339;
					break;
			
				case 247:
					*uParam2 = 10340;
					break;
			
				case 248:
					*uParam2 = 10341;
					break;
			
				case 249:
					*uParam2 = 10342;
					break;
			
				case 250:
					*uParam2 = 10343;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10430;
					break;
			
				case 252:
					*uParam2 = 10431;
					break;
			
				case 253:
					*uParam2 = 10432;
					break;
			
				case 254:
					*uParam2 = 10433;
					break;
			
				case 255:
					*uParam2 = 10434;
					break;
			
				case 256:
					*uParam2 = 10435;
					break;
			
				case 257:
					*uParam2 = 10436;
					break;
			
				case 258:
					*uParam2 = 10437;
					break;
			
				case 259:
					*uParam2 = 10438;
					break;
			
				case 260:
					*uParam2 = 10439;
					break;
			
				case 261:
					*uParam2 = 11857;
					break;
			
				case 262:
					*uParam2 = 11858;
					break;
			
				case 263:
					*uParam2 = 11859;
					break;
			
				case 264:
					*uParam2 = 11860;
					break;
			
				case 265:
					*uParam2 = 11861;
					break;
			
				case 266:
					*uParam2 = 11862;
					break;
			
				case 267:
					*uParam2 = 11863;
					break;
			
				case 268:
					*uParam2 = 11864;
					break;
			
				case 269:
					*uParam2 = 11865;
					break;
			
				case 270:
					*uParam2 = 11866;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11890;
					break;
			
				case 272:
					*uParam2 = 11891;
					break;
			
				case 273:
					*uParam2 = 11892;
					break;
			
				case 274:
					*uParam2 = 11893;
					break;
			
				case 275:
					*uParam2 = 11894;
					break;
			
				case 276:
					*uParam2 = 11895;
					break;
			
				case 277:
					*uParam2 = 11896;
					break;
			
				case 278:
					*uParam2 = 11897;
					break;
			
				case 279:
					*uParam2 = 11898;
					break;
			
				case 280:
					*uParam2 = 11899;
					break;
			
				case 281:
					*uParam2 = 11900;
					break;
			
				case 282:
					*uParam2 = 11901;
					break;
			
				case 283:
					*uParam2 = 11991;
					break;
			
				case 284:
					*uParam2 = 11992;
					break;
			
				case 285:
					*uParam2 = 11993;
					break;
			
				case 286:
					*uParam2 = 11994;
					break;
			
				case 287:
					*uParam2 = 11995;
					break;
			
				case 288:
					*uParam2 = 11996;
					break;
			
				case 289:
					*uParam2 = 11997;
					break;
			
				case 290:
					*uParam2 = 11998;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11999;
					break;
			
				case 292:
					*uParam2 = 12000;
					break;
			
				case 293:
					*uParam2 = 12001;
					break;
			
				case 294:
					*uParam2 = 12002;
					break;
			
				case 295:
					*uParam2 = 12003;
					break;
			
				case 296:
					*uParam2 = 12004;
					break;
			
				case 297:
					*uParam2 = 12005;
					break;
			
				case 298:
					*uParam2 = 12198;
					break;
			
				case 299:
					*uParam2 = 12199;
					break;
			
				case 300:
					*uParam2 = 12200;
					break;
			
				case 301:
					*uParam2 = 12201;
					break;
			
				case 302:
					*uParam2 = 12202;
					break;
			
				case 303:
					*uParam2 = 12203;
					break;
			
				case 304:
					*uParam2 = 12204;
					break;
			
				case 305:
					*uParam2 = 12205;
					break;
			}
			break;
	}

	*uParam3 = fmMaleShopPedApparelItemIndex % 32;
	return *uParam2 != 14626;
}

BOOL func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x13899 Hash - 0xDF4F0B01 ^0xAAD287D4
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114370.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_120(int iParam0) // Position - 0x1473D Hash - 0x972D67C7 ^0x6B327493
{
	if (!IS_BIT_SET(Global_79031[1 /*14*/].f_6, 0))
		return false;

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_79031[1 /*14*/].f_6, 1))
			return false;
	
		if (!IS_BIT_SET(Global_79031[1 /*14*/].f_6, 2))
			return false;
	}

	return true;
}

struct<14> func_121(Hash hParam0, int iParam1, ePedComponentType epctParam2, int iParam3) // Position - 0x14785 Hash - 0x7D5AC326 ^0xB460D68E
{
	func_185();

	if (hParam0 == joaat("Player_Zero"))
		func_167(iParam1, epctParam2);
	else if (hParam0 == joaat("Player_One"))
		func_148(iParam1, epctParam2);
	else if (hParam0 == joaat("Player_Two"))
		func_122(iParam1, epctParam2);

	return Global_79031[0 /*14*/];
}

void func_122(int iParam0, int iParam1) // Position - 0x147D7 Hash - 0x2A09B983 ^0x2A09B983
{
	switch (iParam0)
	{
		case 0:
			func_147(iParam1);
			break;
	
		case 2:
			func_146(iParam1);
			break;
	
		case 3:
			func_143(iParam1);
			break;
	
		case 4:
			func_142(iParam1);
			break;
	
		case 6:
			func_141(iParam1);
			break;
	
		case 5:
			func_140(iParam1);
			break;
	
		case 8:
			func_139(iParam1);
			break;
	
		case 9:
			func_138(iParam1);
			break;
	
		case 10:
			func_137(iParam1);
			break;
	
		case 1:
			func_136(iParam1);
			break;
	
		case 7:
			func_135(iParam1);
			break;
	
		case 11:
			func_134(iParam1);
			break;
	
		case 12:
			func_133(iParam1);
			break;
	
		case 13:
			func_132(iParam1);
			break;
	
		case 14:
			func_123(iParam1);
			break;
	}

	return;
}

void func_123(int iParam0) // Position - 0x148C7 Hash - 0x3D2B806B ^0x3AA3443D
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Specs Pest Shades*/, 16);
			num2 = 1;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Dix Charcoal Glasses*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Dix Brown Glasses*/, 16);
			num2 = 2;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Dix Black Glasses*/, 16);
			num2 = 2;
			num3 = 2;
			num = 55;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Dix Checked Glasses*/, 16);
			num2 = 2;
			num3 = 3;
			num = 52;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Dix White Glasses*/, 16);
			num2 = 2;
			num3 = 4;
			num = 54;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Dix Red Glasses*/, 16);
			num2 = 2;
			num3 = 5;
			num = 54;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Dix Maroon Glasses*/, 16);
			num2 = 2;
			num3 = 6;
			num = 55;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Dix Yellow Glasses*/, 16);
			num2 = 2;
			num3 = 7;
			num = 55;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Dix Spring Glasses*/, 16);
			num2 = 2;
			num3 = 8;
			num = 58;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Dix Fall Glasses*/, 16);
			num2 = 2;
			num3 = 9;
			num = 58;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Tung Charcoal Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Tung White Shades*/, 16);
			num2 = 3;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Tung Ash Shades*/, 16);
			num2 = 3;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Tung Red Shades*/, 16);
			num2 = 3;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Tung Blue Shades*/, 16);
			num2 = 3;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Tung Black Shades*/, 16);
			num2 = 3;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Tung Orange Tint Shades*/, 16);
			num2 = 3;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Tung Purple Tint Shades*/, 16);
			num2 = 3;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Tung Hornet Shades*/, 16);
			num2 = 3;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Tung Two-Tone Shades*/, 16);
			num2 = 3;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG Black Shades*/, 16);
			num2 = 7;
			num3 = 0;
			num = 60;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG Ash Shades*/, 16);
			num2 = 7;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG Red Shades*/, 16);
			num2 = 7;
			num3 = 2;
			num = 50;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG Yellow Shades*/, 16);
			num2 = 7;
			num3 = 3;
			num = 59;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG Brown Shades*/, 16);
			num2 = 7;
			num3 = 4;
			num = 55;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG Gray Shades*/, 16);
			num2 = 7;
			num3 = 5;
			num = 55;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG Blue Shades*/, 16);
			num2 = 7;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG Smoke Shades*/, 16);
			num2 = 7;
			num3 = 7;
			num = 59;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG Orange Shades*/, 16);
			num2 = 7;
			num3 = 8;
			num = 79;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG Slate Shades*/, 16);
			num2 = 7;
			num3 = 9;
			num = 79;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Steel Aviators*/, 16);
			num2 = 8;
			num3 = 0;
			num = 150;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Slate Aviators*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Gold Aviators*/, 16);
			num2 = 8;
			num3 = 2;
			num = 170;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Silver Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 3;
			num = 175;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Aluminum Aviators*/, 16);
			num2 = 8;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Bronze Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Brown Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Black Aviators*/, 16);
			num2 = 8;
			num3 = 7;
			num = 195;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Silver Aviators*/, 16);
			num2 = 8;
			num3 = 8;
			num = 210;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Smoke Aviators*/, 16);
			num2 = 8;
			num3 = 9;
			num = 215;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Krepp Gold Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Krepp Gray Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 165;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Krepp Slate Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 169;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Krepp Black Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 169;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Krepp White Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Krepp Silver Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 175;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Krepp Ash Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 175;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Krepp Brown Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 189;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Krepp Beige Shades*/, 16);
			num2 = 9;
			num3 = 8;
			num = 195;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Krepp Coffee Shades*/, 16);
			num2 = 9;
			num3 = 9;
			num = 195;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Broker Black Shades*/, 16);
			num2 = 10;
			num3 = 0;
			num = 49;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Broker Purple Shades*/, 16);
			num2 = 10;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Broker Brown Shades*/, 16);
			num2 = 10;
			num3 = 2;
			num = 52;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Broker Orange Shades*/, 16);
			num2 = 10;
			num3 = 3;
			num = 55;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Broker Gray Shades*/, 16);
			num2 = 10;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Broker Striped Shades*/, 16);
			num2 = 10;
			num3 = 5;
			num = 58;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Broker Beige Shades*/, 16);
			num2 = 10;
			num3 = 6;
			num = 60;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Broker Ash Shades*/, 16);
			num2 = 10;
			num3 = 7;
			num = 63;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Broker Charcoal Shades*/, 16);
			num2 = 10;
			num3 = 8;
			num = 65;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Broker Gradient Shades*/, 16);
			num2 = 10;
			num3 = 9;
			num = 68;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Hockey Mask*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Black Hat*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
			num2 = 7;
			num3 = 1;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 7;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 8;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 9;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 10;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 11;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 12;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 13;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 14;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 15;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Hawk and Little Baseball Cap*/, 16);
			num2 = 26;
			num3 = 0;
			num = 20;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Taco Bomb Baseball Cap*/, 16);
			num2 = 26;
			num3 = 1;
			num = 25;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Nut House Baseball Cap*/, 16);
			num2 = 26;
			num3 = 2;
			num = 25;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Rusty Brown's Baseball Cap*/, 16);
			num2 = 26;
			num3 = 3;
			num = 22;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Bishop's Chicken Baseball Cap*/, 16);
			num2 = 26;
			num3 = 4;
			num = 20;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*24/7 Baseball Cap*/, 16);
			num2 = 26;
			num3 = 5;
			num = 25;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*iFruit 80s Baseball Cap*/, 16);
			num2 = 26;
			num3 = 6;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Blarneys Baseball Cap*/, 16);
			num2 = 26;
			num3 = 7;
			num = 24;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Pisswasser Baseball Cap*/, 16);
			num2 = 26;
			num3 = 8;
			num = 25;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*RON Baseball Cap*/, 16);
			num2 = 26;
			num3 = 9;
			num = 22;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Logger Light Baseball Cap*/, 16);
			num2 = 26;
			num3 = 10;
			num = 18;
			num4 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Meteorite Baseball Cap*/, 16);
			num2 = 26;
			num3 = 11;
			num = 20;
			num4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Dusche Gold Baseball Cap*/, 16);
			num2 = 26;
			num3 = 12;
			num = 24;
			num4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Barracho Baseball Cap*/, 16);
			num2 = 26;
			num3 = 13;
			num = 22;
			num4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Vespucci Beach Baseball Cap*/, 16);
			num2 = 26;
			num3 = 14;
			num = 25;
			num4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Orang-O-Tang Baseball Cap*/, 16);
			num2 = 26;
			num3 = 15;
			num = 25;
			num4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 155, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_124(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x15B3E Hash - 0xA2DFD38C ^0xCA7EA132
{
	int num;
	int num2;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = iParam2 % 32;
	iParam0->f_2 = iParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_130(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL");

	if (bParam7)
		MISC::SET_BIT(&(iParam0->f_6), 3);

	if (bParam10)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			MISC::SET_BIT(&(iParam0->f_6), 5);
	
		MISC::SET_BIT(&(iParam0->f_6), 1);
		MISC::SET_BIT(&(iParam0->f_6), 2);
		MISC::SET_BIT(&(iParam0->f_6), 6);
	
		if (func_129(14))
			return;
	
		if (iParam1 == 1)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
				MISC::SET_BIT(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_128(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_128(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_128(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_128(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_128(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_128(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
	
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(iParam0->f_6), 1);
			MISC::CLEAR_BIT(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
		MISC::SET_BIT(&(iParam0->f_6), 5);
	
		if (func_119(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 1);
	
		if (func_119(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 2);
	
		if (!func_119(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 4);
	}
	else
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_129(14))
				return;
		
			num = func_117(func_127(iParam1, iParam0->f_2), Global_79028);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 1);
		
			num = func_117(func_126(iParam1, iParam0->f_2), Global_79028);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 2);
		
			if (func_125(iParam1, iParam0->f_2, &num2))
			{
				num = func_117(num2, Global_79028);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					MISC::SET_BIT(&(iParam0->f_6), 4);
			}
		}
		else
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_125(int iParam0, int iParam1, var uParam2) // Position - 0x15EE0 Hash - 0x805F0D09 ^0xD5FF8259
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_126(int iParam0, int iParam1) // Position - 0x162E5 Hash - 0x4CEDF2DA ^0xD4A47B95
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return 1428;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_127(int iParam0, int iParam1) // Position - 0x166E0 Hash - 0x4CEDF2DA ^0x7536052F
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return 1412;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return 885;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return &func_1;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

BOOL func_128(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x16ADB Hash - 0x8D68F96D ^0x8D68F96D
{
	int num;
	int num2;
	int num3;
	int num4;

	num = Global_79028;

	if (iParam4 != -1)
		num = iParam4;

	if (func_118(epctParam0, iParam1, &num3, &num2, bParam2, bParam3))
	{
		num4 = func_117(num3, num);
		return IS_BIT_SET(num4, num2);
	}

	return false;
}

BOOL func_129(int iParam0) // Position - 0x16B19 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43922 == iParam0;
}

int func_130(int iParam0) // Position - 0x16B27 Hash - 0xE4C61EBD ^0xE4C61EBD
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_131(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x16BFB Hash - 0xE3509264 ^0xCA79B364
{
	int num;
	int num2;
	Hash outfit;
	int outfitIndex;
	int num3;
	Hash outProp;
	int num4;
	int componentId;
	int num5;
	Hash outComponent;
	int componentId2;
	int num6;

	num = iParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_79031[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		outfitIndex = iParam1 - iParam2;
	
		if (outfitIndex >= 0)
		{
			num3 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
		
			if (num3 > outfitIndex)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(outfitIndex, &outfit);
				Global_2883588 = outfit.f_1;
				Global_2883589 = outfit;
				func_124(&Global_79031[0 /*14*/], iParam0, iParam1, &(outfit.f_7), 0, 0, outfit.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_124(&Global_79031[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - iParam2;
	
		if (componentId >= 0)
		{
			num5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
		
			if (num5 > componentId)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
			
				if (outProp.f_6 == 0)
					num4 = 9;
				else if (outProp.f_6 == 1)
					num4 = 10;
				else if (outProp.f_6 == 2)
					num4 = 2;
				else if (outProp.f_6 == 3)
					num4 = 3;
				else if (outProp.f_6 == 4)
					num4 = 4;
				else if (outProp.f_6 == 5)
					num4 = 5;
				else if (outProp.f_6 == 6)
					num4 = 6;
				else if (outProp.f_6 == 7)
					num4 = 7;
				else if (outProp.f_6 == 8)
					num4 = 8;
				else
					num4 = -1;
			
				Global_2883588 = outProp.f_1;
				Global_2883589 = outProp;
				func_124(&Global_79031[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num4, 2, outProp.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
	
		if (hParam3 != -1 && Global_79229)
		{
			FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
			Global_2883588 = outComponent.f_1;
			Global_2883589 = outComponent;
			func_124(&Global_79031[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
			return;
		}
	
		componentId2 = iParam1 - iParam2;
	
		if (componentId2 >= 0)
		{
			num6 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_78(iParam0));
		
			if (num6 > componentId2)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
				Global_2883588 = outComponent.f_1;
				Global_2883589 = outComponent;
				func_124(&Global_79031[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_132(int iParam0) // Position - 0x16E82 Hash - 0xE86AB6A5 ^0xFD8883E0
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 9, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_133(int iParam0) // Position - 0x16FD9 Hash - 0x7D56211F ^0x9B83FCF7
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*White T-Shirt, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Dock Worker*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Highway Patrol*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tennis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Underwear*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Security*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Toilet*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prologue*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pink Ladies Sweats*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Hunting*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*White T-Shirt, Cargo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Denim Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Beige Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 119;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Blue Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 99;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Brown Plaid Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 129;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Burgundy Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Murky Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 120;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Mint Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 139;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Green Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 149;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Blue-Gray Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 145;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Caramel Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 140;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Mocha Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 135;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Sand Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Charcoal Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Off-White Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Cream Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Black Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Ash Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Red T-Shirt, Cargo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Amethyst Polo Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*White T-Shirt, Camo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Moto-X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*White Tank Top, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*White T-Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 48, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_134(int iParam0) // Position - 0x174E7 Hash - 0x2A6B1214 ^0x558C7F71
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 1, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_135(int iParam0) // Position - 0x1755C Hash - 0xC574A0D9 ^0x15F64E9B
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 1, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_136(int iParam0) // Position - 0x175D0 Hash - 0xC290E725 ^0xDC73D0C1
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Beard 1*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Stubble*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Big Mustache*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Handlebar*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*The Gerry*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 6, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_137(int iParam0) // Position - 0x176B7 Hash - 0x7C005293 ^0xDACFA98B
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 9;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 6;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		default:
			func_131(num6, iParam0, 33, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_138(int iParam0) // Position - 0x17A1A Hash - 0xF13F6389 ^0xD9977FAF
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 7;
			num3 = 0;
			num = 270;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 7;
			num3 = 1;
			num = 270;
			break;
	
		default:
			func_131(num6, iParam0, 17, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_139(int iParam0) // Position - 0x17C2B Hash - 0xDDFE7744 ^0xB071BB66
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Black Digital Watch*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*White Digital Watch*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 18, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_140(int iParam0) // Position - 0x17E5B Hash - 0xE02531F3 ^0xE8089ECF
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 7, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_141(int iParam0) // Position - 0x17F6B Hash - 0x36033C1F ^0x84189F47
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Black Chukka Boots*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Snakeskin Chukka Boots*/, 16);
			num2 = 0;
			num3 = 1;
			num = 22;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Gray Chukka Boots*/, 16);
			num2 = 0;
			num3 = 2;
			num = 45;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Brown Chukka Boots*/, 16);
			num2 = 0;
			num3 = 3;
			num = 65;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Crocodile Skin Boots*/, 16);
			num2 = 0;
			num3 = 4;
			num = 58;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Cowboy Boots*/, 16);
			num2 = 0;
			num3 = 5;
			num = 72;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Yellow Reptile Skin Boots*/, 16);
			num2 = 0;
			num3 = 6;
			num = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Reptile Skin Boots*/, 16);
			num2 = 0;
			num3 = 7;
			num = 60;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Work Boots*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Dressy Shoes*/, 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Black Leather Loafers*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Gray Leather Loafers*/, 16);
			num2 = 9;
			num3 = 1;
			num = 680;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Cream Leather Loafers*/, 16);
			num2 = 9;
			num3 = 2;
			num = 650;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Brown Leather Loafers*/, 16);
			num2 = 9;
			num3 = 3;
			num = 670;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*White Leather Loafers*/, 16);
			num2 = 9;
			num3 = 4;
			num = 700;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Russet Leather Loafers*/, 16);
			num2 = 9;
			num3 = 5;
			num = 680;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*White Snakeskin Loafers*/, 16);
			num2 = 9;
			num3 = 6;
			num = 720;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Rattlesnake Loafers*/, 16);
			num2 = 9;
			num3 = 7;
			num = 740;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 9;
			num3 = 8;
			num = 760;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 9;
			num3 = 9;
			num = 780;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Pale Reptile Loafers*/, 16);
			num2 = 9;
			num3 = 10;
			num = 750;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Tan Alligator Loafers*/, 16);
			num2 = 9;
			num3 = 11;
			num = 700;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Chestnut Boots*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*All Black Oxfords*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Chocolate Oxfords*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Chestnut Oxfords*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Tan Oxfords*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*White Oxfords*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Ash Oxfords*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Beige Oxfords*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Topaz Oxfords*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Black Oxfords*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Lime Oxfords*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Hawthorn Oxfords*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Coffee Oxfords*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Gray Oxfords*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Cream Oxfords*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Navy Oxfords*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Black Slip-Ons*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Red Slip-Ons*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Brown Slip-Ons*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Green Slip-Ons*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Copper Slip-Ons*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Navy Slip-Ons*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Blue Slip-Ons*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Beige Slip-Ons*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*White Slip-Ons*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Tan Slip-Ons*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Gray Slip-Ons*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Navy Wingtips*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Coffee Wingtips*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Burgundy Wingtips*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Blue Wingtips*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Black Wingtips*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Tan Wingtips*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Purple Wingtips*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Chocolate Wingtips*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Green Wingtips*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Ash Wingtips*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Olive Wingtips*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Two-Tone Wingtips*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Yellow Wingtips*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_131(num6, iParam0, 84, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_142(int iParam0) // Position - 0x18978 Hash - 0xD968CB7E ^0xD07F7F5E
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Blue Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Dirty Blue Jeans*/, 16);
			num2 = 0;
			num3 = 1;
			num = 95;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Navy Jeans*/, 16);
			num2 = 0;
			num3 = 2;
			num = 129;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Faded Jeans*/, 16);
			num2 = 0;
			num3 = 3;
			num = 115;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Black Golf Pants*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Russet Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 1;
			num = 750;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*White Golf Pants*/, 16);
			num2 = 11;
			num3 = 2;
			num = 650;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Maroon Golf Pants*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Lobster Golf Pants*/, 16);
			num2 = 11;
			num3 = 4;
			num = 850;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Stone Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 5;
			num = 750;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pink Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 6;
			num = 690;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Mint Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 7;
			num = 820;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Brown Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 8;
			num = 650;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pale Blue Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 9;
			num = 690;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Beige Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 10;
			num = 690;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Aqua Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 11;
			num = 820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Black Cargo Pants*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*White Shorts*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pink Sweatpants*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Brown Work Pants*/, 16);
			num2 = 17;
			num3 = 0;
			num = 58;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Charcoal Work Pants*/, 16);
			num2 = 17;
			num3 = 1;
			num = 68;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Gray Work Pants*/, 16);
			num2 = 17;
			num3 = 2;
			num = 65;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Tan Work Pants*/, 16);
			num2 = 17;
			num3 = 3;
			num = 60;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Blue Work Pants*/, 16);
			num2 = 17;
			num3 = 4;
			num = 65;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Ash Work Pants*/, 16);
			num2 = 17;
			num3 = 5;
			num = 63;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*White Work Pants*/, 16);
			num2 = 17;
			num3 = 6;
			num = 60;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Beige Work Pants*/, 16);
			num2 = 17;
			num3 = 7;
			num = 58;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Tan Cargo Pants*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Cream Cargo Pants*/, 16);
			num2 = 18;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Silver Cargo Pants*/, 16);
			num2 = 18;
			num3 = 2;
			num = 99;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Gray Cargo Pants*/, 16);
			num2 = 18;
			num3 = 3;
			num = 105;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Charcoal Cargo Pants*/, 16);
			num2 = 18;
			num3 = 4;
			num = 110;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Green Cargo Pants*/, 16);
			num2 = 18;
			num3 = 5;
			num = 110;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*White Cargo Pants*/, 16);
			num2 = 18;
			num3 = 6;
			num = 99;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Urban Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 7;
			num = 110;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Desert Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 8;
			num = 110;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Field Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 9;
			num = 105;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Forest Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 10;
			num = 105;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Black Shorts*/, 16);
			num2 = 19;
			num3 = 0;
			num = 15;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Pale Blue Shorts*/, 16);
			num2 = 19;
			num3 = 1;
			num = 15;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Orange Shorts*/, 16);
			num2 = 19;
			num3 = 2;
			num = 15;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Blue Shorts*/, 16);
			num2 = 19;
			num3 = 3;
			num = 15;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Slate Shorts*/, 16);
			num2 = 19;
			num3 = 4;
			num = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Green Shorts*/, 16);
			num2 = 19;
			num3 = 5;
			num = 15;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Crimson Shorts*/, 16);
			num2 = 19;
			num3 = 6;
			num = 15;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Pale Blue Stripe Shorts*/, 16);
			num2 = 19;
			num3 = 7;
			num = 15;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Gray Pants*/, 16);
			num2 = 20;
			num3 = 0;
			num = 600;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Khaki Pants*/, 16);
			num2 = 20;
			num3 = 1;
			num = 600;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Charcoal Pants*/, 16);
			num2 = 20;
			num3 = 2;
			num = 600;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Cream Pants*/, 16);
			num2 = 20;
			num3 = 3;
			num = 600;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Stone Pants*/, 16);
			num2 = 20;
			num3 = 4;
			num = 600;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Black Pants*/, 16);
			num2 = 20;
			num3 = 5;
			num = 600;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Ash Pants*/, 16);
			num2 = 20;
			num3 = 6;
			num = 600;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Beige Pants*/, 16);
			num2 = 20;
			num3 = 7;
			num = 600;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Brown Pants*/, 16);
			num2 = 20;
			num3 = 8;
			num = 600;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Beige Cheap Pants*/, 16);
			num2 = 21;
			num3 = 0;
			num = 80;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Blue Cheap Pants*/, 16);
			num2 = 21;
			num3 = 1;
			num = 80;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Brown Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 2;
			num = 80;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Burgundy Cheap Pants*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Murky Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 4;
			num = 80;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Mint Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Green Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 6;
			num = 80;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Blue-Gray Cheap Pants*/, 16);
			num2 = 21;
			num3 = 7;
			num = 80;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Caramel Cheap Pants*/, 16);
			num2 = 21;
			num3 = 8;
			num = 80;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Mocha Cheap Pants*/, 16);
			num2 = 21;
			num3 = 9;
			num = 80;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*White Briefs*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Green Briefs*/, 16);
			num2 = 22;
			num3 = 1;
			num = 12;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Gray Briefs*/, 16);
			num2 = 22;
			num3 = 2;
			num = 12;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Leopardskin Briefs*/, 16);
			num2 = 22;
			num3 = 3;
			num = 22;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Impotent Rage Briefs*/, 16);
			num2 = 22;
			num3 = 4;
			num = 18;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Pink Leopardskin Briefs*/, 16);
			num2 = 22;
			num3 = 5;
			num = 20;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Space Monkey Briefs 1*/, 16);
			num2 = 22;
			num3 = 6;
			num = 30;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Space Monkey Briefs 2*/, 16);
			num2 = 22;
			num3 = 7;
			num = 30;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Space Monkey Briefs 3*/, 16);
			num2 = 22;
			num3 = 8;
			num = 30;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Space Monkey Briefs 4*/, 16);
			num2 = 22;
			num3 = 9;
			num = 30;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Sweatpants*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Brown Tuxedo Pants*/, 16);
			num2 = 24;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 9;
			break;
	
		default:
			func_131(num6, iParam0, 104, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_143(int iParam0) // Position - 0x194EB Hash - 0x2732DFB2 ^0x9C99461
{
	if (iParam0 < 136)
		func_145(iParam0);
	else
		func_144(iParam0);

	if (Global_79031[0 /*14*/].f_2 == -1)
		func_131(3, iParam0, 242, -1);

	return;
}

void func_144(int iParam0) // Position - 0x19520 Hash - 0x7B542CFB ^0xC468883
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Peyton Blue Blouson*/, 16);
			num2 = 21;
			num3 = 0;
			num = 32;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Overlooked Red Blouson*/, 16);
			num2 = 21;
			num3 = 1;
			num = 39;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Natural Blouson*/, 16);
			num2 = 21;
			num3 = 2;
			num = 40;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Sky Blue Blouson*/, 16);
			num2 = 21;
			num3 = 3;
			num = 42;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Deep Green Blouson*/, 16);
			num2 = 21;
			num3 = 4;
			num = 45;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Champagne Driver Blouson*/, 16);
			num2 = 21;
			num3 = 5;
			num = 48;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Snakeskin Blouson*/, 16);
			num2 = 21;
			num3 = 6;
			num = 52;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Desert Brown Blouson*/, 16);
			num2 = 21;
			num3 = 7;
			num = 55;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Black Striped Leather Jacket*/, 16);
			num2 = 22;
			num3 = 0;
			num = 390;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 1;
			num = 390;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chestnut Leather Jacket*/, 16);
			num2 = 22;
			num3 = 2;
			num = 560;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Red Leather Jacket*/, 16);
			num2 = 22;
			num3 = 3;
			num = 390;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*White Leather Jacket*/, 16);
			num2 = 22;
			num3 = 4;
			num = 390;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Blue Leather Jacket*/, 16);
			num2 = 22;
			num3 = 5;
			num = 390;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Lonewolf Leather Jacket*/, 16);
			num2 = 22;
			num3 = 6;
			num = 560;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Brown Leather Jacket*/, 16);
			num2 = 22;
			num3 = 7;
			num = 390;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Gray Striped Leather Jacket*/, 16);
			num2 = 22;
			num3 = 8;
			num = 390;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Gray Banded Leather Jacket*/, 16);
			num2 = 22;
			num3 = 9;
			num = 390;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Russet Leather Jacket*/, 16);
			num2 = 22;
			num3 = 10;
			num = 390;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Brown Suede Jacket*/, 16);
			num2 = 22;
			num3 = 11;
			num = 3950;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Brown Shooting Vest*/, 16);
			num2 = 23;
			num3 = 0;
			num = 150;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Woodland Shooting Vest*/, 16);
			num2 = 23;
			num3 = 1;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Taupe Shooting Vest*/, 16);
			num2 = 23;
			num3 = 2;
			num = 150;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 23;
			num3 = 3;
			num = 150;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Field Shooting Vest*/, 16);
			num2 = 23;
			num3 = 4;
			num = 160;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Forest Shooting Vest*/, 16);
			num2 = 23;
			num3 = 5;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*Yellow Tank Top*/, 16);
			num2 = 24;
			num3 = 0;
			num = 19;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*Blue Birds Tank Top*/, 16);
			num2 = 24;
			num3 = 1;
			num = 20;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*Orange Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 2;
			num = 19;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*Blue Stars Tank Top*/, 16);
			num2 = 24;
			num3 = 3;
			num = 22;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*Aqua Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 4;
			num = 20;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*Degenatron Tank Top*/, 16);
			num2 = 24;
			num3 = 5;
			num = 28;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*Taco Libre Tank Top*/, 16);
			num2 = 24;
			num3 = 6;
			num = 28;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*Pussycat Tank Top*/, 16);
			num2 = 24;
			num3 = 7;
			num = 25;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*Lemon Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 8;
			num = 22;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*Charcoal Tank Top*/, 16);
			num2 = 24;
			num3 = 9;
			num = 19;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*Off-White Tank Top*/, 16);
			num2 = 24;
			num3 = 10;
			num = 22;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*Banded Tank Top*/, 16);
			num2 = 24;
			num3 = 11;
			num = 19;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*Orange Tank Top*/, 16);
			num2 = 24;
			num3 = 12;
			num = 20;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*Camo Tank Top*/, 16);
			num2 = 24;
			num3 = 13;
			num = 25;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*Indigo Tank Top*/, 16);
			num2 = 24;
			num3 = 14;
			num = 20;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*Liberty Cocks Tank Top*/, 16);
			num2 = 24;
			num3 = 15;
			num = 28;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Blue Two-Tone Shirt*/, 16);
			num2 = 25;
			num3 = 0;
			num = 35;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Circles Shirt*/, 16);
			num2 = 25;
			num3 = 1;
			num = 40;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Gray Two-Tone Shirt*/, 16);
			num2 = 25;
			num3 = 2;
			num = 45;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Mustard Shirt*/, 16);
			num2 = 25;
			num3 = 3;
			num = 45;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Blue Checkered Shirt*/, 16);
			num2 = 25;
			num3 = 4;
			num = 49;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Floral Shirt*/, 16);
			num2 = 25;
			num3 = 5;
			num = 820;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Beige Shirt*/, 16);
			num2 = 25;
			num3 = 6;
			num = 790;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Lavender Shirt*/, 16);
			num2 = 25;
			num3 = 7;
			num = 820;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Black Shirt*/, 16);
			num2 = 25;
			num3 = 8;
			num = 929;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Monogrammed Shirt*/, 16);
			num2 = 25;
			num3 = 9;
			num = 40;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Paisley Shirt*/, 16);
			num2 = 25;
			num3 = 10;
			num = 850;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camel Shirt*/, 16);
			num2 = 25;
			num3 = 11;
			num = 790;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Beige Tight Jacket*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Blue Tight Jacket*/, 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Brown Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Burgundy Tight Jacket*/, 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Murky Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Mint Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Green Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Blue-Gray Tight Jacket*/, 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Caramel Tight Jacket*/, 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Mocha Tight Jacket*/, 16);
			num2 = 26;
			num3 = 9;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Gray Jacket*/, 16);
			num2 = 27;
			num3 = 0;
			num = 2200;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Oatmeal Jacket*/, 16);
			num2 = 27;
			num3 = 1;
			num = 2500;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Charcoal Jacket*/, 16);
			num2 = 27;
			num3 = 2;
			num = 2500;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Off-White Jacket*/, 16);
			num2 = 27;
			num3 = 3;
			num = 2200;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Cream Jacket*/, 16);
			num2 = 27;
			num3 = 4;
			num = 2500;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Black Jacket*/, 16);
			num2 = 27;
			num3 = 5;
			num = 2500;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Ash Jacket*/, 16);
			num2 = 27;
			num3 = 6;
			num = 2200;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Dark Gray Sweater*/, 16);
			num2 = 28;
			num3 = 0;
			num = 1100;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Pale Gray Sweater*/, 16);
			num2 = 28;
			num3 = 1;
			num = 1200;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Taupe Sweater*/, 16);
			num2 = 28;
			num3 = 2;
			num = 1220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Pale Blue Sweater*/, 16);
			num2 = 28;
			num3 = 3;
			num = 1250;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Tangerine Sweater*/, 16);
			num2 = 28;
			num3 = 4;
			num = 1300;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Quarry Brown Sweater*/, 16);
			num2 = 28;
			num3 = 5;
			num = 1360;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Dark Chevrons Sweater*/, 16);
			num2 = 28;
			num3 = 6;
			num = 35;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Zingy Chevrons Sweater*/, 16);
			num2 = 28;
			num3 = 7;
			num = 38;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Rainbow Field Sweater*/, 16);
			num2 = 28;
			num3 = 8;
			num = 40;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Dark Field Sweater*/, 16);
			num2 = 28;
			num3 = 9;
			num = 42;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Animal Strip Sweater*/, 16);
			num2 = 28;
			num3 = 10;
			num = 50;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Bill Brown Sweater*/, 16);
			num2 = 28;
			num3 = 11;
			num = 45;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Mint Argyle Sweater*/, 16);
			num2 = 28;
			num3 = 12;
			num = 45;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Gray Argyle Sweater*/, 16);
			num2 = 28;
			num3 = 13;
			num = 44;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Grape Eighties Sweater*/, 16);
			num2 = 28;
			num3 = 14;
			num = 46;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Geometric Eighties Sweater*/, 16);
			num2 = 28;
			num3 = 15;
			num = 52;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Black Jacket*/, 16);
			num2 = 29;
			num3 = 0;
			num = 3200;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*All Black Jacket*/, 16);
			num2 = 29;
			num3 = 1;
			num = 3200;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*White Jacket*/, 16);
			num2 = 29;
			num3 = 2;
			num = 2550;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Cream Jacket*/, 16);
			num2 = 29;
			num3 = 3;
			num = 2750;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Oatmeal Jacket*/, 16);
			num2 = 29;
			num3 = 4;
			num = 2590;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Blue-Gray Jacket*/, 16);
			num2 = 29;
			num3 = 5;
			num = 2750;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Beige Jacket*/, 16);
			num2 = 29;
			num3 = 6;
			num = 2550;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Off-White Jacket*/, 16);
			num2 = 29;
			num3 = 7;
			num = 2590;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Gray Suit Jacket*/, 16);
			num2 = 29;
			num3 = 8;
			num = 2720;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Ash Suit Jacket*/, 16);
			num2 = 29;
			num3 = 9;
			num = 2750;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Gray Blazer*/, 16);
			num2 = 30;
			num3 = 0;
			num = 3250;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Beige Blazer*/, 16);
			num2 = 30;
			num3 = 1;
			num = 2950;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Black Blazer*/, 16);
			num2 = 30;
			num3 = 2;
			num = 3100;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Brown Blazer*/, 16);
			num2 = 30;
			num3 = 3;
			num = 3150;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Navy Blazer*/, 16);
			num2 = 30;
			num3 = 4;
			num = 3240;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Navy Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 5;
			num = 3350;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blue-Gray Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 6;
			num = 3400;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Brown Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 7;
			num = 3280;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Tuxedo Jacket*/, 16);
			num2 = 31;
			num3 = 0;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_145(int iParam0) // Position - 0x1A124 Hash - 0x7B542CFB ^0x629FD225
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*White T-Shirt*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Yellow T-Shirt*/, 16);
			num2 = 0;
			num3 = 1;
			num = 25;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Dusche Gold T-Shirt*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Charcoal T-Shirt*/, 16);
			num2 = 0;
			num3 = 3;
			num = 15;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Cerveza Barracho T-Shirt*/, 16);
			num2 = 0;
			num3 = 4;
			num = 25;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Liberty City Wrath T-Shirt*/, 16);
			num2 = 0;
			num3 = 5;
			num = 25;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Pump & Run T-Shirt*/, 16);
			num2 = 0;
			num3 = 6;
			num = 22;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Atomic T-Shirt*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*LS Nuclear Power T-Shirt*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Zancudo T-Shirt*/, 16);
			num2 = 0;
			num3 = 9;
			num = 20;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*West Coast Classics T-Shirt*/, 16);
			num2 = 0;
			num3 = 10;
			num = 24;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*BC Talk Radio T-Shirt*/, 16);
			num2 = 0;
			num3 = 11;
			num = 26;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Animal Ark T-Shirt*/, 16);
			num2 = 0;
			num3 = 12;
			num = 28;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Rimmers T-Shirt*/, 16);
			num2 = 0;
			num3 = 13;
			num = 29;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Paperclips T-Shirt*/, 16);
			num2 = 0;
			num3 = 14;
			num = 22;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Pop's Pills T-Shirt*/, 16);
			num2 = 0;
			num3 = 15;
			num = 20;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Los Santos Tank Top*/, 16);
			num2 = 3;
			num3 = 0;
			num = 35;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Del Perro Pier Tank Top*/, 16);
			num2 = 3;
			num3 = 1;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*San Andreas Tank Top*/, 16);
			num2 = 3;
			num3 = 2;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Love Fist Tank Top*/, 16);
			num2 = 3;
			num3 = 3;
			num = 38;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*Space Monkey Tank Top 1*/, 16);
			num2 = 3;
			num3 = 4;
			num = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*Space Monkey Tank Top 2*/, 16);
			num2 = 3;
			num3 = 5;
			num = 40;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*Space Monkey Tank Top 3*/, 16);
			num2 = 3;
			num3 = 6;
			num = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*Space Monkey Tank Top 4*/, 16);
			num2 = 3;
			num3 = 7;
			num = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*Space Monkey Tank Top 5*/, 16);
			num2 = 3;
			num3 = 8;
			num = 40;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*Rearwall Black Down Jacket*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*Crevis Green Down Jacket*/, 16);
			num2 = 4;
			num3 = 1;
			num = 500;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*Rearwall Fluoro Down Jacket*/, 16);
			num2 = 4;
			num3 = 2;
			num = 560;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*Rearwall Coffee Down Jacket*/, 16);
			num2 = 4;
			num3 = 3;
			num = 600;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*Crevis Yellow Down Jacket*/, 16);
			num2 = 4;
			num3 = 4;
			num = 650;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*Eris Yellow Down Jacket*/, 16);
			num2 = 4;
			num3 = 5;
			num = 500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*Crevis Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 6;
			num = 560;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*Rearwall Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 7;
			num = 500;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*Crevis Blue Down Jacket*/, 16);
			num2 = 4;
			num3 = 8;
			num = 650;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*Eris Gray Down Jacket*/, 16);
			num2 = 4;
			num3 = 9;
			num = 540;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*Eris Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 10;
			num = 690;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*Eris Olive Down Jacket*/, 16);
			num2 = 4;
			num3 = 11;
			num = 560;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*Eris Aqua Down Jacket*/, 16);
			num2 = 4;
			num3 = 12;
			num = 590;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*Eris Blue Down Jacket*/, 16);
			num2 = 4;
			num3 = 13;
			num = 690;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*Crevis Gray Down Jacket*/, 16);
			num2 = 4;
			num3 = 14;
			num = 540;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*Eris Tan Down Jacket*/, 16);
			num2 = 4;
			num3 = 15;
			num = 500;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Red Floral Polo Shirt*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Amethyst Polo Shirt*/, 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Turquoise Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 2;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Pink Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 3;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Mustard Polo Shirt*/, 16);
			num2 = 11;
			num3 = 4;
			num = 22;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Orange Polo Shirt*/, 16);
			num2 = 11;
			num3 = 5;
			num = 350;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Topaz Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 6;
			num = 27;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Mint Polo Shirt*/, 16);
			num2 = 11;
			num3 = 7;
			num = 370;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Navy Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 8;
			num = 25;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Green Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 9;
			num = 22;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Turquoise Two-Tone Polo Shirt*/, 16);
			num2 = 11;
			num3 = 10;
			num = 25;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Brown Polo Shirt*/, 16);
			num2 = 11;
			num3 = 11;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Pink Polo Shirt*/, 16);
			num2 = 11;
			num3 = 12;
			num = 22;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Green Polo Shirt*/, 16);
			num2 = 11;
			num3 = 13;
			num = 27;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Aqua Polo Shirt*/, 16);
			num2 = 11;
			num3 = 14;
			num = 25;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Brown Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 15;
			num = 27;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Mint Floral Dress*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Pink Dress*/, 16);
			num2 = 13;
			num3 = 1;
			num = 39;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*White Floral Dress*/, 16);
			num2 = 13;
			num3 = 2;
			num = 42;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Purple Zebra Dress*/, 16);
			num2 = 13;
			num3 = 3;
			num = 49;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Cream Dress*/, 16);
			num2 = 13;
			num3 = 4;
			num = 35;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Space Monkey Dress 1*/, 16);
			num2 = 13;
			num3 = 5;
			num = 50;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Space Monkey Dress 2*/, 16);
			num2 = 13;
			num3 = 6;
			num = 50;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Space Monkey Dress 3*/, 16);
			num2 = 13;
			num3 = 7;
			num = 50;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Black Hoodie*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Silver Hoodie*/, 16);
			num2 = 14;
			num3 = 1;
			num = 88;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 14;
			num3 = 2;
			num = 60;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 14;
			num3 = 3;
			num = 80;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*LSGC Gray Hoodie*/, 16);
			num2 = 14;
			num3 = 4;
			num = 70;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 14;
			num3 = 5;
			num = 80;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Blauser Hoodie*/, 16);
			num2 = 14;
			num3 = 6;
			num = 70;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*LSGC Forest Hoodie*/, 16);
			num2 = 14;
			num3 = 7;
			num = 90;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Penetrators Hoodie*/, 16);
			num2 = 14;
			num3 = 8;
			num = 95;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 14;
			num3 = 9;
			num = 105;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Blue Hoodie*/, 16);
			num2 = 14;
			num3 = 10;
			num = 95;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Green Hoodie*/, 16);
			num2 = 14;
			num3 = 11;
			num = 110;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*LS Jardineros Hoodie*/, 16);
			num2 = 14;
			num3 = 12;
			num = 98;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Ash 18 Hoodie*/, 16);
			num2 = 14;
			num3 = 13;
			num = 88;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Red Mist XI Hoodie*/, 16);
			num2 = 14;
			num3 = 14;
			num = 98;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Eris Charcoal Hoodie*/, 16);
			num2 = 14;
			num3 = 15;
			num = 110;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Tennis Shirt*/, 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Bare Chest*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Pink Jacket*/, 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Blue Denim Jacket*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Black Denim Jacket*/, 16);
			num2 = 18;
			num3 = 1;
			num = 520;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Gray Denim Jacket*/, 16);
			num2 = 18;
			num3 = 2;
			num = 490;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Brown Denim Jacket*/, 16);
			num2 = 18;
			num3 = 3;
			num = 450;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Faded Denim Jacket*/, 16);
			num2 = 18;
			num3 = 4;
			num = 420;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Ash Denim Jacket*/, 16);
			num2 = 18;
			num3 = 5;
			num = 420;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Denim Shirt*/, 16);
			num2 = 19;
			num3 = 0;
			num = 85;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Faded Denim Shirt*/, 16);
			num2 = 19;
			num3 = 1;
			num = 85;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Black Shirt*/, 16);
			num2 = 19;
			num3 = 2;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Gray Check Shirt*/, 16);
			num2 = 19;
			num3 = 3;
			num = 68;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Brown Check Shirt*/, 16);
			num2 = 19;
			num3 = 4;
			num = 68;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Red Check Shirt*/, 16);
			num2 = 19;
			num3 = 5;
			num = 78;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Brown Shirt*/, 16);
			num2 = 19;
			num3 = 6;
			num = 85;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Khaki Shirt*/, 16);
			num2 = 19;
			num3 = 7;
			num = 68;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Red Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 8;
			num = 75;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Brown Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 9;
			num = 75;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Green Check Shirt*/, 16);
			num2 = 19;
			num3 = 10;
			num = 78;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Maroon Check Shirt*/, 16);
			num2 = 19;
			num3 = 11;
			num = 75;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Gray Shirt*/, 16);
			num2 = 19;
			num3 = 12;
			num = 75;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Blue Check Shirt*/, 16);
			num2 = 19;
			num3 = 13;
			num = 75;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Blue Two-Tone Shirt*/, 16);
			num2 = 19;
			num3 = 14;
			num = 78;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Navy Shirt*/, 16);
			num2 = 19;
			num3 = 15;
			num = 78;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Burgundy Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 0;
			num = 40;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Purple Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 1;
			num = 32;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Crimson Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 2;
			num = 32;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Tan Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 3;
			num = 32;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Flames Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 4;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Skull Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 5;
			num = 38;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Pale Blue Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 6;
			num = 35;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Scarab Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 7;
			num = 38;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Cream Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 8;
			num = 29;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Cube Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 9;
			num = 32;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Beige Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 10;
			num = 29;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Blue Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 11;
			num = 35;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Yellow Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 12;
			num = 32;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Pink Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 13;
			num = 35;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*White Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 14;
			num = 32;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Black Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 15;
			num = 40;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_146(int iParam0) // Position - 0x1B032 Hash - 0xC2F9B35A ^0x2EF6C881
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Trailer Cut*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Frozen*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Clean Razor*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Side Shed*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Grown Out*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Shaved 2*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Swept Back*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 9, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_147(int iParam0) // Position - 0x1B15F Hash - 0x6F21AA63 ^0xD90A99DF
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_79031[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_131(num6, iParam0, 7, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_148(int iParam0, int iParam1) // Position - 0x1B25D Hash - 0x2A09B983 ^0x2A09B983
{
	switch (iParam0)
	{
		case 0:
			func_166(iParam1);
			break;
	
		case 2:
			func_165(iParam1);
			break;
	
		case 3:
			func_161(iParam1);
			break;
	
		case 4:
			func_160(iParam1);
			break;
	
		case 6:
			func_159(iParam1);
			break;
	
		case 5:
			func_158(iParam1);
			break;
	
		case 8:
			func_157(iParam1);
			break;
	
		case 9:
			func_156(iParam1);
			break;
	
		case 10:
			func_155(iParam1);
			break;
	
		case 1:
			func_154(iParam1);
			break;
	
		case 7:
			func_153(iParam1);
			break;
	
		case 11:
			func_152(iParam1);
			break;
	
		case 12:
			func_151(iParam1);
			break;
	
		case 13:
			func_150(iParam1);
			break;
	
		case 14:
			func_149(iParam1);
			break;
	}

	return;
}

void func_149(int iParam0) // Position - 0x1B34D Hash - 0xF89A8F55 ^0x6DFA4D53
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch Diamond Studs*/, 16);
			num2 = 1;
			num3 = 0;
			num = 4590;
			num4 = 2;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch Obsidian Studs*/, 16);
			num2 = 1;
			num3 = 1;
			num = 4100;
			num4 = 2;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch Sapphire Studs*/, 16);
			num2 = 1;
			num3 = 2;
			num = 3850;
			num4 = 2;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch Opal Studs*/, 16);
			num2 = 1;
			num3 = 3;
			num = 1850;
			num4 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch Platinum Studs*/, 16);
			num2 = 1;
			num3 = 4;
			num = 5250;
			num4 = 2;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch Garnet Studs*/, 16);
			num2 = 1;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch Jasper Studs*/, 16);
			num2 = 1;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch Aquamarine Studs*/, 16);
			num2 = 1;
			num3 = 7;
			num = 5050;
			num4 = 2;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov Diamond Studs*/, 16);
			num2 = 2;
			num3 = 0;
			num = 2500;
			num4 = 2;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov Emerald Studs*/, 16);
			num2 = 2;
			num3 = 1;
			num = 1950;
			num4 = 2;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov Quartz Studs*/, 16);
			num2 = 2;
			num3 = 2;
			num = 3900;
			num4 = 2;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov Obsidian Studs*/, 16);
			num2 = 2;
			num3 = 3;
			num = 3550;
			num4 = 2;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov Platinum Studs*/, 16);
			num2 = 2;
			num3 = 4;
			num = 4500;
			num4 = 2;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov Agate Studs*/, 16);
			num2 = 2;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov Jade Studs*/, 16);
			num2 = 2;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov Onyx Studs*/, 16);
			num2 = 2;
			num3 = 7;
			num = 2950;
			num4 = 2;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Orange Tint Contour Shades*/, 16);
			num2 = 1;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Slate Contour Shades*/, 16);
			num2 = 1;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Gray Contour Shades*/, 16);
			num2 = 1;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Brown Contour Shades*/, 16);
			num2 = 1;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Burgundy Contour Shades*/, 16);
			num2 = 1;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Chocolate Contour Shades*/, 16);
			num2 = 1;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Black Contour Shades*/, 16);
			num2 = 1;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Purple Tint Contour Shades*/, 16);
			num2 = 1;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Blue-Gray Contour Shades*/, 16);
			num2 = 1;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*White Contour Shades*/, 16);
			num2 = 1;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Swimming Goggles*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Racer Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank Slate Shades*/, 16);
			num2 = 4;
			num3 = 0;
			num = 120;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker Ash Shades*/, 16);
			num2 = 4;
			num3 = 1;
			num = 128;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker Chocolate Shades*/, 16);
			num2 = 4;
			num3 = 2;
			num = 130;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank Black Shades*/, 16);
			num2 = 4;
			num3 = 3;
			num = 140;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker Black Shades*/, 16);
			num2 = 4;
			num3 = 4;
			num = 145;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank Green Tint Shades*/, 16);
			num2 = 4;
			num3 = 5;
			num = 135;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank Blue Tint Shades*/, 16);
			num2 = 4;
			num3 = 6;
			num = 138;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Black Aviator Shades*/, 16);
			num2 = 5;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*White Aviator Shades*/, 16);
			num2 = 5;
			num3 = 1;
			num = 112;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Brown Aviator Shades*/, 16);
			num2 = 5;
			num3 = 2;
			num = 115;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Gray Aviator Shades*/, 16);
			num2 = 5;
			num3 = 3;
			num = 118;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Two-Tone Aviator Shades*/, 16);
			num2 = 5;
			num3 = 4;
			num = 120;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Bone Aviator Shades*/, 16);
			num2 = 5;
			num3 = 5;
			num = 125;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Red Aviator Shades*/, 16);
			num2 = 5;
			num3 = 6;
			num = 128;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Silver Aviator Shades*/, 16);
			num2 = 5;
			num3 = 7;
			num = 138;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Charcoal Aviator Shades*/, 16);
			num2 = 5;
			num3 = 8;
			num = 140;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Gold Aviator Shades*/, 16);
			num2 = 5;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*Tinted Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*Silver Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 1;
			num = 55;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*Sepia Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 2;
			num = 58;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*Blue Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 3;
			num = 58;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*Yellow Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*Gray Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 5;
			num = 62;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*Black Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*Slate Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*Smoke Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 8;
			num = 68;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*Gold Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 9;
			num = 72;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban Black Shades*/, 16);
			num2 = 7;
			num3 = 0;
			num = 145;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban Teal Shades*/, 16);
			num2 = 7;
			num3 = 1;
			num = 149;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban Tortoiseshell Shades*/, 16);
			num2 = 7;
			num3 = 2;
			num = 139;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban Orange Shades*/, 16);
			num2 = 7;
			num3 = 3;
			num = 149;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque White Shades*/, 16);
			num2 = 7;
			num3 = 4;
			num = 135;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque Camo Shades*/, 16);
			num2 = 7;
			num3 = 5;
			num = 138;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque Yellow Shades*/, 16);
			num2 = 7;
			num3 = 6;
			num = 140;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque Burgundy Shades*/, 16);
			num2 = 7;
			num3 = 7;
			num = 145;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque Funky Shades*/, 16);
			num2 = 7;
			num3 = 8;
			num = 159;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque Squared Shades*/, 16);
			num2 = 7;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*Gold T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 0;
			num = 198;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*Silver T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 1;
			num = 210;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*Two-Tone T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 2;
			num = 185;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*Green T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 3;
			num = 220;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*Brown T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 4;
			num = 190;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*Peach T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 5;
			num = 200;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*Gray T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 6;
			num = 208;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*Orange T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 7;
			num = 210;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Yellow Mono Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Gray Mono Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 185;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Hornet Mono Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 190;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Copper Mono Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 178;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Blue Mono Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Sepia Mono Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 168;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*White Mono Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 170;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Orange Tint Mono Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 175;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Blue Tint Mono Shades*/, 16);
			num2 = 9;
			num3 = 8;
			num = 170;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Smoke Mono Shades*/, 16);
			num2 = 9;
			num3 = 9;
			num = 178;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Gold Triptych Shades*/, 16);
			num2 = 10;
			num3 = 0;
			num = 140;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Gray Triptych Shades*/, 16);
			num2 = 10;
			num3 = 1;
			num = 145;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Silver Triptych Shades*/, 16);
			num2 = 10;
			num3 = 2;
			num = 150;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Two-Tone Triptych Shades*/, 16);
			num2 = 10;
			num3 = 3;
			num = 165;
			num4 = 10;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Copper Triptych Shades*/, 16);
			num2 = 10;
			num3 = 4;
			num = 168;
			num4 = 10;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Black Triptych Shades*/, 16);
			num2 = 10;
			num3 = 5;
			num = 178;
			num4 = 10;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*White Triptych Shades*/, 16);
			num2 = 10;
			num3 = 6;
			num = 160;
			num4 = 10;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Hockey Mask*/, 16);
			num2 = 0;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gray Flat Cap*/, 16);
			num2 = 3;
			num3 = 0;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 8;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 8;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 9;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 9;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 10;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 10;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 11;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 12;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 12;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 13;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 13;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 14;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
			num2 = 16;
			num3 = 0;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
			num2 = 16;
			num3 = 1;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
			num2 = 16;
			num3 = 2;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
			num2 = 16;
			num3 = 3;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
			num2 = 16;
			num3 = 4;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
			num2 = 16;
			num3 = 5;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
			num2 = 16;
			num3 = 6;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
			num2 = 16;
			num3 = 7;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
			num2 = 16;
			num3 = 8;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
			num2 = 16;
			num3 = 9;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
			num2 = 16;
			num3 = 10;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
			num2 = 16;
			num3 = 11;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
			num2 = 16;
			num3 = 12;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
			num2 = 16;
			num3 = 13;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
			num2 = 16;
			num3 = 14;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
			num2 = 16;
			num3 = 15;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 1;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 2;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 3;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 4;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 5;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
			num2 = 19;
			num3 = 0;
			num = 30;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
			num2 = 19;
			num3 = 1;
			num = 30;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
			num2 = 19;
			num3 = 2;
			num = 32;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
			num2 = 19;
			num3 = 3;
			num = 35;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
			num2 = 19;
			num3 = 4;
			num = 38;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
			num2 = 19;
			num3 = 5;
			num = 42;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
			num2 = 19;
			num3 = 6;
			num = 42;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
			num2 = 19;
			num3 = 7;
			num = 40;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
			num2 = 19;
			num3 = 8;
			num = 45;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
			num2 = 19;
			num3 = 9;
			num = 48;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
			num2 = 19;
			num3 = 10;
			num = 25;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
			num2 = 19;
			num3 = 11;
			num = 25;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
			num2 = 19;
			num3 = 12;
			num = 28;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
			num2 = 19;
			num3 = 13;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
			num2 = 19;
			num3 = 14;
			num = 30;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
			num2 = 19;
			num3 = 15;
			num = 35;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 175, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_150(int iParam0) // Position - 0x1C83F Hash - 0xB52E315 ^0x400DED15
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 9, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_151(int iParam0) // Position - 0x1C990 Hash - 0x4B9467AD ^0x1BD02CEB
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Blue Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*White Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Fireman*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminator*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Black Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Skydiving*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Ash Hoodie, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Yellow Check Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Gray Plaid Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Black Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Track Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Off-White Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Gray Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Ash Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Charcoal Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Tan Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4650;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Slate 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Ash 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5000;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Stone 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Oatmeal 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Navy Plaid Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Off-White 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Red Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Gray Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Navy 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Russet Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Green 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Beige 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Underwear*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*LS Black Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Gray Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Moto X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*U.R. Jersey, Fatigues*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*U.R. OG Tee, Bike Leathers*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Uptown Riders Longsleeve, Camos*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*U.R. Jacket, Baggies*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 47, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_152(int iParam0) // Position - 0x1CE9B Hash - 0x7A2850A5 ^0x1C2DFDCF
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
			num2 = 3;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
			num2 = 3;
			num3 = 7;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
			num2 = 3;
			num3 = 8;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
			num2 = 3;
			num3 = 9;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
			num2 = 3;
			num3 = 10;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
			num2 = 3;
			num3 = 11;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
			num2 = 3;
			num3 = 12;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
			num2 = 3;
			num3 = 13;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
			num2 = 3;
			num3 = 14;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
			num2 = 3;
			num3 = 15;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
			num2 = 4;
			num3 = 7;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
			num2 = 4;
			num3 = 8;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
			num2 = 4;
			num3 = 9;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
			num2 = 4;
			num3 = 10;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
			num2 = 4;
			num3 = 11;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
			num2 = 4;
			num3 = 12;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
			num2 = 4;
			num3 = 13;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
			num2 = 4;
			num3 = 14;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
			num2 = 4;
			num3 = 15;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*White Shirt*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*White Shirt*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Two-Tone Shirt*/, 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Charcoal Hoodie*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*White T-Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Blue Shirt*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*White T-Shirt*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Crevis T-Shirt*/, 16);
			num2 = 10;
			num3 = 1;
			num = 48;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Yeti T-Shirt*/, 16);
			num2 = 10;
			num3 = 2;
			num = 35;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Sweatbox T-Shirt*/, 16);
			num2 = 10;
			num3 = 3;
			num = 32;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Trey Baker T-Shirt*/, 16);
			num2 = 10;
			num3 = 4;
			num = 35;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Black T-Shirt*/, 16);
			num2 = 10;
			num3 = 5;
			num = 48;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Fruntalot T-Shirt*/, 16);
			num2 = 10;
			num3 = 6;
			num = 52;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Kingz of Los Santos T-Shirt*/, 16);
			num2 = 10;
			num3 = 7;
			num = 38;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Ten Off The Chain T-Shirt*/, 16);
			num2 = 10;
			num3 = 8;
			num = 42;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Gray T-Shirt*/, 16);
			num2 = 10;
			num3 = 9;
			num = 38;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Green T-Shirt*/, 16);
			num2 = 10;
			num3 = 10;
			num = 35;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camo T-Shirt*/, 16);
			num2 = 10;
			num3 = 11;
			num = 48;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Yeti Rainbow T-Shirt*/, 16);
			num2 = 10;
			num3 = 12;
			num = 42;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Feud Banded T-Shirt*/, 16);
			num2 = 10;
			num3 = 13;
			num = 45;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Yogarishima T-Shirt*/, 16);
			num2 = 10;
			num3 = 14;
			num = 45;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Feud Gray T-Shirt*/, 16);
			num2 = 10;
			num3 = 15;
			num = 49;
			break;
	
		default:
			func_131(num6, iParam0, 63, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_153(int iParam0) // Position - 0x1D509 Hash - 0x8F4A4D12 ^0xBBC45546
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 1, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_154(int iParam0) // Position - 0x1D57D Hash - 0xCB73BC76 ^0xA0EF1E97
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Full Van Dyke*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Methodical*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Full Spartan*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Stubble*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 5, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_155(int iParam0) // Position - 0x1D64D Hash - 0x27512C31 ^0x5F3FFB3A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 6;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 7;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 8;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 9;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 10;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 11;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 12;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 13;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 14;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 15;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 53, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_156(int iParam0) // Position - 0x1DB7D Hash - 0xDD9ED658 ^0x2E7E886B
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 0;
			num = 125;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 1;
			num = 150;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 2;
			num = 175;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 3;
			num = 85;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 4;
			num = 150;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 5;
			num = 175;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 12, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_157(int iParam0) // Position - 0x1DD14 Hash - 0xE27765D3 ^0x47F4F0A9
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Bandana*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Silver Tie*/, 16);
			num2 = 11;
			num3 = 0;
			num = 195;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Gold Tie*/, 16);
			num2 = 11;
			num3 = 1;
			num = 195;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Cream Tie*/, 16);
			num2 = 11;
			num3 = 2;
			num = 195;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Blue Diamond Tie*/, 16);
			num2 = 11;
			num3 = 3;
			num = 250;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Blue Spotted Tie*/, 16);
			num2 = 11;
			num3 = 4;
			num = 250;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*White Spotted Tie*/, 16);
			num2 = 11;
			num3 = 5;
			num = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Dark Gray Tie*/, 16);
			num2 = 11;
			num3 = 6;
			num = 195;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Gray Striped Tie*/, 16);
			num2 = 11;
			num3 = 7;
			num = 250;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Silver Striped Tie*/, 16);
			num2 = 11;
			num3 = 8;
			num = 250;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Red Striped Tie*/, 16);
			num2 = 11;
			num3 = 9;
			num = 250;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Bronze Striped Tie*/, 16);
			num2 = 11;
			num3 = 10;
			num = 250;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*White Diamond Tie*/, 16);
			num2 = 11;
			num3 = 11;
			num = 195;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Black Diamond Tie*/, 16);
			num2 = 11;
			num3 = 12;
			num = 250;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 16;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 16;
			num3 = 2;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 16;
			num3 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 16;
			num3 = 4;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 16;
			num3 = 5;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 16;
			num3 = 6;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 16;
			num3 = 7;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 16;
			num3 = 8;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 16;
			num3 = 9;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 16;
			num3 = 10;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 16;
			num3 = 11;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 16;
			num3 = 12;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 16;
			num3 = 13;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 16;
			num3 = 14;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 16;
			num3 = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 17;
			num3 = 3;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 17;
			num3 = 4;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 17;
			num3 = 5;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 17;
			num3 = 6;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 17;
			num3 = 7;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 17;
			num3 = 8;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 17;
			num3 = 9;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 17;
			num3 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 17;
			num3 = 11;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 17;
			num3 = 12;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 17;
			num3 = 13;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 17;
			num3 = 14;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 17;
			num3 = 15;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 77, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_158(int iParam0) // Position - 0x1E512 Hash - 0xA3AE1C2 ^0x43EB3993
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 7, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_159(int iParam0) // Position - 0x1E622 Hash - 0xE2721790 ^0x66E25762
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*White Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*All White Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 1;
			num = 80;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Charcoal Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 2;
			num = 80;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Yellow Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 3;
			num = 89;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Gray Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 4;
			num = 45;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Black Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 5;
			num = 35;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Gray Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 6;
			num = 89;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Lemon Accent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 7;
			num = 95;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 8;
			num = 115;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Cyan Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 9;
			num = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Cyan Accent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 10;
			num = 145;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Fluorescent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 11;
			num = 145;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Work Boots*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Desert Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Coffee Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 1;
			num = 180;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Chocolate Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 2;
			num = 80;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Gray Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 3;
			num = 200;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Slate Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 4;
			num = 220;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Copper Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 5;
			num = 235;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Gray Snake Shoes*/, 16);
			num2 = 8;
			num3 = 0;
			num = 870;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Black Shoes*/, 16);
			num2 = 8;
			num3 = 1;
			num = 870;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*White Snake Shoes*/, 16);
			num2 = 8;
			num3 = 2;
			num = 870;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Gray Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 3;
			num = 1275;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Alligator Shoes*/, 16);
			num2 = 8;
			num3 = 4;
			num = 1275;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Brown Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 5;
			num = 1275;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Rattlesnake Shoes*/, 16);
			num2 = 8;
			num3 = 6;
			num = 1275;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Gray Python Shoes*/, 16);
			num2 = 8;
			num3 = 7;
			num = 1275;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Two-Tone Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 8;
			num = 1275;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Black Brogues*/, 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Two-Tone Sneakers*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Orange Sneakers*/, 16);
			num2 = 11;
			num3 = 1;
			num = 50;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Black Sneakers*/, 16);
			num2 = 11;
			num3 = 2;
			num = 50;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Desert Green Sneakers*/, 16);
			num2 = 11;
			num3 = 3;
			num = 50;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Mint Sneakers*/, 16);
			num2 = 11;
			num3 = 4;
			num = 50;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Freeway Sneakers*/, 16);
			num2 = 11;
			num3 = 5;
			num = 50;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Animal Fashion Sneakers*/, 16);
			num2 = 11;
			num3 = 6;
			num = 50;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Feud Classic Sneakers*/, 16);
			num2 = 11;
			num3 = 7;
			num = 50;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Cacao Blend Sneakers*/, 16);
			num2 = 11;
			num3 = 8;
			num = 50;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Magnetics Sneakers*/, 16);
			num2 = 11;
			num3 = 9;
			num = 50;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Blue Sneakers*/, 16);
			num2 = 11;
			num3 = 10;
			num = 50;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*White Sneakers*/, 16);
			num2 = 11;
			num3 = 11;
			num = 50;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Winter Camo Sneakers*/, 16);
			num2 = 11;
			num3 = 12;
			num = 50;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Forest Camo Sneakers*/, 16);
			num2 = 11;
			num3 = 13;
			num = 50;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Soft Seas Sneakers*/, 16);
			num2 = 11;
			num3 = 14;
			num = 50;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Latte Sneakers*/, 16);
			num2 = 11;
			num3 = 15;
			num = 50;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*White Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Green Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 1;
			num = 25;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Two-Tone Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 2;
			num = 20;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Black Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 3;
			num = 24;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Blue Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 4;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Orange Accent Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 5;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Red Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 6;
			num = 29;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Orange Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 7;
			num = 27;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Mocha Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 8;
			num = 25;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Black Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 9;
			num = 30;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Fresh Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 10;
			num = 28;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Green Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 11;
			num = 30;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Black Oxfords*/, 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Gray Skate Shoes*/, 16);
			num2 = 14;
			num3 = 0;
			num = 155;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*White Skate Shoes*/, 16);
			num2 = 14;
			num3 = 1;
			num = 155;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Chestnut Skate Shoes*/, 16);
			num2 = 14;
			num3 = 2;
			num = 165;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Jade Accent Skate Shoes*/, 16);
			num2 = 14;
			num3 = 3;
			num = 170;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Two-Tone Skate Shoes*/, 16);
			num2 = 14;
			num3 = 4;
			num = 160;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Red Piped Skate Shoes*/, 16);
			num2 = 14;
			num3 = 5;
			num = 165;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Red Skate Shoes*/, 16);
			num2 = 14;
			num3 = 6;
			num = 170;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Beige Skate Shoes*/, 16);
			num2 = 14;
			num3 = 7;
			num = 160;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Black Leather Loafers*/, 16);
			num2 = 16;
			num3 = 0;
			num = 720;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Gray Leather Loafers*/, 16);
			num2 = 16;
			num3 = 1;
			num = 680;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Cream Leather Loafers*/, 16);
			num2 = 16;
			num3 = 2;
			num = 650;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Brown Leather Loafers*/, 16);
			num2 = 16;
			num3 = 3;
			num = 670;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*White Leather Loafers*/, 16);
			num2 = 16;
			num3 = 4;
			num = 700;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Russet Leather Loafers*/, 16);
			num2 = 16;
			num3 = 5;
			num = 680;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*White Snakeskin Loafers*/, 16);
			num2 = 16;
			num3 = 6;
			num = 720;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Rattlesnake Loafers*/, 16);
			num2 = 16;
			num3 = 7;
			num = 740;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 16;
			num3 = 8;
			num = 760;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 16;
			num3 = 9;
			num = 780;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Pale Reptile Loafers*/, 16);
			num2 = 16;
			num3 = 10;
			num = 750;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Tan Alligator Loafers*/, 16);
			num2 = 16;
			num3 = 11;
			num = 700;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*All Black Oxfords*/, 16);
			num2 = 17;
			num3 = 0;
			num = 790;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Chocolate Oxfords*/, 16);
			num2 = 17;
			num3 = 1;
			num = 750;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Chestnut Oxfords*/, 16);
			num2 = 17;
			num3 = 2;
			num = 860;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Tan Oxfords*/, 16);
			num2 = 17;
			num3 = 3;
			num = 750;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*White Oxfords*/, 16);
			num2 = 17;
			num3 = 4;
			num = 790;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Ash Oxfords*/, 16);
			num2 = 17;
			num3 = 5;
			num = 840;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 17;
			num3 = 6;
			num = 820;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Beige Oxfords*/, 16);
			num2 = 17;
			num3 = 7;
			num = 800;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Topaz Oxfords*/, 16);
			num2 = 17;
			num3 = 8;
			num = 850;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Black Oxfords*/, 16);
			num2 = 17;
			num3 = 9;
			num = 870;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Lime Oxfords*/, 16);
			num2 = 17;
			num3 = 10;
			num = 720;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Hawthorn Oxfords*/, 16);
			num2 = 17;
			num3 = 11;
			num = 740;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Coffee Oxfords*/, 16);
			num2 = 17;
			num3 = 12;
			num = 800;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Gray Oxfords*/, 16);
			num2 = 17;
			num3 = 13;
			num = 750;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Cream Oxfords*/, 16);
			num2 = 17;
			num3 = 14;
			num = 770;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Navy Oxfords*/, 16);
			num2 = 17;
			num3 = 15;
			num = 860;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Black Slip-Ons*/, 16);
			num2 = 18;
			num3 = 0;
			num = 850;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Red Slip-Ons*/, 16);
			num2 = 18;
			num3 = 1;
			num = 800;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Brown Slip-Ons*/, 16);
			num2 = 18;
			num3 = 2;
			num = 780;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 18;
			num3 = 3;
			num = 890;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Green Slip-Ons*/, 16);
			num2 = 18;
			num3 = 4;
			num = 820;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Copper Slip-Ons*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 18;
			num3 = 6;
			num = 870;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Navy Slip-Ons*/, 16);
			num2 = 18;
			num3 = 7;
			num = 930;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Blue Slip-Ons*/, 16);
			num2 = 18;
			num3 = 8;
			num = 880;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Beige Slip-Ons*/, 16);
			num2 = 18;
			num3 = 9;
			num = 900;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*White Slip-Ons*/, 16);
			num2 = 18;
			num3 = 10;
			num = 920;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Tan Slip-Ons*/, 16);
			num2 = 18;
			num3 = 11;
			num = 970;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 18;
			num3 = 12;
			num = 990;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 18;
			num3 = 13;
			num = 960;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 18;
			num3 = 14;
			num = 980;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Gray Slip-Ons*/, 16);
			num2 = 18;
			num3 = 15;
			num = 950;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brown Wingtips*/, 16);
			num2 = 19;
			num3 = 0;
			num = 110;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Navy Wingtips*/, 16);
			num2 = 19;
			num3 = 1;
			num = 115;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Coffee Wingtips*/, 16);
			num2 = 19;
			num3 = 2;
			num = 120;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Burgundy Wingtips*/, 16);
			num2 = 19;
			num3 = 3;
			num = 110;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Blue Wingtips*/, 16);
			num2 = 19;
			num3 = 4;
			num = 125;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 19;
			num3 = 5;
			num = 128;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Black Wingtips*/, 16);
			num2 = 19;
			num3 = 6;
			num = 135;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Tan Wingtips*/, 16);
			num2 = 19;
			num3 = 7;
			num = 130;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Purple Wingtips*/, 16);
			num2 = 19;
			num3 = 8;
			num = 145;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brown Wingtips*/, 16);
			num2 = 19;
			num3 = 9;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Chocolate Wingtips*/, 16);
			num2 = 19;
			num3 = 10;
			num = 120;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Green Wingtips*/, 16);
			num2 = 19;
			num3 = 11;
			num = 150;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Ash Wingtips*/, 16);
			num2 = 19;
			num3 = 12;
			num = 125;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Olive Wingtips*/, 16);
			num2 = 19;
			num3 = 13;
			num = 120;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Two-Tone Wingtips*/, 16);
			num2 = 19;
			num3 = 14;
			num = 130;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Yellow Wingtips*/, 16);
			num2 = 19;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_131(num6, iParam0, 134, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_160(int iParam0) // Position - 0x1F54D Hash - 0xBC068BE9 ^0x1256E5B4
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Cream Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Sand Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 1;
			num = 32;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Navy Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 2;
			num = 38;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Olive Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 3;
			num = 44;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Black Tuxedo Pants*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Gray Golf Pants*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Cream Golf Pants*/, 16);
			num2 = 6;
			num3 = 1;
			num = 690;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Tan Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 2;
			num = 720;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Tartan Golf Pants*/, 16);
			num2 = 6;
			num3 = 3;
			num = 850;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Charcoal Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 4;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Dark Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 5;
			num = 740;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Brown Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 6;
			num = 750;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Slate Golf Pants*/, 16);
			num2 = 6;
			num3 = 7;
			num = 790;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Slate Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Blue Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 1;
			num = 145;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Gray Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 2;
			num = 140;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Pale Blue Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 3;
			num = 148;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Black Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Blue-Green Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 5;
			num = 154;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Faded Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 6;
			num = 158;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Beige Chinos*/, 16);
			num2 = 11;
			num3 = 0;
			num = 820;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Olive Chinos*/, 16);
			num2 = 11;
			num3 = 1;
			num = 820;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Black Chinos*/, 16);
			num2 = 11;
			num3 = 2;
			num = 850;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Off-White Chinos*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Gray Chinos*/, 16);
			num2 = 11;
			num3 = 4;
			num = 920;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Navy Chinos*/, 16);
			num2 = 11;
			num3 = 5;
			num = 950;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Silver Sweatpants*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Gray Sweatpants*/, 16);
			num2 = 13;
			num3 = 1;
			num = 45;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Topaz Sweatpants*/, 16);
			num2 = 13;
			num3 = 2;
			num = 48;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Ash Sweatpants*/, 16);
			num2 = 13;
			num3 = 3;
			num = 45;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Slate Sweatpants*/, 16);
			num2 = 13;
			num3 = 4;
			num = 48;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Olive Sweatpants*/, 16);
			num2 = 13;
			num3 = 5;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Jade Sweatpants*/, 16);
			num2 = 13;
			num3 = 6;
			num = 55;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Dark Green Sweatpants*/, 16);
			num2 = 13;
			num3 = 7;
			num = 58;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Teal Sweatpants*/, 16);
			num2 = 13;
			num3 = 8;
			num = 60;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Brown Sweatpants*/, 16);
			num2 = 13;
			num3 = 9;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Kingz Green Sweatpants*/, 16);
			num2 = 13;
			num3 = 10;
			num = 62;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Gray Stripe Sweatpants*/, 16);
			num2 = 13;
			num3 = 11;
			num = 65;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*White Shorts*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Gray Plaid Pants*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Silver Plaid Pants*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Charcoal Plaid Pants*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Tan Plaid Pants*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Charcoal Pants*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Ash Pants*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Beige Pants*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Cream Pants*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Navy Plaid Pants*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Off-White Pants*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*White Pants*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Subtle Blue Pants*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Navy Pants*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Rust Pants*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Green Pants*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Tan Pants*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Combat Pants*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*White Boxers*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Gray Boxers*/, 16);
			num2 = 18;
			num3 = 1;
			num = 160;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Black Boxers*/, 16);
			num2 = 18;
			num3 = 2;
			num = 180;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Kings Ash Boxers*/, 16);
			num2 = 18;
			num3 = 3;
			num = 180;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Feud Green Boxers*/, 16);
			num2 = 18;
			num3 = 4;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Feud White Boxers*/, 16);
			num2 = 18;
			num3 = 5;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Black Tuxedo Pants*/, 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Indigo Jeans*/, 16);
			num2 = 20;
			num3 = 0;
			num = 118;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Black Jeans*/, 16);
			num2 = 20;
			num3 = 1;
			num = 120;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Gray Faded Jeans*/, 16);
			num2 = 20;
			num3 = 2;
			num = 128;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Navy Jeans*/, 16);
			num2 = 20;
			num3 = 3;
			num = 128;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Brown Jeans*/, 16);
			num2 = 20;
			num3 = 4;
			num = 130;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Blue Jeans*/, 16);
			num2 = 20;
			num3 = 5;
			num = 145;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Olive Jeans*/, 16);
			num2 = 20;
			num3 = 6;
			num = 138;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Black Faded Jeans*/, 16);
			num2 = 20;
			num3 = 7;
			num = 132;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Coffee Jeans*/, 16);
			num2 = 20;
			num3 = 8;
			num = 148;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Indigo Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 0;
			num = 118;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Black Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 1;
			num = 118;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Aqua Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 2;
			num = 118;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Brown Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 3;
			num = 129;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Blue Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 4;
			num = 135;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Red Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 5;
			num = 135;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Gray Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 6;
			num = 118;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Green Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 7;
			num = 118;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Coffee Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 8;
			num = 118;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*LS Panic Charcoal Shorts*/, 16);
			num2 = 22;
			num3 = 0;
			num = 55;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*LS Panic Yellow Shorts*/, 16);
			num2 = 22;
			num3 = 1;
			num = 55;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Prolaps White Shorts*/, 16);
			num2 = 22;
			num3 = 2;
			num = 59;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Prolaps Blue Shorts*/, 16);
			num2 = 22;
			num3 = 3;
			num = 59;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*LC Salamanders Red Shorts*/, 16);
			num2 = 22;
			num3 = 4;
			num = 65;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*LC Salamanders Green Shorts*/, 16);
			num2 = 22;
			num3 = 5;
			num = 65;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*LS Shrimps Gray Shorts*/, 16);
			num2 = 22;
			num3 = 6;
			num = 69;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*LS Shrimps White Shorts*/, 16);
			num2 = 22;
			num3 = 7;
			num = 69;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*LOB Gray Shorts*/, 16);
			num2 = 22;
			num3 = 8;
			num = 75;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*LOB Blue Shorts*/, 16);
			num2 = 22;
			num3 = 9;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*LOB Green Shorts*/, 16);
			num2 = 22;
			num3 = 10;
			num = 65;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*LOB Tan Shorts*/, 16);
			num2 = 22;
			num3 = 11;
			num = 65;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*LOB Orange Shorts*/, 16);
			num2 = 22;
			num3 = 12;
			num = 65;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*LOB Pale Blue Shorts*/, 16);
			num2 = 22;
			num3 = 13;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Broker White Shorts*/, 16);
			num2 = 23;
			num3 = 0;
			num = 38;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Broker Black Shorts*/, 16);
			num2 = 23;
			num3 = 1;
			num = 38;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Broker Gray Shorts*/, 16);
			num2 = 23;
			num3 = 2;
			num = 28;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Broker Navy Shorts*/, 16);
			num2 = 23;
			num3 = 3;
			num = 34;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Broker Green Shorts*/, 16);
			num2 = 23;
			num3 = 4;
			num = 36;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Broker Brown Shorts*/, 16);
			num2 = 23;
			num3 = 5;
			num = 32;
			break;
	
		default:
			func_131(num6, iParam0, 117, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_161(int iParam0) // Position - 0x2020C Hash - 0x905863CF ^0x4D59FCB8
{
	if (iParam0 < 107)
		func_164(iParam0);
	else if (iParam0 < 227)
		func_163(iParam0);
	else
		func_162(iParam0);

	if (Global_79031[0 /*14*/].f_2 == -1)
		func_131(3, iParam0, 318, -1);

	return;
}

void func_162(int iParam0) // Position - 0x20252 Hash - 0x6B1EB2DB ^0x9A6C784A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 0;
			num5 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 1;
			num5 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 2;
			num5 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 3;
			num5 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
			num2 = 23;
			num3 = 4;
			num5 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
			num2 = 23;
			num3 = 5;
			num5 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
			num2 = 23;
			num3 = 6;
			num5 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
			num2 = 23;
			num3 = 7;
			num5 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
			num2 = 23;
			num3 = 8;
			num5 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
			num2 = 23;
			num3 = 9;
			num5 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
			num2 = 23;
			num3 = 10;
			num5 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
			num2 = 23;
			num3 = 11;
			num5 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
			num2 = 23;
			num3 = 12;
			num5 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
			num2 = 23;
			num3 = 13;
			num5 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
			num2 = 23;
			num3 = 14;
			num5 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
			num2 = 23;
			num3 = 15;
			num5 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Navy Plaid Vest*/, 16);
			num2 = 24;
			num3 = 0;
			num = 2200;
			num5 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Gray Plaid Vest*/, 16);
			num2 = 24;
			num3 = 1;
			num = 2200;
			num5 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Silver Plaid Vest*/, 16);
			num2 = 24;
			num3 = 2;
			num = 2200;
			num5 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Charcoal Vest*/, 16);
			num2 = 24;
			num3 = 3;
			num = 2200;
			num5 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Plum Plaid Vest*/, 16);
			num2 = 24;
			num3 = 4;
			num = 2200;
			num5 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*All Ash Vest*/, 16);
			num2 = 24;
			num3 = 5;
			num = 2200;
			num5 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Silverback Vest*/, 16);
			num2 = 24;
			num3 = 6;
			num = 2200;
			num5 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Gray Subtle Plaid Vest*/, 16);
			num2 = 24;
			num3 = 7;
			num = 2200;
			num5 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Green Plaid Vest*/, 16);
			num2 = 24;
			num3 = 8;
			num = 2200;
			num5 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Ash Plaid Vest*/, 16);
			num2 = 24;
			num3 = 9;
			num = 2200;
			num5 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Stone Plaid Vest*/, 16);
			num2 = 24;
			num3 = 10;
			num = 2200;
			num5 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Charcoal Plaid Vest*/, 16);
			num2 = 24;
			num3 = 11;
			num = 2200;
			num5 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*White Vest*/, 16);
			num2 = 24;
			num3 = 12;
			num = 2200;
			num5 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Gray Vest*/, 16);
			num2 = 24;
			num3 = 13;
			num = 2200;
			num5 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Silver Light Plaid Vest*/, 16);
			num2 = 24;
			num3 = 14;
			num = 2200;
			num5 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*All Silver Vest*/, 16);
			num2 = 24;
			num3 = 15;
			num = 2200;
			num5 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Gray Tuxedo Jacket*/, 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num5 = 1;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Brown Shooting Vest*/, 16);
			num2 = 27;
			num3 = 0;
			num = 150;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Woodland Shooting Vest*/, 16);
			num2 = 27;
			num3 = 1;
			num = 160;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Taupe Shooting Vest*/, 16);
			num2 = 27;
			num3 = 2;
			num = 150;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 27;
			num3 = 3;
			num = 150;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Field Shooting Vest*/, 16);
			num2 = 27;
			num3 = 4;
			num = 160;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Forest Shooting Vest*/, 16);
			num2 = 27;
			num3 = 5;
			num = 160;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Silver Hoodie*/, 16);
			num2 = 28;
			num3 = 0;
			num = 88;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 28;
			num3 = 1;
			num = 60;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*LSGC Gray Hoodie*/, 16);
			num2 = 28;
			num3 = 2;
			num = 70;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 28;
			num3 = 3;
			num = 80;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*LSGC Forest Hoodie*/, 16);
			num2 = 28;
			num3 = 4;
			num = 90;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 28;
			num3 = 5;
			num = 80;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Blauser Hoodie*/, 16);
			num2 = 28;
			num3 = 6;
			num = 70;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Penetrators Orange Hoodie*/, 16);
			num2 = 28;
			num3 = 7;
			num = 95;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 28;
			num3 = 8;
			num = 105;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Blue Hoodie*/, 16);
			num2 = 28;
			num3 = 9;
			num = 95;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Green Hoodie*/, 16);
			num2 = 28;
			num3 = 10;
			num = 110;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*LS Jardineros Hoodie*/, 16);
			num2 = 28;
			num3 = 11;
			num = 98;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Ash 18 Hoodie*/, 16);
			num2 = 28;
			num3 = 12;
			num = 88;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Red Mist XI Hoodie*/, 16);
			num2 = 28;
			num3 = 13;
			num = 98;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Eris Charcoal Hoodie*/, 16);
			num2 = 28;
			num3 = 14;
			num = 110;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*OG Hoodie*/, 16);
			num2 = 28;
			num3 = 15;
			num = 98;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*White V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 0;
			num = 250;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Ash V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 1;
			num = 270;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Black V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 2;
			num = 280;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Brown V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 3;
			num = 275;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Olive V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 4;
			num = 290;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Corkers V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 5;
			num = 35;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Feud V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 6;
			num = 35;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Magnetics V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 7;
			num = 35;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Mint V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 8;
			num = 295;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Harsh Souls V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 9;
			num = 35;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Trey Baker V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 10;
			num = 35;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Fuque V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 11;
			num = 35;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Fellowship V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 12;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Green Cardigan*/, 16);
			num2 = 30;
			num3 = 0;
			num = 1750;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Gray Cardigan*/, 16);
			num2 = 30;
			num3 = 1;
			num = 1920;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Slate Cardigan*/, 16);
			num2 = 30;
			num3 = 2;
			num = 1890;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Blue Cardigan*/, 16);
			num2 = 30;
			num3 = 3;
			num = 1850;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Red Cardigan*/, 16);
			num2 = 30;
			num3 = 4;
			num = 1750;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Charcoal Cardigan*/, 16);
			num2 = 30;
			num3 = 5;
			num = 1990;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*White Cardigan*/, 16);
			num2 = 30;
			num3 = 6;
			num = 1820;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Silver Cardigan*/, 16);
			num2 = 30;
			num3 = 7;
			num = 1990;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Pale Blue Cardigan*/, 16);
			num2 = 30;
			num3 = 8;
			num = 1920;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Aqua Cardigan*/, 16);
			num2 = 30;
			num3 = 9;
			num = 1850;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Gray Two-Tone Cardigan*/, 16);
			num2 = 30;
			num3 = 10;
			num = 1990;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Pink Cardigan*/, 16);
			num2 = 30;
			num3 = 11;
			num = 1790;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Yellow Cardigan*/, 16);
			num2 = 30;
			num3 = 12;
			num = 1790;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*LS Panic Gray Jersey*/, 16);
			num2 = 31;
			num3 = 0;
			num = 69;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*LS Panic Yellow Jersey*/, 16);
			num2 = 31;
			num3 = 1;
			num = 75;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Penetrators White Jersey*/, 16);
			num2 = 31;
			num3 = 2;
			num = 75;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Penetrators Blue Jersey*/, 16);
			num2 = 31;
			num3 = 3;
			num = 79;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*LC Salamanders Red Jersey*/, 16);
			num2 = 31;
			num3 = 4;
			num = 79;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*LC Salamanders Green Jersey*/, 16);
			num2 = 31;
			num3 = 5;
			num = 89;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*LS Shrimps Gray Jersey*/, 16);
			num2 = 31;
			num3 = 6;
			num = 85;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*LS Shrimps White Jersey*/, 16);
			num2 = 31;
			num3 = 7;
			num = 85;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Uptown Riders Jersey*/, 16);
			num2 = 31;
			num3 = 8;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_163(int iParam0) // Position - 0x20CF7 Hash - 0x6B1EB2DB ^0x20E3846A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Snake A Jacket*/, 16);
			num2 = 12;
			num3 = 0;
			num = 195;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Eagle 69 Jacket*/, 16);
			num2 = 12;
			num3 = 1;
			num = 420;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*LS Corkers 33 Jacket*/, 16);
			num2 = 12;
			num3 = 2;
			num = 390;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*LSP 41 Jacket*/, 16);
			num2 = 12;
			num3 = 3;
			num = 450;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*LS Corkers E Jacket*/, 16);
			num2 = 12;
			num3 = 4;
			num = 400;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*LS Squeezers Jacket*/, 16);
			num2 = 12;
			num3 = 5;
			num = 390;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*The Feud 69 Jacket*/, 16);
			num2 = 12;
			num3 = 6;
			num = 570;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*LS Pounders Jacket*/, 16);
			num2 = 12;
			num3 = 7;
			num = 390;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*SA Jacket*/, 16);
			num2 = 12;
			num3 = 8;
			num = 470;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Redwood A Jacket*/, 16);
			num2 = 12;
			num3 = 9;
			num = 390;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Uptown Riders Jacket*/, 16);
			num2 = 12;
			num3 = 10;
			num = 520;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*The Feud Black Jacket*/, 16);
			num2 = 12;
			num3 = 11;
			num = 490;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Yeti Jacket*/, 16);
			num2 = 12;
			num3 = 12;
			num = 490;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*LSP 71 Jacket*/, 16);
			num2 = 12;
			num3 = 13;
			num = 590;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Dust Devils Jacket*/, 16);
			num2 = 12;
			num3 = 14;
			num = 560;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*SA 56 Jacket*/, 16);
			num2 = 12;
			num3 = 15;
			num = 520;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Gray Hoodie*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Kingz of Los Santos Hoodie*/, 16);
			num2 = 13;
			num3 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*LS Black Hoodie*/, 16);
			num2 = 13;
			num3 = 2;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Dark Blue Hoodie*/, 16);
			num2 = 13;
			num3 = 3;
			num = 90;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*LS Mustard Hoodie*/, 16);
			num2 = 13;
			num3 = 4;
			num = 85;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Crevis Hoodie*/, 16);
			num2 = 13;
			num3 = 5;
			num = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Dust Devils Hoodie*/, 16);
			num2 = 13;
			num3 = 6;
			num = 90;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Feud Olive Hoodie*/, 16);
			num2 = 13;
			num3 = 7;
			num = 47;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Eris Hoodie*/, 16);
			num2 = 13;
			num3 = 8;
			num = 45;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Hinterland Hoodie*/, 16);
			num2 = 13;
			num3 = 9;
			num = 48;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Feud Mint Hoodie*/, 16);
			num2 = 13;
			num3 = 10;
			num = 45;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Penetrators Gray Hoodie*/, 16);
			num2 = 13;
			num3 = 11;
			num = 85;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Ash Hoodie*/, 16);
			num2 = 13;
			num3 = 12;
			num = 45;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Rearwall Hoodie*/, 16);
			num2 = 13;
			num3 = 13;
			num = 47;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Trey Baker Hoodie*/, 16);
			num2 = 13;
			num3 = 14;
			num = 45;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Feud Camo Hoodie*/, 16);
			num2 = 13;
			num3 = 15;
			num = 48;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Gray Jacket*/, 16);
			num2 = 14;
			num3 = 0;
			num = 290;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Charcoal Jacket*/, 16);
			num2 = 14;
			num3 = 1;
			num = 290;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Silver Jacket*/, 16);
			num2 = 14;
			num3 = 2;
			num = 290;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Olive Jacket*/, 16);
			num2 = 14;
			num3 = 3;
			num = 290;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Brown Jacket*/, 16);
			num2 = 14;
			num3 = 4;
			num = 290;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Desert Sand Jacket*/, 16);
			num2 = 14;
			num3 = 5;
			num = 290;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Field Camo Jacket*/, 16);
			num2 = 14;
			num3 = 6;
			num = 65;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Desert Camo Jacket*/, 16);
			num2 = 14;
			num3 = 7;
			num = 65;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*White T-Shirt*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Gray T-Shirt*/, 16);
			num2 = 15;
			num3 = 1;
			num = 220;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Slate T-Shirt*/, 16);
			num2 = 15;
			num3 = 2;
			num = 220;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Jade T-Shirt*/, 16);
			num2 = 15;
			num3 = 3;
			num = 240;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*100% T-Shirt*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Navy T-Shirt*/, 16);
			num2 = 15;
			num3 = 5;
			num = 250;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Black T-Shirt*/, 16);
			num2 = 15;
			num3 = 6;
			num = 260;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*LC Wrath T-Shirt*/, 16);
			num2 = 15;
			num3 = 7;
			num = 40;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*LOB T-Shirt*/, 16);
			num2 = 15;
			num3 = 8;
			num = 50;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*UCLS Bookworms T-Shirt*/, 16);
			num2 = 15;
			num3 = 9;
			num = 45;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Los Santos Red T-Shirt*/, 16);
			num2 = 15;
			num3 = 10;
			num = 40;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Queensbury Boxing T-Shirt*/, 16);
			num2 = 15;
			num3 = 11;
			num = 55;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Black Shirt*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Blue Jacket*/, 16);
			num2 = 17;
			num3 = 0;
			num = 40;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*OG Slate Jacket*/, 16);
			num2 = 17;
			num3 = 1;
			num = 50;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*OG White Jacket*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Corkers Green Jacket*/, 16);
			num2 = 17;
			num3 = 3;
			num = 50;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Deep Gray Jacket*/, 16);
			num2 = 17;
			num3 = 4;
			num = 50;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Kingz Banded Jacket*/, 16);
			num2 = 17;
			num3 = 5;
			num = 50;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Stank Forest Camo Jacket*/, 16);
			num2 = 17;
			num3 = 6;
			num = 50;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Trey Baker Camo Jacket*/, 16);
			num2 = 17;
			num3 = 7;
			num = 50;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Coffee Jacket*/, 16);
			num2 = 17;
			num3 = 8;
			num = 50;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Plain Coffee Jacket*/, 16);
			num2 = 17;
			num3 = 9;
			num = 50;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Fruntalot Green Jacket*/, 16);
			num2 = 17;
			num3 = 10;
			num = 50;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Mocha Jacket*/, 16);
			num2 = 17;
			num3 = 11;
			num = 50;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Brown Jacket*/, 16);
			num2 = 17;
			num3 = 12;
			num = 50;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*LS Snake Weave Jacket*/, 16);
			num2 = 17;
			num3 = 13;
			num = 50;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Feud Animal Print Jacket*/, 16);
			num2 = 17;
			num3 = 14;
			num = 50;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Fruntalot Techno Jacket*/, 16);
			num2 = 17;
			num3 = 15;
			num = 50;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 0;
			num5 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 1;
			num5 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 2;
			num5 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 3;
			num5 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
			num2 = 18;
			num3 = 4;
			num5 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
			num2 = 18;
			num3 = 5;
			num5 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
			num2 = 18;
			num3 = 6;
			num5 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
			num2 = 18;
			num3 = 7;
			num5 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
			num2 = 18;
			num3 = 8;
			num5 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
			num2 = 18;
			num3 = 9;
			num5 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
			num2 = 18;
			num3 = 10;
			num5 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
			num2 = 18;
			num3 = 11;
			num5 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
			num2 = 18;
			num3 = 12;
			num5 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
			num2 = 18;
			num3 = 13;
			num5 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
			num2 = 18;
			num3 = 14;
			num5 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
			num2 = 18;
			num3 = 15;
			num5 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Blue Striped Shirt*/, 16);
			num2 = 19;
			num3 = 0;
			num = 480;
			num5 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Beige Striped Shirt*/, 16);
			num2 = 19;
			num3 = 1;
			num = 440;
			num5 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Gray Shirt*/, 16);
			num2 = 19;
			num3 = 2;
			num = 440;
			num5 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Slate Shirt*/, 16);
			num2 = 19;
			num3 = 3;
			num = 520;
			num5 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Green Shirt*/, 16);
			num2 = 19;
			num3 = 4;
			num = 440;
			num5 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Picnic Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 5;
			num = 440;
			num5 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*White Shirt*/, 16);
			num2 = 19;
			num3 = 6;
			num = 480;
			num5 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Light Green Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 7;
			num = 480;
			num5 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Pink Striped Shirt*/, 16);
			num2 = 19;
			num3 = 8;
			num = 480;
			num5 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Country Check Shirt*/, 16);
			num2 = 19;
			num3 = 9;
			num = 480;
			num5 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Off-White Striped Shirt*/, 16);
			num2 = 19;
			num3 = 10;
			num = 480;
			num5 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Russet Striped Shirt*/, 16);
			num2 = 19;
			num3 = 11;
			num = 480;
			num5 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Sea Green Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 12;
			num = 520;
			num5 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Navy Shirt*/, 16);
			num2 = 19;
			num3 = 13;
			num = 520;
			num5 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Brown Check Shirt*/, 16);
			num2 = 19;
			num3 = 14;
			num = 520;
			num5 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Sand Check Shirt*/, 16);
			num2 = 19;
			num3 = 15;
			num = 440;
			num5 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Black Jacket*/, 16);
			num2 = 21;
			num3 = 0;
			num = 220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Sand Jacket*/, 16);
			num2 = 21;
			num3 = 1;
			num = 200;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Teal Jacket*/, 16);
			num2 = 21;
			num3 = 2;
			num = 240;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Gray Jacket*/, 16);
			num2 = 21;
			num3 = 3;
			num = 240;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Gray Three-Way Jacket*/, 16);
			num2 = 21;
			num3 = 4;
			num = 260;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Red Accent Jacket*/, 16);
			num2 = 21;
			num3 = 5;
			num = 275;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Aqua Accent Jacket*/, 16);
			num2 = 21;
			num3 = 6;
			num = 275;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Brown Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 7;
			num = 280;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*White Jacket*/, 16);
			num2 = 21;
			num3 = 8;
			num = 280;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Tan Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 9;
			num = 280;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Red Jacket*/, 16);
			num2 = 21;
			num3 = 10;
			num = 280;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Olive Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 11;
			num = 280;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Three-Way Jacket*/, 16);
			num2 = 21;
			num3 = 12;
			num = 280;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Ash Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 13;
			num = 280;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Navy Peacoat*/, 16);
			num2 = 22;
			num3 = 0;
			num = 3100;
			num5 = 3;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Gray Peacoat*/, 16);
			num2 = 22;
			num3 = 1;
			num = 2800;
			num5 = 3;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Brown Peacoat*/, 16);
			num2 = 22;
			num3 = 2;
			num = 2500;
			num5 = 3;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Black Peacoat*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3000;
			num5 = 3;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_164(int iParam0) // Position - 0x21AE6 Hash - 0x6B1EB2DB ^0xEEA46F3F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*White Tank Top*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*Black Tank Top*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*Gray Tank Top*/, 16);
			num2 = 0;
			num3 = 2;
			num = 180;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*Feud Green Tank Top*/, 16);
			num2 = 0;
			num3 = 3;
			num = 22;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*Fruntalot Jade Tank Top*/, 16);
			num2 = 0;
			num3 = 4;
			num = 20;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*Fruntalot Brown Tank Top*/, 16);
			num2 = 0;
			num3 = 5;
			num = 18;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*Broker Blue Tank Top*/, 16);
			num2 = 0;
			num3 = 6;
			num = 19;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*Kingz Green Tank Top*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*Broker Gray Tank Top*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*Harsh Souls Tank Top*/, 16);
			num2 = 0;
			num3 = 9;
			num = 19;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*Sweatbox Tank Top*/, 16);
			num2 = 0;
			num3 = 10;
			num = 19;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*White Ringer Tank Top*/, 16);
			num2 = 0;
			num3 = 11;
			num = 18;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*Rearwall Tank Top*/, 16);
			num2 = 0;
			num3 = 12;
			num = 20;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*Feud 3 Tank Top*/, 16);
			num2 = 0;
			num3 = 13;
			num = 22;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*Kingz Charcoal Tank Top*/, 16);
			num2 = 0;
			num3 = 14;
			num = 19;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*Feud White Tank Top*/, 16);
			num2 = 0;
			num3 = 15;
			num = 22;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			num5 = 4;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			num5 = 4;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			num5 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			num5 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			num5 = 4;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*White Tuxedo Jacket*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 0;
			num = 20;
			num5 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 1;
			num = 22;
			num5 = 2;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Ash OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 2;
			num = 20;
			num5 = 2;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*LC Swingers OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 3;
			num = 25;
			num5 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Corkers Red OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 4;
			num = 23;
			num5 = 2;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Corkers Green OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 5;
			num = 25;
			num5 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Uptown Riders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 6;
			num = 28;
			num5 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Feud White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 7;
			num = 26;
			num5 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Salamanders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 8;
			num = 24;
			num5 = 2;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*LC Rampage OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 9;
			num = 27;
			num5 = 2;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Dust Devils OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 10;
			num = 29;
			num5 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*LS Gray OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 11;
			num = 28;
			num5 = 2;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Los Santos Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 12;
			num = 25;
			num5 = 2;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Los Santos White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 13;
			num = 22;
			num5 = 2;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Pounders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 14;
			num = 27;
			num5 = 2;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Feud Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 15;
			num = 29;
			num5 = 2;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Pine Striped Sweater*/, 16);
			num2 = 6;
			num3 = 0;
			num5 = 3;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Yellow Sweater*/, 16);
			num2 = 6;
			num3 = 1;
			num = 1270;
			num5 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Blue Sweater*/, 16);
			num2 = 6;
			num3 = 2;
			num = 1270;
			num5 = 3;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Sand Striped Sweater*/, 16);
			num2 = 6;
			num3 = 3;
			num = 1270;
			num5 = 3;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Silver Sweater*/, 16);
			num2 = 6;
			num3 = 4;
			num = 1090;
			num5 = 3;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Gray Sweater*/, 16);
			num2 = 6;
			num3 = 5;
			num = 1090;
			num5 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Navy Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 6;
			num = 1120;
			num5 = 3;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Sand Sweater*/, 16);
			num2 = 6;
			num3 = 7;
			num = 1120;
			num5 = 3;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Salmon Pink Sweater*/, 16);
			num2 = 6;
			num3 = 8;
			num = 1290;
			num5 = 3;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Turquoise Sweater*/, 16);
			num2 = 6;
			num3 = 9;
			num = 1290;
			num5 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Green Sweater*/, 16);
			num2 = 6;
			num3 = 10;
			num = 1320;
			num5 = 3;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Amethyst Sweater*/, 16);
			num2 = 6;
			num3 = 11;
			num = 1320;
			num5 = 3;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Yellow Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 12;
			num = 1590;
			num5 = 3;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Gray Two-Tone Sweater*/, 16);
			num2 = 6;
			num3 = 13;
			num = 1590;
			num5 = 3;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Sand Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 14;
			num = 1590;
			num5 = 3;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Charcoal Sweater*/, 16);
			num2 = 6;
			num3 = 15;
			num = 1320;
			num5 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Ash Shirt*/, 16);
			num2 = 7;
			num3 = 0;
			num = 98;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Gray Shirt*/, 16);
			num2 = 7;
			num3 = 1;
			num = 98;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Black Shirt*/, 16);
			num2 = 7;
			num3 = 2;
			num = 110;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Silver Shirt*/, 16);
			num2 = 7;
			num3 = 3;
			num = 110;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*White Shirt*/, 16);
			num2 = 7;
			num3 = 4;
			num = 118;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Olive Shirt*/, 16);
			num2 = 7;
			num3 = 5;
			num = 120;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Navy Shirt*/, 16);
			num2 = 7;
			num3 = 6;
			num = 120;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Red Shirt*/, 16);
			num2 = 7;
			num3 = 7;
			num = 129;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Tan Check Shirt*/, 16);
			num2 = 7;
			num3 = 8;
			num = 125;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Beige Gingham Shirt*/, 16);
			num2 = 7;
			num3 = 9;
			num = 125;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Gray Gingham Shirt*/, 16);
			num2 = 7;
			num3 = 10;
			num = 129;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Gray Check Shirt*/, 16);
			num2 = 7;
			num3 = 11;
			num = 129;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Blue Shirt*/, 16);
			num2 = 7;
			num3 = 12;
			num = 135;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Off-White Shirt*/, 16);
			num2 = 7;
			num3 = 13;
			num = 139;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Pastel Check Shirt*/, 16);
			num2 = 7;
			num3 = 14;
			num = 145;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Fruity Check Shirt*/, 16);
			num2 = 7;
			num3 = 15;
			num = 145;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Blue Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Yellow Check Shirt*/, 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Off-White Striped Shirt*/, 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Off-White Shirt*/, 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Red Check Shirt*/, 16);
			num2 = 8;
			num3 = 4;
			num = 30;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Charcoal Shirt*/, 16);
			num2 = 8;
			num3 = 5;
			num = 38;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Blue Check Shirt*/, 16);
			num2 = 8;
			num3 = 6;
			num = 32;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Gingham Shirt*/, 16);
			num2 = 8;
			num3 = 7;
			num = 30;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Aqua Check Shirt*/, 16);
			num2 = 8;
			num3 = 8;
			num = 33;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Orange Shirt*/, 16);
			num2 = 8;
			num3 = 9;
			num = 35;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Mint Check Shirt*/, 16);
			num2 = 8;
			num3 = 10;
			num = 35;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Dark Gray Check Shirt*/, 16);
			num2 = 8;
			num3 = 11;
			num = 38;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Purple Check Shirt*/, 16);
			num2 = 8;
			num3 = 12;
			num = 33;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Olive Shirt*/, 16);
			num2 = 8;
			num3 = 13;
			num = 35;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Cream Shirt*/, 16);
			num2 = 8;
			num3 = 14;
			num = 38;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Fruity Check Shirt*/, 16);
			num2 = 8;
			num3 = 15;
			num = 32;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*White Longsleeve*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Gray Longsleeve*/, 16);
			num2 = 11;
			num3 = 1;
			num = 59;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Black Longsleeve*/, 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Ten Off Yellow Longsleeve*/, 16);
			num2 = 11;
			num3 = 3;
			num = 25;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Kingz Of Los Santos Longsleeve*/, 16);
			num2 = 11;
			num3 = 4;
			num = 29;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Yeti Rainbow Longsleeve*/, 16);
			num2 = 11;
			num3 = 5;
			num = 27;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Ten Off Red Longsleeve*/, 16);
			num2 = 11;
			num3 = 6;
			num = 25;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Trey Baker Longsleeve*/, 16);
			num2 = 11;
			num3 = 7;
			num = 27;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Stank Striped Longsleeve*/, 16);
			num2 = 11;
			num3 = 8;
			num = 28;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Feud Olive Longsleeve*/, 16);
			num2 = 11;
			num3 = 9;
			num = 30;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Yeti Gray Longsleeve*/, 16);
			num2 = 11;
			num3 = 10;
			num = 29;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Yogarishima Longsleeve*/, 16);
			num2 = 11;
			num3 = 11;
			num = 27;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Yeti Camo Longsleeve*/, 16);
			num2 = 11;
			num3 = 12;
			num = 29;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Crevis White Longsleeve*/, 16);
			num2 = 11;
			num3 = 13;
			num = 32;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Yeti Blue Longsleeve*/, 16);
			num2 = 11;
			num3 = 14;
			num = 30;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Uptown Ryders Longsleeve*/, 16);
			num2 = 11;
			num3 = 15;
			num = 28;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_165(int iParam0) // Position - 0x2272F Hash - 0xD1DB443F ^0x27722475
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Fade*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple Rails*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Side Shaded*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Wavy Siderows*/, 16);
			num2 = 0;
			num3 = 3;
			num5 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Snakes*/, 16);
			num2 = 0;
			num3 = 4;
			num5 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Tramlines*/, 16);
			num2 = 0;
			num3 = 5;
			num5 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*The King Fresh*/, 16);
			num2 = 0;
			num3 = 6;
			num5 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Star Kutz*/, 16);
			num2 = 0;
			num3 = 7;
			num5 = 3;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Tigerized*/, 16);
			num2 = 0;
			num3 = 8;
			num5 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstraction*/, 16);
			num2 = 0;
			num3 = 9;
			num5 = 3;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Shutters*/, 16);
			num2 = 0;
			num3 = 10;
			num5 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Berms*/, 16);
			num2 = 0;
			num3 = 11;
			num5 = 3;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Mellowplex*/, 16);
			num2 = 0;
			num3 = 12;
			num5 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*The Feud*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Business on Top*/, 16);
			num2 = 0;
			num3 = 14;
			num5 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Wild Palm*/, 16);
			num2 = 0;
			num3 = 15;
			num5 = 3;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Lo Fro*/, 16);
			num2 = 1;
			num3 = 0;
			num5 = 3;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Blowout*/, 16);
			num2 = 2;
			num3 = 0;
			num5 = 3;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Cornrows*/, 16);
			num2 = 3;
			num3 = 0;
			num5 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Shape-up*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 21, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_166(int iParam0) // Position - 0x229A8 Hash - 0x501F1CEE ^0x5D7C152F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_79031[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 9;
			break;
	
		default:
			func_131(num6, iParam0, 10, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_167(int iParam0, int iParam1) // Position - 0x22AEE Hash - 0x2A09B983 ^0x2A09B983
{
	switch (iParam0)
	{
		case 0:
			func_184(iParam1);
			break;
	
		case 2:
			func_183(iParam1);
			break;
	
		case 3:
			func_180(iParam1);
			break;
	
		case 4:
			func_179(iParam1);
			break;
	
		case 6:
			func_178(iParam1);
			break;
	
		case 5:
			func_177(iParam1);
			break;
	
		case 8:
			func_176(iParam1);
			break;
	
		case 9:
			func_175(iParam1);
			break;
	
		case 10:
			func_174(iParam1);
			break;
	
		case 1:
			func_173(iParam1);
			break;
	
		case 7:
			func_172(iParam1);
			break;
	
		case 11:
			func_171(iParam1);
			break;
	
		case 12:
			func_170(iParam1);
			break;
	
		case 13:
			func_169(iParam1);
			break;
	
		case 14:
			func_168(iParam1);
			break;
	}

	return;
}

void func_168(int iParam0) // Position - 0x22BDE Hash - 0x65772392 ^0xF6D78545
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Blue Baseball Cap*/, 16);
			num2 = 1;
			num3 = 0;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*White Hockey Mask*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 11;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Black Knitted Hat*/, 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 28;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Black-Rimmed Glasses*/, 16);
			num2 = 0;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Copper Sports Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Enema Brown Glasses*/, 16);
			num2 = 4;
			num3 = 0;
			num = 58;
			num4 = 10;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Enema Gray Glasses*/, 16);
			num2 = 4;
			num3 = 1;
			num = 56;
			num4 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Enema Black Glasses*/, 16);
			num2 = 4;
			num3 = 2;
			num = 60;
			num4 = 10;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Enema Tortoiseshell Glasses*/, 16);
			num2 = 4;
			num3 = 3;
			num = 65;
			num4 = 10;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Enema Coffee Glasses*/, 16);
			num2 = 4;
			num3 = 4;
			num = 62;
			num4 = 10;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Enema Walnut Glasses*/, 16);
			num2 = 4;
			num3 = 5;
			num = 65;
			num4 = 10;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Enema Silver Accent Glasses*/, 16);
			num2 = 4;
			num3 = 6;
			num = 68;
			num4 = 10;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Enema Smoke Glasses*/, 16);
			num2 = 4;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Farshtunken Gold Aviators*/, 16);
			num2 = 5;
			num3 = 0;
			num = 65;
			num4 = 10;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Farshtunken Purple Aviators*/, 16);
			num2 = 5;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Farshtunken Silver Aviators*/, 16);
			num2 = 5;
			num3 = 2;
			num = 72;
			num4 = 10;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Farshtunken Gray Aviators*/, 16);
			num2 = 5;
			num3 = 3;
			num = 70;
			num4 = 10;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Farshtunken Blue Aviators*/, 16);
			num2 = 5;
			num3 = 4;
			num = 74;
			num4 = 10;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Farshtunken Tinted Aviators*/, 16);
			num2 = 5;
			num3 = 5;
			num = 78;
			num4 = 10;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Farshtunken Steel Aviators*/, 16);
			num2 = 5;
			num3 = 6;
			num = 82;
			num4 = 10;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Farshtunken Sepia Aviators*/, 16);
			num2 = 5;
			num3 = 7;
			num = 85;
			num4 = 10;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Farshtunken Black Aviators*/, 16);
			num2 = 5;
			num3 = 8;
			num = 85;
			num4 = 10;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Farshtunken Smoke Aviators*/, 16);
			num2 = 5;
			num3 = 9;
			num4 = 10;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Tung Charcoal Shades*/, 16);
			num2 = 6;
			num3 = 0;
			num = 69;
			num4 = 10;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Tung Ash Shades*/, 16);
			num2 = 6;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Tung Gray Shades*/, 16);
			num2 = 6;
			num3 = 2;
			num = 69;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Tung Red Shades*/, 16);
			num2 = 6;
			num3 = 3;
			num = 69;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Tung Blue Shades*/, 16);
			num2 = 6;
			num3 = 4;
			num = 69;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Tung Yellow Shades*/, 16);
			num2 = 6;
			num3 = 5;
			num = 69;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Tung Black Shades*/, 16);
			num2 = 6;
			num3 = 6;
			num = 69;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Tung Rosy Shades*/, 16);
			num2 = 6;
			num3 = 7;
			num = 69;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Tung Hornet Shades*/, 16);
			num2 = 6;
			num3 = 8;
			num = 69;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Tung Two-Tone Shades*/, 16);
			num2 = 6;
			num3 = 9;
			num = 69;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Swimming Goggles*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Rimmers Azure Aviators*/, 16);
			num2 = 8;
			num3 = 0;
			num = 170;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Rimmers Smoke Aviators*/, 16);
			num2 = 8;
			num3 = 1;
			num = 175;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Rimmers Yellow Aviators*/, 16);
			num2 = 8;
			num3 = 2;
			num = 180;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Rimmers Topaz Aviators*/, 16);
			num2 = 8;
			num3 = 3;
			num = 185;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Rimmers Tinted Aviators*/, 16);
			num2 = 8;
			num3 = 4;
			num = 189;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Rimmers Steel Aviators*/, 16);
			num2 = 8;
			num3 = 5;
			num = 195;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Rimmers Indigo Aviators*/, 16);
			num2 = 8;
			num3 = 6;
			num = 235;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Rimmers Chocolate Aviators*/, 16);
			num2 = 8;
			num3 = 7;
			num = 245;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Rimmers Sepia Aviators*/, 16);
			num2 = 8;
			num3 = 8;
			num = 250;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Rimmers Slate Aviators*/, 16);
			num2 = 8;
			num3 = 9;
			num = 275;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Rimmers Gold Aviators*/, 16);
			num2 = 8;
			num3 = 10;
			num = 280;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Rimmers Blue Aviators*/, 16);
			num2 = 8;
			num3 = 11;
			num = 295;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow Black Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 179;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow Charcoal Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 159;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow Ash Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 165;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow Gray Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 155;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow Tan Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow Tortoiseshell Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow Walnut Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow Marbled Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 225;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		default:
			func_131(num6, iParam0, 113, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_169(int iParam0) // Position - 0x23968 Hash - 0x3B9C736A ^0x4791470E
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 10, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_170(int iParam0) // Position - 0x23AE2 Hash - 0x7AE9DF25 ^0xAB172913
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Firefighter*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Janitor*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Highway Patrol*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Bed*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tennis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Security*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminator*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Rappel Gear*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prologue*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Spec Ops*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Denim Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Slate Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Leather Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Charcoal Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Pale Blue Shirt, Gray Pants*/, 16);
			num2 = 0;
			num3 = 0;
			num = 840;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Jewel Heist Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo Shirt, Beach Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo Shirt, Suit Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Shirt, Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Topaz Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Pale Blue Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Off-White Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Olive Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Cream Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4600;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Navy Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Beige Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Smoke Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Blue-Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Ash Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Sand Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Black Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Moto X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 53, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_171(int iParam0) // Position - 0x2405A Hash - 0xD847BAA9 ^0xBB10AF10
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Ash T-Shirt*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*White T-Shirt*/, 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Charcoal T-Shirt*/, 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Green T-Shirt*/, 16);
			num2 = 2;
			num3 = 4;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 5;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Charcoal Henley*/, 16);
			num2 = 3;
			num3 = 0;
			num = 390;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Gray Henley*/, 16);
			num2 = 3;
			num3 = 1;
			num = 390;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Black Henley*/, 16);
			num2 = 3;
			num3 = 2;
			num = 420;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Beige Henley*/, 16);
			num2 = 3;
			num3 = 3;
			num = 420;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Brown Henley*/, 16);
			num2 = 3;
			num3 = 4;
			num = 490;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Navy Henley*/, 16);
			num2 = 3;
			num3 = 5;
			num = 490;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Navy Striped Henley*/, 16);
			num2 = 3;
			num3 = 6;
			num = 540;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Gray Striped Henley*/, 16);
			num2 = 3;
			num3 = 7;
			num = 540;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Gray Wool Henley*/, 16);
			num2 = 3;
			num3 = 8;
			num = 550;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Charcoal Striped Henley*/, 16);
			num2 = 3;
			num3 = 9;
			num = 540;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Charcoal V Neck*/, 16);
			num2 = 4;
			num3 = 0;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Beige V Neck*/, 16);
			num2 = 4;
			num3 = 1;
			num = 850;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Black V Neck*/, 16);
			num2 = 4;
			num3 = 2;
			num = 890;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Olive V Neck*/, 16);
			num2 = 4;
			num3 = 3;
			num = 890;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Gray V Neck*/, 16);
			num2 = 4;
			num3 = 4;
			num = 920;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Brown V Neck*/, 16);
			num2 = 4;
			num3 = 5;
			num = 920;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Black Striped V Neck*/, 16);
			num2 = 4;
			num3 = 6;
			num = 950;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Gray Diamond V Neck*/, 16);
			num2 = 4;
			num3 = 7;
			num = 980;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Brown Striped V Neck*/, 16);
			num2 = 4;
			num3 = 8;
			num = 1050;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Silver Diamond V Neck*/, 16);
			num2 = 4;
			num3 = 9;
			num = 1100;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Black Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 0;
			num = 1890;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Black Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 1;
			num = 1820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Black Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 2;
			num = 1820;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Black Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 3;
			num = 1850;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Black Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 4;
			num = 1850;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Ash Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 5;
			num = 1900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Ash Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 6;
			num = 1920;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Ash Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 7;
			num = 1980;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Ash Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 8;
			num = 2100;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Ash Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 9;
			num = 2120;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Blue Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 10;
			num = 2000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Blue Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 11;
			num = 2200;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Blue Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 12;
			num = 2280;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Blue Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 13;
			num = 2300;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Blue Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 14;
			num = 2350;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Stone Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 15;
			num = 2280;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Bare Chest*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 45, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_172(int iParam0) // Position - 0x24584 Hash - 0x84875CF4 ^0x68685812
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 1, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_173(int iParam0) // Position - 0x245F8 Hash - 0xBC3ED9F1 ^0x5B362D6A
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Stubbled*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Long Stubbled*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Full Goatee*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Full Beard*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 5, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_174(int iParam0) // Position - 0x246C8 Hash - 0x6BA8FE21 ^0x4E9A6005
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 3;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 4;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 5;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 6;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 7;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Del Perro Pier T-Shirt*/, 16);
			num2 = 10;
			num3 = 8;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Los Santos T-Shirt*/, 16);
			num2 = 10;
			num3 = 9;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Sharkies Bites T-Shirt*/, 16);
			num2 = 10;
			num3 = 10;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Muscle Peach T-Shirt*/, 16);
			num2 = 10;
			num3 = 11;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Coral Reefers T-Shirt*/, 16);
			num2 = 10;
			num3 = 12;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*SmokeBomb T-Shirt*/, 16);
			num2 = 10;
			num3 = 13;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*The Big Puffa T-Shirt*/, 16);
			num2 = 10;
			num3 = 14;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Lob-Star T-Shirt*/, 16);
			num2 = 10;
			num3 = 15;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			break;
	
		default:
			func_131(num6, iParam0, 48, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_175(int iParam0) // Position - 0x24BA0 Hash - 0x2912A97A ^0xE9A71682
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 20, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_176(int iParam0) // Position - 0x24E09 Hash - 0xC1E4B88B ^0xEE1D97FD
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Watch and Bracelet*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Leather Watch*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 24, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_177(int iParam0) // Position - 0x250DF Hash - 0x3AEA7A34 ^0x7D573804
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_131(num6, iParam0, 14, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_178(int iParam0) // Position - 0x252A8 Hash - 0xE4934E8C ^0x520C3FE7
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Black Leather Shoes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Brown Leather Shoes*/, 16);
			num2 = 0;
			num3 = 1;
			num = 665;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Charcoal Leather Shoes*/, 16);
			num2 = 0;
			num3 = 2;
			num = 620;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Gray Leather Shoes*/, 16);
			num2 = 0;
			num3 = 3;
			num = 540;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Sand Leather Shoes*/, 16);
			num2 = 0;
			num3 = 4;
			num = 580;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Blue Suede Shoes*/, 16);
			num2 = 0;
			num3 = 5;
			num = 650;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Dress Loafers*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Ash Skate Shoes*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Black Skate Shoes*/, 16);
			num2 = 15;
			num3 = 1;
			num = 64;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*White Skate Shoes*/, 16);
			num2 = 15;
			num3 = 2;
			num = 56;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Red Skate Shoes*/, 16);
			num2 = 15;
			num3 = 3;
			num = 69;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Plaid Skate Shoes*/, 16);
			num2 = 15;
			num3 = 4;
			num = 59;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Striped Skate Shoes*/, 16);
			num2 = 15;
			num3 = 5;
			num = 62;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Coffee Skate Shoes*/, 16);
			num2 = 15;
			num3 = 6;
			num = 74;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Camo Skate Shoes*/, 16);
			num2 = 15;
			num3 = 7;
			num = 68;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tropical Skate Shoes*/, 16);
			num2 = 15;
			num3 = 8;
			num = 72;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Green Skate Shoes*/, 16);
			num2 = 15;
			num3 = 9;
			num = 70;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Chocolate Boat Shoes*/, 16);
			num2 = 16;
			num3 = 0;
			num = 48;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Teal Boat Shoes*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Black Boat Shoes*/, 16);
			num2 = 16;
			num3 = 2;
			num = 55;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Chestnut Boat Shoes*/, 16);
			num2 = 16;
			num3 = 3;
			num = 75;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Tan Boat Shoes*/, 16);
			num2 = 16;
			num3 = 4;
			num = 65;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Gray Boat Shoes*/, 16);
			num2 = 16;
			num3 = 5;
			num = 68;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Red Boat Shoes*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Slate Boat Shoes*/, 16);
			num2 = 16;
			num3 = 7;
			num = 68;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*All Black Oxfords*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Chocolate Oxfords*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Chestnut Oxfords*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Tan Oxfords*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*White Oxfords*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Ash Oxfords*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Beige Oxfords*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Topaz Oxfords*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Black Oxfords*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Lime Oxfords*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Hawthorn Oxfords*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Coffee Oxfords*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Gray Oxfords*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Cream Oxfords*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Navy Oxfords*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Black Slip-Ons*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Red Slip-Ons*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Brown Slip-Ons*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Green Slip-Ons*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Copper Slip-Ons*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Navy Slip-Ons*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Blue Slip-Ons*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Beige Slip-Ons*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*White Slip-Ons*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Tan Slip-Ons*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Gray Slip-Ons*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Navy Wingtips*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Coffee Wingtips*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Burgundy Wingtips*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Blue Wingtips*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Black Wingtips*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Tan Wingtips*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Purple Wingtips*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Chocolate Wingtips*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Green Wingtips*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Ash Wingtips*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Olive Wingtips*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Two-Tone Wingtips*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Yellow Wingtips*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Black Leather Loafers*/, 16);
			num2 = 21;
			num3 = 0;
			num = 720;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Gray Leather Loafers*/, 16);
			num2 = 21;
			num3 = 1;
			num = 680;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Cream Leather Loafers*/, 16);
			num2 = 21;
			num3 = 2;
			num = 650;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Brown Leather Loafers*/, 16);
			num2 = 21;
			num3 = 3;
			num = 670;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*White Leather Loafers*/, 16);
			num2 = 21;
			num3 = 4;
			num = 700;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Russet Leather Loafers*/, 16);
			num2 = 21;
			num3 = 5;
			num = 680;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*White Snakeskin Loafers*/, 16);
			num2 = 21;
			num3 = 6;
			num = 720;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Rattlesnake Loafers*/, 16);
			num2 = 21;
			num3 = 7;
			num = 740;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 21;
			num3 = 8;
			num = 760;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 21;
			num3 = 9;
			num = 780;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Pale Reptile Loafers*/, 16);
			num2 = 21;
			num3 = 10;
			num = 750;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Tan Alligator Loafers*/, 16);
			num2 = 21;
			num3 = 11;
			num = 700;
			break;
	
		default:
			func_131(num6, iParam0, 99, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_179(int iParam0) // Position - 0x25DFC Hash - 0xC75B5564 ^0x149923D8
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Charcoal Pants*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Slate Pants*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Topaz Pants*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pale Blue Pants*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Cream Pants*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Olive Pants*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Off-White Pants*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Navy Pants*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Beige Pants*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Smoke Pants*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Blue-Gray Pants*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Ash Pants*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Sand Pants*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Black Pants*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Off-White Chinos*/, 16);
			num2 = 7;
			num3 = 0;
			num = 115;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Camel Chinos*/, 16);
			num2 = 7;
			num3 = 1;
			num = 115;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Ash Chinos*/, 16);
			num2 = 7;
			num3 = 2;
			num = 128;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Olive Chinos*/, 16);
			num2 = 7;
			num3 = 3;
			num = 118;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Brown Chinos*/, 16);
			num2 = 7;
			num3 = 4;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Black Chinos*/, 16);
			num2 = 7;
			num3 = 5;
			num = 128;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Charcoal Chinos*/, 16);
			num2 = 7;
			num3 = 6;
			num = 128;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*White Chinos*/, 16);
			num2 = 7;
			num3 = 7;
			num = 125;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Cream Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 0;
			num = 68;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Khaki Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 1;
			num = 68;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Camo Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 2;
			num = 68;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Gray Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 3;
			num = 68;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*White Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 4;
			num = 68;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Gray Golf Pants*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Cream Golf Pants*/, 16);
			num2 = 15;
			num3 = 1;
			num = 550;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Brown Golf Pants*/, 16);
			num2 = 15;
			num3 = 2;
			num = 650;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Tartan Golf Pants*/, 16);
			num2 = 15;
			num3 = 3;
			num = 875;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Charcoal Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 4;
			num = 820;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Green Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 5;
			num = 720;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Brown Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 6;
			num = 750;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Slate Golf Pants*/, 16);
			num2 = 15;
			num3 = 7;
			num = 850;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Beige Shorts*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Yellow Shorts*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Blue Shorts*/, 16);
			num2 = 16;
			num3 = 2;
			num = 48;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Brown Leafy Shorts*/, 16);
			num2 = 16;
			num3 = 3;
			num = 38;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Tropical Shorts*/, 16);
			num2 = 16;
			num3 = 4;
			num = 38;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Aqua Vintage Shorts*/, 16);
			num2 = 16;
			num3 = 5;
			num = 42;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Bright Two-Tone Shorts*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Red Floral Shorts*/, 16);
			num2 = 16;
			num3 = 7;
			num = 46;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Navy Floral Shorts*/, 16);
			num2 = 16;
			num3 = 8;
			num = 46;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Blue Floral Shorts*/, 16);
			num2 = 16;
			num3 = 9;
			num = 46;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Orange Shorts*/, 16);
			num2 = 16;
			num3 = 10;
			num = 68;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*White Striped Shorts*/, 16);
			num2 = 16;
			num3 = 11;
			num = 58;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Charcoal Shorts*/, 16);
			num2 = 16;
			num3 = 12;
			num = 50;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Gray Shorts*/, 16);
			num2 = 16;
			num3 = 13;
			num = 68;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Candy Surf Shorts*/, 16);
			num2 = 16;
			num3 = 14;
			num = 68;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Undersea Shorts*/, 16);
			num2 = 16;
			num3 = 15;
			num = 42;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*White Striped Boxers*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Blue Boxers*/, 16);
			num2 = 18;
			num3 = 1;
			num = 250;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Ash Boxers*/, 16);
			num2 = 18;
			num3 = 2;
			num = 250;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Blue Striped Boxers*/, 16);
			num2 = 18;
			num3 = 3;
			num = 290;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*White Boxers*/, 16);
			num2 = 18;
			num3 = 4;
			num = 270;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Charcoal Boxers*/, 16);
			num2 = 18;
			num3 = 5;
			num = 270;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Red Heart Boxers*/, 16);
			num2 = 18;
			num3 = 6;
			num = 15;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Blue Heart Boxers*/, 16);
			num2 = 18;
			num3 = 7;
			num = 12;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Blue Casual Jeans*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Black Casual Jeans*/, 16);
			num2 = 20;
			num3 = 1;
			num = 118;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Faded Casual Jeans*/, 16);
			num2 = 20;
			num3 = 2;
			num = 110;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Tan Pants*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Charcoal Pants*/, 16);
			num2 = 21;
			num3 = 1;
			num = 95;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Brown Pants*/, 16);
			num2 = 21;
			num3 = 2;
			num = 95;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Ash Pants*/, 16);
			num2 = 21;
			num3 = 3;
			num = 98;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Smart Jeans*/, 16);
			num2 = 22;
			num3 = 0;
			num = 140;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*White Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Lobon Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 1;
			num = 150;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Plaid Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 2;
			num = 130;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Beige Shorts, Bare Feet*/, 16);
			num2 = 27;
			num3 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Pale Blue Bermudas*/, 16);
			num2 = 28;
			num3 = 0;
			num = 45;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Beige Bermudas*/, 16);
			num2 = 28;
			num3 = 1;
			num = 48;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Cream Bermudas*/, 16);
			num2 = 28;
			num3 = 2;
			num = 48;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Olive Bermudas*/, 16);
			num2 = 28;
			num3 = 3;
			num = 52;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Blue Bermudas*/, 16);
			num2 = 28;
			num3 = 4;
			num = 52;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Off-White Bermudas*/, 16);
			num2 = 28;
			num3 = 5;
			num = 55;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Gray Bermudas*/, 16);
			num2 = 28;
			num3 = 6;
			num = 55;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Charcoal Bermudas*/, 16);
			num2 = 28;
			num3 = 7;
			num = 55;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Pink Bermudas*/, 16);
			num2 = 28;
			num3 = 8;
			num = 58;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Beige Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 9;
			num = 58;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Pastel Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 10;
			num = 60;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Orange Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 11;
			num = 60;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Gray Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 12;
			num = 62;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Blue Striped Bermudas*/, 16);
			num2 = 28;
			num3 = 13;
			num = 62;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Murky Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 14;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Pastel Check Bermudas*/, 16);
			num2 = 28;
			num3 = 15;
			num = 65;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 29;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 113, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_180(int iParam0) // Position - 0x26A46 Hash - 0xA5A40372 ^0xCEFC4EDB
{
	if (iParam0 < 60)
		func_182(iParam0);
	else
		func_181(iParam0);

	if (Global_79031[0 /*14*/].f_2 == -1)
		func_131(3, iParam0, 181, -1);

	return;
}

void func_181(int iParam0) // Position - 0x26A7B Hash - 0x8425A109 ^0x4E380533
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 1;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 2;
			flag = true;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 3;
			flag = true;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 4;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 5;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Rearwall Black Gilet*/, 16);
			num2 = 14;
			num3 = 0;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Fruntalot Red Gilet*/, 16);
			num2 = 14;
			num3 = 1;
			num = 120;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Yeti Blue Gilet*/, 16);
			num2 = 14;
			num3 = 2;
			num = 120;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Rearwall Brown Gilet*/, 16);
			num2 = 14;
			num3 = 3;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Rearwall Orange Gilet*/, 16);
			num2 = 14;
			num3 = 4;
			num = 120;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Rearwall Green Gilet*/, 16);
			num2 = 14;
			num3 = 5;
			num = 120;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Purple Golf Shirt*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Orange Golf Shirt*/, 16);
			num2 = 16;
			num3 = 1;
			num = 20;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Burgundy Golf Shirt*/, 16);
			num2 = 16;
			num3 = 2;
			num = 24;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Yellow Golf Shirt*/, 16);
			num2 = 16;
			num3 = 3;
			num = 22;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Blue Golf Shirt*/, 16);
			num2 = 16;
			num3 = 4;
			num = 25;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Mint Golf Shirt*/, 16);
			num2 = 16;
			num3 = 5;
			num = 25;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Brown Golf Shirt*/, 16);
			num2 = 16;
			num3 = 6;
			num = 22;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Crimson Golf Shirt*/, 16);
			num2 = 16;
			num3 = 7;
			num = 27;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Blue-Gray Polo Shirt*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Olive Polo Shirt*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Red Polo Shirt*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Black Polo Shirt*/, 16);
			num2 = 17;
			num3 = 3;
			num = 48;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*White Polo Shirt*/, 16);
			num2 = 17;
			num3 = 4;
			num = 40;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Blue Polo Shirt*/, 16);
			num2 = 17;
			num3 = 5;
			num = 45;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Off-White Tank Top*/, 16);
			num2 = 19;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*White Tank Top*/, 16);
			num2 = 19;
			num3 = 1;
			num = 190;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Ash Tank Top*/, 16);
			num2 = 19;
			num3 = 2;
			num = 190;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Gray Tank Top*/, 16);
			num2 = 19;
			num3 = 3;
			num = 190;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Black Tank Top*/, 16);
			num2 = 19;
			num3 = 4;
			num = 210;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Blue Denim Shirt*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Deep Black Shirt*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Russet Shirt*/, 16);
			num2 = 20;
			num3 = 2;
			num = 55;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Green Cord Shirt*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Gray Shirt*/, 16);
			num2 = 20;
			num3 = 4;
			num = 99;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Fresh Check Shirt*/, 16);
			num2 = 20;
			num3 = 5;
			num = 49;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Southern Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 6;
			num = 120;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Sunrise Yellow Shirt*/, 16);
			num2 = 20;
			num3 = 7;
			num = 45;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*White Shirt*/, 16);
			num2 = 20;
			num3 = 8;
			num = 115;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Stone Shirt*/, 16);
			num2 = 20;
			num3 = 9;
			num = 105;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Earth Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 10;
			num = 90;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Green Check Shirt*/, 16);
			num2 = 20;
			num3 = 11;
			num = 95;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Country Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 12;
			num = 39;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Orange Tight Check Shirt*/, 16);
			num2 = 20;
			num3 = 13;
			num = 95;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Bright Blue Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 14;
			num = 35;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Blue Check Shirt*/, 16);
			num2 = 20;
			num3 = 15;
			num = 95;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Gray Hoodie*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 21;
			num3 = 1;
			num = 60;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*LSGC Gray Hoodie*/, 16);
			num2 = 21;
			num3 = 2;
			num = 70;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*LSGC Forest Hoodie*/, 16);
			num2 = 21;
			num3 = 4;
			num = 90;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Blauser Hoodie*/, 16);
			num2 = 21;
			num3 = 6;
			num = 70;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Penetrators Orange Hoodie*/, 16);
			num2 = 21;
			num3 = 7;
			num = 95;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 21;
			num3 = 8;
			num = 105;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Blue Hoodie*/, 16);
			num2 = 21;
			num3 = 9;
			num = 95;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Green Hoodie*/, 16);
			num2 = 21;
			num3 = 10;
			num = 110;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*LS Jardineros Hoodie*/, 16);
			num2 = 21;
			num3 = 11;
			num = 98;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Ash 18 Hoodie*/, 16);
			num2 = 21;
			num3 = 12;
			num = 88;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Red Mist XI Hoodie*/, 16);
			num2 = 21;
			num3 = 13;
			num = 98;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Eris Charcoal Hoodie*/, 16);
			num2 = 21;
			num3 = 14;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*OG Hoodie*/, 16);
			num2 = 21;
			num3 = 15;
			num = 98;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Distressed Leather Jacket*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 1;
			num = 4950;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chestnut Leather Jacket*/, 16);
			num2 = 22;
			num3 = 2;
			num = 4195;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Oxblood Leather Jacket*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3195;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Vintage Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 4;
			num = 2950;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Brown Leather Jacket*/, 16);
			num2 = 22;
			num3 = 5;
			num = 3950;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Silver Sports Coat*/, 16);
			num2 = 23;
			num3 = 0;
			num = 3200;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Gray-Green Sports Coat*/, 16);
			num2 = 23;
			num3 = 1;
			num = 3200;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Slate Sports Coat*/, 16);
			num2 = 23;
			num3 = 2;
			num = 3200;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Gray Sports Coat*/, 16);
			num2 = 23;
			num3 = 3;
			num = 3200;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 4;
			num = 3200;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Pale Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 5;
			num = 3200;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*White Sports Coat*/, 16);
			num2 = 23;
			num3 = 6;
			num = 3200;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Warm Gray Sports Coat*/, 16);
			num2 = 23;
			num3 = 7;
			num = 3200;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Cream Sports Coat*/, 16);
			num2 = 23;
			num3 = 8;
			num = 3200;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Midnight Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 9;
			num = 3200;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Off-White Sports Coat*/, 16);
			num2 = 23;
			num3 = 10;
			num = 3200;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Charcoal Wool Sports Coat*/, 16);
			num2 = 23;
			num3 = 11;
			num = 3200;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Charcoal Sports Coat*/, 16);
			num2 = 23;
			num3 = 12;
			num = 3200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Ash Plaid Sports Coat*/, 16);
			num2 = 23;
			num3 = 13;
			num = 3200;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Beige Sports Coat*/, 16);
			num2 = 23;
			num3 = 14;
			num = 3200;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Brown Sports Coat*/, 16);
			num2 = 23;
			num3 = 15;
			num = 3200;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Charcoal Sweater*/, 16);
			num2 = 24;
			num3 = 0;
			num = 1350;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Gray Sweater*/, 16);
			num2 = 24;
			num3 = 1;
			num = 1400;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Beige Sweater*/, 16);
			num2 = 24;
			num3 = 2;
			num = 1200;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Red Sweater*/, 16);
			num2 = 24;
			num3 = 3;
			num = 1250;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Pale Blue Sweater*/, 16);
			num2 = 24;
			num3 = 4;
			num = 1350;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Pale Amethyst Sweater*/, 16);
			num2 = 24;
			num3 = 5;
			num = 1300;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Blue Sweater*/, 16);
			num2 = 24;
			num3 = 6;
			num = 1380;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Pale Jade Sweater*/, 16);
			num2 = 24;
			num3 = 7;
			num = 1340;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Orange Sweater*/, 16);
			num2 = 24;
			num3 = 8;
			num = 1380;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Lemon Sweater*/, 16);
			num2 = 24;
			num3 = 9;
			num = 1250;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Pale Blue Shirt*/, 16);
			num2 = 25;
			num3 = 0;
			num = 840;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Pink Shirt*/, 16);
			num2 = 25;
			num3 = 1;
			num = 840;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*White Shirt*/, 16);
			num2 = 25;
			num3 = 2;
			num = 840;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Gray Shirt*/, 16);
			num2 = 25;
			num3 = 3;
			num = 840;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Charcoal Shirt*/, 16);
			num2 = 25;
			num3 = 4;
			num = 840;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Blue Shirt*/, 16);
			num2 = 25;
			num3 = 5;
			num = 840;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Topaz Shirt*/, 16);
			num2 = 25;
			num3 = 6;
			num = 840;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Black Shirt*/, 16);
			num2 = 25;
			num3 = 7;
			num = 840;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Bare Chested*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Eris White Sweater Vest*/, 16);
			num2 = 28;
			num3 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Lobon Sweater Vest*/, 16);
			num2 = 28;
			num3 = 1;
			num = 130;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Eris Blue Sweater Vest*/, 16);
			num2 = 28;
			num3 = 2;
			num = 110;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
			num2 = 29;
			num3 = 0;
			flag = true;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Gray Jacket*/, 16);
			num2 = 30;
			num3 = 0;
			num = 290;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Black Jacket*/, 16);
			num2 = 30;
			num3 = 1;
			num = 320;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Red Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 0;
			num = 59;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Blue Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 1;
			num = 55;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Black Winter Shirt*/, 16);
			num2 = 31;
			num3 = 2;
			num = 59;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Brown Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 3;
			num = 49;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_182(int iParam0) // Position - 0x2781B Hash - 0x8425A109 ^0x299A4A6F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Charcoal Jacket*/, 16);
			num2 = 0;
			num3 = 2;
			num = 3500;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Slate Jacket*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Topaz Jacket*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Pale Blue Jacket*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Cream Jacket*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Olive Jacket*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Off-White Jacket*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Navy Jacket*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Beige Jacket*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Smoke Jacket*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Blue-Gray Jacket*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Ash Jacket*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Sand Jacket*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Black Jacket*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			num = 20;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			num = 18;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 2;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 3;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Suburban Yellow T-Shirt*/, 16);
			num2 = 2;
			num3 = 4;
			num = 19;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Rearwall Slate T-Shirt*/, 16);
			num2 = 2;
			num3 = 5;
			num = 20;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Rearwall Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 6;
			num = 22;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Rearwall Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 7;
			num = 18;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Suburban Navy T-Shirt*/, 16);
			num2 = 2;
			num3 = 8;
			num = 39;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Suburban Russet T-Shirt*/, 16);
			num2 = 2;
			num3 = 9;
			num = 32;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Suburban Orange T-Shirt*/, 16);
			num2 = 2;
			num3 = 10;
			num = 35;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Suburban Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 11;
			num = 35;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*White T-Shirt*/, 16);
			num2 = 2;
			num3 = 12;
			num = 210;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Forest Green T-Shirt*/, 16);
			num2 = 2;
			num3 = 13;
			num = 250;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Pale Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 14;
			num = 290;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Ash T-Shirt*/, 16);
			num2 = 2;
			num3 = 15;
			num = 310;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Brown Shooting Vest*/, 16);
			num2 = 7;
			num3 = 0;
			num = 150;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Woodland Shooting Vest*/, 16);
			num2 = 7;
			num3 = 1;
			num = 160;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Taupe Shooting Vest*/, 16);
			num2 = 7;
			num3 = 2;
			num = 150;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 7;
			num3 = 3;
			num = 150;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Field Shooting Vest*/, 16);
			num2 = 7;
			num3 = 4;
			num = 160;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Forest Shooting Vest*/, 16);
			num2 = 7;
			num3 = 5;
			num = 160;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Blue-Gray Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*White Shirt*/, 16);
			num2 = 8;
			num3 = 1;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camel Shirt*/, 16);
			num2 = 8;
			num3 = 2;
			num = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Black Shirt*/, 16);
			num2 = 8;
			num3 = 3;
			num = 55;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Citrus Hawaiian Shirt*/, 16);
			num2 = 8;
			num3 = 4;
			num = 55;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Orange Grove Shirt*/, 16);
			num2 = 8;
			num3 = 5;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Parrot Print Shirt*/, 16);
			num2 = 8;
			num3 = 6;
			num = 58;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Blue Geometric Shirt*/, 16);
			num2 = 8;
			num3 = 7;
			num = 62;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Gray Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 8;
			num = 65;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Peach Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 9;
			num = 65;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Tropical Shirt*/, 16);
			num2 = 8;
			num3 = 10;
			num = 68;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Navy Floral Shirt*/, 16);
			num2 = 8;
			num3 = 11;
			num = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Lime Plaid Shirt*/, 16);
			num2 = 8;
			num3 = 12;
			num = 55;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Brown Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 13;
			num = 62;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Vintage Hawaiian Shirt*/, 16);
			num2 = 8;
			num3 = 14;
			num = 58;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Blue Plaid Shirt*/, 16);
			num2 = 8;
			num3 = 15;
			num = 58;
			break;
	
		default:
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_183(int iParam0) // Position - 0x27EA7 Hash - 0x646F46FD ^0x952E11FD
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*The Wood*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Clippered Cut*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Grown Out*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Slicker*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_131(num6, iParam0, 6, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_184(int iParam0) // Position - 0x27F8E Hash - 0x17A3D842 ^0x26EB5905
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_79031[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_131(num6, iParam0, 7, -1);
			return;
	}

	func_124(&Global_79031[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_185() // Position - 0x2808E Hash - 0xE5F61993 ^0xEFD41040
{
	Global_79031[0 /*14*/].f_1 = -1;
	Global_79031[0 /*14*/].f_2 = -1;
	Global_79031[0 /*14*/].f_5 = -1;
	Global_79031[0 /*14*/].f_3 = -1;
	Global_79031[0 /*14*/].f_4 = -1;
	Global_79031[0 /*14*/].f_7 = 0;
	Global_79031[0 /*14*/].f_6 = 0;
	Global_79031[0 /*14*/].f_13 = -1;
	Global_79031[0 /*14*/].f_12 = 0;
	Global_79031[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_79031[0 /*14*/].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_186(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0x28107 Hash - 0x1B00EC8E ^0x386C7313
{
	Hash entityModel;
	ePedComponentType type;
	int i;
	ePedComponentType j;
	int k;
	var unk;
	var unk18;
	int l;
	var unk28;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	Global_79031[1 /*14*/] = { func_121(entityModel, epctParam1, epctParam2, -1) };

	if (!IS_BIT_SET(Global_79031[1 /*14*/].f_6, 0))
		return false;

	if (epctParam1 == 12)
	{
		unk = { func_101(entityModel, epctParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99 && i != 12 && i != 14)
			{
				if (!func_186(pedParam0, i, unk[i]))
				{
					if (i == 13)
					{
						unk18 = { func_98(entityModel, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							if (!func_186(pedParam0, 14, unk18[j]))
							{
								for (k = 0; k <= 19; k = k + 1)
								{
									Global_79031[2 /*14*/] = { func_121(entityModel, 14, k, -1) };
								
									if (Global_79031[2 /*14*/].f_12 == j)
										if (func_186(pedParam0, 14, k))
											if (!func_74(entityModel, epctParam2, 14, k, &unk, &Global_79031[2 /*14*/]))
												return false;
								}
							}
						}
					}
					else
					{
						type = func_109(pedParam0, i);
						Global_79031[2 /*14*/] = { func_121(entityModel, i, type, -1) };
					
						if (!func_74(entityModel, epctParam2, i, type, &unk, &Global_79031[2 /*14*/]))
							return false;
					}
				}
			}
		}
	
		return true;
	}
	else if (epctParam1 == 13)
	{
		unk28 = { func_98(entityModel, epctParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_186(pedParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (epctParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(pedParam0, Global_79031[1 /*14*/].f_12, 1) == Global_79031[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_79031[1 /*14*/].f_12) == Global_79031[1 /*14*/].f_4 || Global_79031[1 /*14*/].f_3 == PV_COMP_INVALID)
			return true;
	}
	else if (Global_79031[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_78(epctParam1)) && Global_79031[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_78(epctParam1)))
	{
		return true;
	}

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x28360 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_188();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_188() // Position - 0x28379 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_49(character) && !func_129(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_49(Global_114370.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x28476 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x284B3 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_49(character))
		return func_191(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_191(eCharacter echParam0) // Position - 0x284D8 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2139[echParam0 /*29*/];
}

void func_192(BOOL bParam0) // Position - 0x284E7 Hash - 0xD10400C0 ^0xB6845444
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!PLAYER::IS_PLAYER_DEAD(playerIndex))
	{
		if (bParam0)
		{
		}
	
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_EXPLOSIONS);
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_PROJECTILES);
	}

	func_193(true, true, false, false, false, false, false);
	return;
}

void func_193(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x28526 Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_202(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20813.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_201())
				Global_20813.f_1 = 3;
		
			Global_22166 = 5;
		}
	
		func_200(true, bParam3, bParam2, false);
		Global_64044 = true;
		Global_76372 = true;
		Global_79246 = true;
	}
	else
	{
		func_202(0);
		HUD::THEFEED_RESUME();
		Global_64044 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_200(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_198(PLAYER::PLAYER_ID()) && !func_195(PLAYER::PLAYER_ID(), 0) && !func_194() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_198(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_79246 = false;
	}

	return;
}

BOOL func_194() // Position - 0x28673 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

BOOL func_195(Player plParam0, int iParam1) // Position - 0x2868D Hash - 0x1A32E11A ^0x6AADE226
{
	BOOL flag;

	if (!func_197(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_196(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845263[plParam0 /*877*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_196(int iParam0, BOOL bParam1) // Position - 0x286E6 Hash - 0x1DCD393E ^0x1DCD393E
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_116();

	if (Global_1575059[num] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574919[num];
		bParam1;
	}

	return character;
}

BOOL func_197(Player plParam0) // Position - 0x28727 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_198(Player plParam0) // Position - 0x28749 Hash - 0x68897CDD ^0x62820466
{
	if (func_195(plParam0, 0))
		return true;

	if (func_199())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_199() // Position - 0x28788 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_200(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x28796 Hash - 0x3167F4C7 ^0xCE6B9B6A
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_201() // Position - 0x287C9 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_202(int iParam0) // Position - 0x287F0 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8683, 13);
	else
		MISC::CLEAR_BIT(&Global_8683, 13);

	return;
}

void func_203() // Position - 0x28813 Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21032 = 0;
	func_204();
	return;
}

void func_204() // Position - 0x28823 Hash - 0xF6D04E68 ^0x80AE5309
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}

	return;
}

BOOL func_205(int iParam0, int iParam1, int iParam2) // Position - 0x28844 Hash - 0x45E861F0 ^0xB70C2EC3
{
	int num;

	num = 1;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_212(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam1, 1, 1056964608, false, true, false))
			{
				num = 0;
			}
			else if (iParam2 == 1)
			{
				num = 0;
			
				if (!func_211(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				num = 0;
		}
	}

	func_210();

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		func_207();
		num = 0;
	}

	if (num == 0)
		return false;

	if (iParam0 == 1)
		if (!func_206())
			return false;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	return true;
}

BOOL func_206() // Position - 0x28918 Hash - 0x7E48580B ^0x77F2F890
{
	BOOL hasCutsceneLoaded;

	hasCutsceneLoaded = CUTSCENE::HAS_CUTSCENE_LOADED();

	if (!Global_79247)
		if (!hasCutsceneLoaded)
			Global_79247 = true;

	return hasCutsceneLoaded;
}

void func_207() // Position - 0x2893B Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21032 = 0;
	func_208();
	return;
}

void func_208() // Position - 0x2894B Hash - 0xE32CF1EF ^0xB9A7BEB2
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

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x289A2 Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_210() // Position - 0x289C4 Hash - 0x2A0AC5B7 ^0xAF27577A
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
	return;
}

BOOL func_211(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x28A15 Hash - 0x5CB13EA9 ^0x50B73240
{
	if (func_7(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_212(Vehicle veParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x28A48 Hash - 0xEF9D4F61 ^0xC848BDEA
{
	func_214(bParam5, bParam6);
	func_213(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, iParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_213(Vehicle veParam0) // Position - 0x28A9F Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_214(BOOL bParam0, BOOL bParam1) // Position - 0x28ACB Hash - 0xC86614C6 ^0xCD39041A
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam0)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	return;
}

void func_215() // Position - 0x28C1C Hash - 0x49551D81 ^0xF7A3859D
{
	if (bLocal_39)
	{
		if (INTERIOR::IS_VALID_INTERIOR(inLocal_49))
			INTERIOR::UNPIN_INTERIOR(inLocal_49);
	
		bLocal_39 = false;
	}

	if (bLocal_40)
	{
		if (INTERIOR::IS_VALID_INTERIOR(inLocal_50))
			INTERIOR::UNPIN_INTERIOR(inLocal_50);
	
		bLocal_40 = false;
	}

	return;
}

void func_216(BOOL bParam0) // Position - 0x28C52 Hash - 0xD3F6F7D0 ^0x461D4475
{
	if (bParam0)
	{
		if (!bLocal_38)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		
			bLocal_38 = true;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		bLocal_38 = false;
	}

	return;
}

BOOL func_217() // Position - 0x28CAD Hash - 0x338E841B ^0x338E841B
{
	int num;

	num = func_218(&iLocal_45, 0, 0, false, 0);

	if (num == 1)
		return true;

	return false;
}

int func_218(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x28CCC Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98850.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_222(0))
			return 0;
	
		Global_43886 = Global_43886 + 1;
		*uParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43922 = iParam2;
		Global_43884 = *uParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43883; i = i + 1)
			{
				if (Global_43889[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43884 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43883 == 8)
			return 0;
	
		Global_43886 = Global_43886 + 1;
		*uParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883 = Global_43883 + 1;
	
		if (iParam4 != 0)
			func_219(uParam0, iParam4);
	}

	return 2;
}

void func_219(var uParam0, int iParam1) // Position - 0x28E03 Hash - 0x6AC97785 ^0x6AC97785
{
	int i;

	if (Global_43883 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43883; i = i + 1)
	{
		if (Global_43889[i /*4*/] == *uParam0)
			Global_43889[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x28E52 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_221(iParam0, Global_43922);
}

BOOL func_221(int iParam0, int iParam1) // Position - 0x28E63 Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_222(int iParam0) // Position - 0x29044 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_223() // Position - 0x29066 Hash - 0x665B24B1 ^0xC998E7AF
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return false;

	if (_GET_CURRENT_PLAYER_CHARACTER() != CHAR_MICHAEL)
		return false;

	if (func_225())
		return false;

	if (Global_32831)
		return false;

	if (Global_64032)
		return false;

	if (Global_98292)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_224())
		return false;

	if (Global_44469 != -1)
		if (Global_114370.f_7691[Global_44469 /*15*/].f_3 >= 2)
			return false;

	return true;
}

BOOL func_224() // Position - 0x290F3 Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_225() // Position - 0x2910D Hash - 0x1CB029D8 ^0x1CB029D8
{
	if (Global_43922 == 15)
		return false;

	return true;
}

BOOL func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x29122 Hash - 0xDDE15471 ^0xA130E15A
{
	float num;

	num = { uParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_227(var uParam0, float fParam1, var uParam2, var uParam3) // Position - 0x2914C Hash - 0xEF71070A ^0x3D4398AD
{
	BOOL flag;
	int num;
	int num2;

	uParam0->f_46 < 3;
	flag = false;
	num = 0;
	num2 = uParam0->f_46 - 1;

	while (num < uParam0->f_46)
	{
		if (uParam0->[num /*3*/].f_1 < fParam1.f_1 && uParam0->[num2 /*3*/].f_1 >= fParam1.f_1 || uParam0->[num2 /*3*/].f_1 < fParam1.f_1 && uParam0->[num /*3*/].f_1 >= fParam1.f_1)
			if (uParam0->[num /*3*/] + (((fParam1.f_1 - uParam0->[num /*3*/].f_1) / (uParam0->[num2 /*3*/].f_1 - uParam0->[num /*3*/].f_1)) * (uParam0->[num2 /*3*/] - uParam0->[num /*3*/])) < fParam1)
				flag = !flag;
	
		num2 = num;
		num = num + 1;
	}

	return flag;
}

void func_228(var uParam0) // Position - 0x29208 Hash - 0x6A0A7C37 ^0x4AB04E31
{
	int i;
	float num;

	uParam0->f_51 == 0;
	uParam0->f_46 < 3;

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		uParam0->f_47 = { uParam0->f_47 + uParam0->[i /*3*/] };
	}

	uParam0->f_47 = { uParam0->f_47 / F2V(SYSTEM::TO_FLOAT(i)) };

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		num = SYSTEM::VDIST2(uParam0->f_47, uParam0->[i /*3*/]);
	
		if (num > uParam0->f_50)
			uParam0->f_50 = num;
	}

	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
	return;
}

void func_229(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x292A8 Hash - 0x488A8B25 ^0x21309DD6
{
	uParam0->f_51 == 0;
	uParam0->f_46 >= 15;
	uParam0->[uParam0->f_46 /*3*/] = { fParam1 };
	uParam0->f_46 = uParam0->f_46 + 1;
	return;
}

void func_230(var uParam0) // Position - 0x292D9 Hash - 0x94803123 ^0x38D79261
{
	uParam0->f_51;
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
	return;
}

void func_231() // Position - 0x29300 Hash - 0xA6F2CDE9 ^0x50027DA8
{
	if (iLocal_45 != -1)
	{
		if (bLocal_37)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				HUD::CLEAR_HELP(true);
		
			func_6(1, 1, 1, true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		
			if (CAM::DOES_CAM_EXIST(caLocal_44))
			{
				CAM::SET_CAM_ACTIVE(caLocal_44, false);
				CAM::DESTROY_CAM(caLocal_44, false);
			}
		
			STREAMING::NEW_LOAD_SCENE_STOP();
			AUDIO::TRIGGER_MUSIC_EVENT("MICHAELS_HOUSE_STOP");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	
		func_232(&iLocal_45);
	}

	func_215();
	BRAIN::REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_232(var uParam0) // Position - 0x2937B Hash - 0x995C9E2 ^0x995C9E2
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_43884))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = false;
	Global_64036 = 0;
	return;
}

int func_233(int iParam0) // Position - 0x293B8 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9088.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_114370.f_9088.f_99.f_219[num], offset);
	return 1;
}

