// This file has been automatically generated by the Unreal Header Implementation tool

#include "WheeledVehicles/FGWheeledVehicleAIController.h"

#if DEBUG_SELF_DRIVING
void AFGWheeledVehicleAIController::DrawDebug(float deltaTime, const Input& input, const Output& output){ }
#endif 
AFGWheeledVehicleAIController::AFGWheeledVehicleAIController() : Super() {
	this->mDetection = nullptr;
}
void AFGWheeledVehicleAIController::OnPossess(APawn* InPawn){ }
void AFGWheeledVehicleAIController::OnUnPossess(){ }
const FString& AFGWheeledVehicleAIController::GetCurrentPlanName() const{ return *(new FString); }
void AFGWheeledVehicleAIController::Tick(float DeltaTime){ }
void AFGWheeledVehicleAIController::CalculateInput(float deltaTime, Input& input) const{ }
AFGWheeledVehicleAIController::Plan AFGWheeledVehicleAIController::PickPlan(const Input& input) const{ return Plan(); }
void AFGWheeledVehicleAIController::Halt(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::FollowInReverse(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::ReverseToAlignment(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::ForwardToAlignment(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::FollowTarget(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::DriveAroundTarget(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::AwaitTarget(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::PauseAtTarget(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::StayAtDock(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::AwaitBlock(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::BreakOut(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::GhostToNext(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::NoFuel(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::NoTarget(const Input& input, Output& output){ }
void AFGWheeledVehicleAIController::Follow(const Input& input, Output& output, bool reversing) const{ }
void AFGWheeledVehicleAIController::CalculateThrottle(const Input& input, Output& output, bool shouldReverse){ }
void AFGWheeledVehicleAIController::ApplyOutput(const Input& input, const Output& output){ }
bool AFGWheeledVehicleAIController::FindNewTarget(){ return bool(); }
void AFGWheeledVehicleAIController::CreatePlans(){ }
void AFGWheeledVehicleAIController::CreateDetectionBox(){ }
bool AFGWheeledVehicleAIController::CheckCollisions(float deltaTime){ return bool(); }
const FString& AFGWheeledVehicleAIController::GetPlanName(Plan plan) const{ return *(new FString); }
