// This file has been automatically generated by the Unreal Header Implementation tool

#include "Creature/Actions/FGCreatureActionAnimatedBase.h"

UFGCreatureActionAnimatedBase::UFGCreatureActionAnimatedBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

}
void UFGCreatureActionAnimatedBase::CancelAction_Implementation(){ }
void UFGCreatureActionAnimatedBase::CleanupAction_Implementation(bool actionSuccess){ }
bool UFGCreatureActionAnimatedBase::StartActionAnimation( UAnimMontage* montage, bool stopOtherMontages , bool broadcastToClients){ return bool(); }
bool UFGCreatureActionAnimatedBase::StopActionAnimation( UAnimMontage* montage, bool broadcastToClients){ return bool(); }
void UFGCreatureActionAnimatedBase::OnAnimationFinished_Implementation( UAnimMontage* montage, bool WasInterrupted){ }
void UFGCreatureActionAnimatedBase::OnAnimationBlendingOut_Implementation( UAnimMontage* montage, bool WasInterrupted){ }
void UFGCreatureActionAnimatedBase::OnAnimNotify_Implementation(const  UFGAnimNotify* Notify){ }
void UFGCreatureActionAnimatedBase::NetMulticast_StartActionAnimation_Implementation( UAnimMontage* montage, bool stopOtherMontages){ }
void UFGCreatureActionAnimatedBase::NetMulticast_StopActionAnimation_Implementation( UAnimMontage* montage){ }
void UFGCreatureActionAnimatedBase::NetMulticast_CancelActionAnimation_Implementation(){ }
void UFGCreatureActionAnimatedBase::StartActionAnimation_Internal( UAnimMontage* montage, bool stopOtherMontages){ }
void UFGCreatureActionAnimatedBase::StopActionAnimation_Internal( UAnimMontage* montage){ }
void UFGCreatureActionAnimatedBase::OnAnimNotify_Internal(const  UFGAnimNotify* Notify, AActor* Owner){ }
void UFGCreatureActionAnimatedBase::BindAnimNotifyDelegate(const UAnimMontage* montage, bool shouldBind){ }
void UFGCreatureActionAnimatedBase::OnMontageEnded( UAnimMontage* Montage, bool Interrupted){ }
void UFGCreatureActionAnimatedBase::OnMontageBlendingOutStarted( UAnimMontage* Montage, bool Interrupted){ }
