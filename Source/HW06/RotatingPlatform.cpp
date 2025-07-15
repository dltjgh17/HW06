#include "RotatingPlatform.h"


ARotatingPlatform::ARotatingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}


void ARotatingPlatform::BeginPlay()
{
	Super::BeginPlay();
}


void ARotatingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(RotationSpeed * DeltaTime);
}

