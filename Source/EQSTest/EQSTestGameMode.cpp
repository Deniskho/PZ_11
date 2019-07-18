// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EQSTestGameMode.h"
#include "EQSTestPlayerController.h"
#include "EQSTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEQSTestGameMode::AEQSTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEQSTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}