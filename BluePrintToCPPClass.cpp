
#include "GameFramework/HUD.h" //Import this because I'm finding a AHUD class in this example
#include "UObject/ConstructorHelpers.h" //This is need for the FClassFinder function

static ConstructorHelpers::FClassFinder<AHUD> ALoginHUD(TEXT("/Game/Interfaces/Login/LoginHUD")); //The path to the blueprint within your project
if (ALoginHUD.Class != nullptr)
{
	HUDClass = ALoginHUD.Class;
	//HUDClass is a variable in AGameMode. It sets the default HUDClass on Play
	//ALoginHUD is the pointer output of the function FClassFinder
}