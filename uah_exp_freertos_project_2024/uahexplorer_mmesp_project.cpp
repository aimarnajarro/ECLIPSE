<<<<<<< HEAD
//##############################################################################
//###############     This file has been generated by EDROOM     ###############
//##############################################################################
 
#include <public/edroom_glue.h>
 
 
//******************************************************************************
// include deployment edroom components
 
#include <public/uahexplorer_iface_v1.h>
#include <public/ccexplorermanager_iface_v1.h>
#include <public/cctm_channelctrl_iface_v1.h>
#include <public/cchk_fdirmng_iface_v1.h>
#include <public/ccbkgtcexec_iface_v1.h>
 
#ifdef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	CEDROOMSystemDeployment systemDeployment;
 
#endif
 
 
 
int main (void){
 
 
 
#ifndef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	CEDROOMSystemDeployment systemDeployment;
 
#endif
 
 
	UAHExplorer	comp1(1, 13, EDROOMprioNormal, 1024, systemDeployment.GetComp1Memory());
	CCExplorerManager	comp2(2, 11, EDROOMprioNormal, 1024, systemDeployment.GetComp2Memory());
	CCTM_ChannelCtrl	comp3(3, 10, EDROOMprioHigh, 1024, systemDeployment.GetComp3Memory());
	CCHK_FDIRMng	comp4(4, 14, EDROOMprioLow, 1024, systemDeployment.GetComp4Memory());
	CCBKGTCExec	comp5(5, 11, EDROOMprioVeryLow, 1024, systemDeployment.GetComp5Memory());
 
	systemDeployment.Config(&comp1, &comp2, &comp3, &comp4, &comp5);
 
	systemDeployment.Start();
 
	return 0;
 
}
=======
//##############################################################################
//###############     This file has been generated by EDROOM     ###############
//##############################################################################
 
#include <public/edroom_glue.h>
 
 
//******************************************************************************
// include deployment edroom components
 
#include <public/uahexplorer_iface_v1.h>
#include <public/ccexplorermanager_iface_v1.h>
#include <public/cctm_channelctrl_iface_v1.h>
#include <public/cchk_fdirmng_iface_v1.h>
#include <public/ccbkgtcexec_iface_v1.h>
#include <public/ccguidance_iface_v1.h>
 
#ifdef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	CEDROOMSystemDeployment systemDeployment;
 
#endif
 
 
 
int main (void){
 
 
 
#ifndef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	CEDROOMSystemDeployment systemDeployment;
 
#endif
 
 
	UAHExplorer	comp1(1, 13, EDROOMprioNormal, 1024, systemDeployment.GetComp1Memory());
	CCExplorerManager	comp2(2, 11, EDROOMprioNormal, 1024, systemDeployment.GetComp2Memory());
	CCTM_ChannelCtrl	comp3(3, 10, EDROOMprioHigh, 1024, systemDeployment.GetComp3Memory());
	CCHK_FDIRMng	comp4(4, 14, EDROOMprioLow, 1024, systemDeployment.GetComp4Memory());
	CCBKGTCExec	comp5(5, 11, EDROOMprioVeryLow, 1024, systemDeployment.GetComp5Memory());
	CCGuidance	comp6(6, 14, EDROOMprioVeryHigh, 1024, systemDeployment.GetComp6Memory());
 
	systemDeployment.Config(&comp1, &comp2, &comp3, &comp4, &comp5, &comp6);
 
	systemDeployment.Start();
 
	return 0;
 
}
>>>>>>> branch 'main' of https://github.com/aimarnajarro/ECLIPSE.git
