// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingPlatform.generated.h"

UCLASS()
class HW06_API ARotatingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotatingPlatform();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// �𸮾� �������� ���� : �������Ʈ���� �а� �� �� �ְ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotating")
	FRotator RotationSpeed = FRotator(0.f, 90.f, 0.f);

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

};
