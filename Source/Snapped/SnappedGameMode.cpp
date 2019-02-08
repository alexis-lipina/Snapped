// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SnappedGameMode.h"
#include "SnappedHUD.h"
#include "SnappedCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASnappedGameMode::ASnappedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASnappedHUD::StaticClass();
}
