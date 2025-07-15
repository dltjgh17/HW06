#include "MovingPlatform.h"


AMovingPlatform::AMovingPlatform()
{

	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

}
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	
}
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceMoved >= MaxRange)
	{
		bMovingForward = !bMovingForward;
	}

	float Direction = bMovingForward ? 1.f : -1.f;
	FVector MoveOffset = GetActorForwardVector() * MoveSpeed * DeltaTime * Direction;
	SetActorLocation(CurrentLocation + MoveOffset);
}

