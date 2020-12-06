// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnBase.generated.h"

class UCapsuleComponent;
class AProjectileBase;

UCLASS()
class TOONTANKS_API APawnBase : public APawn
{
	GENERATED_BODY()

private:
	// COMPONENTS
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;
	// VARIABLES
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile Type", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AProjectileBase> ProjectileClass;

public:
	// Sets default values for this pawn's properties
	APawnBase();

	virtual void HandleDestruction();

	// Tick, setup, begin are not needed in base class
	// // Called every frame
	// virtual void Tick(float DeltaTime) override;

	// // Called to bind functionality to input
	// virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DEMO")
	// int VisibleAnywhere;
	// UPROPERTY(VisibleDefaultsOnly, Category = "DEMO")
	// int VisibleDefaultsOnly;
	// UPROPERTY(VisibleInstanceOnly, Category = "DEMO")
	// int VisibleInstanceOnly;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DEMO")
	// int EditAnywhere;
	// UPROPERTY(EditDefaultsOnly, Category = "DEMO")
	// int EditDefaultsOnly;
	// UPROPERTY(EditInstanceOnly, Category = "DEMO")
	// int EditInstanceOnly;

protected:
	// // Called when the game starts or when spawned
	// virtual void BeginPlay() override;

	void RotateTurret(FVector LookAtTarget);

	void Fire();

};
