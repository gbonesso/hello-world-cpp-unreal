// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloWorldCPPGameMode.h"
#include "HelloWorldCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHelloWorldCPPGameMode::AHelloWorldCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
