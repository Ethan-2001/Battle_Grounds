// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Battle_GroundsGameMode.h"
#include "Battle_GroundsHUD.h"
#include "Battle_GroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABattle_GroundsGameMode::ABattle_GroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABattle_GroundsHUD::StaticClass();
}
