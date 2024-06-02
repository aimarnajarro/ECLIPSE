//para habilitar deshabilitar el 5,12,19
#define FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step0 (UNITIME_AFTER_POWER_ON + 35)
#define FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step1 (FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step0 + 10)
#define FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step2 (FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step1 + 10)

#ifdef FT_SOLO_EPD_Event_Action_0080

EmuGSS_TCProgram12_5 prog_FT_0080_step_0(FT_0080_TIME_step0,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step 0, Config PMODID 0 for monitoring PID 1",
		0, 1, 5, 1, 0x4000, 10, 0x4001);

EmuGSS_TCProgram12_1 prog_FT_0080_step_1(FT_0080_TIME_step1,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step 1, Enable Monitoring PMONID 0", 0);

EmuGSS_TCProgram5_5 prog_FT_0080_step_2 (FT_0080_TIME_step2,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step y, Enable TM(5,4) RIDs generation.",
		0x4001);)

EmuGSS_TCProgram5_5 prog_FT_0080_step_3 (FT_0080_TIME_step3,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step y, Enable TM(5,4) RIDs generation.",
		0x4000);)

EmuGSS_TCProgram19_1_Action_2_1 prog_FT_0080_step_4 (FT_0080_TIME_step4,
		"Me creo la asociacion de la 0x4001 con 2_1 device 1 on", 0x4001,1,1);

EmuGSS_TCProgram19_4 prog_FT_0080_step5 (FT_0080_TIME_step5,
		"Enable en el step5 el EvAction", 0x4001);

EmuGSS_TCProgram20_3 prog_FT_0080_step_6(FT_0080_TIME_step6,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step 2, Update PID 1 to 99", 1, 99);

//ahora al haberlo sacado por arriba, me va a avisar

EmuGSS_TCProgram20_3 prog_FT_0080_step_7(FT_0080_TIME_step7,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step 2, Update PID 1 to 99", 1, 5);

EmuGSS_TCProgram5_6 prog_FT_0080_step_8 (FT_0080_TIME_step8,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step y, disable TM(5,4) RIDs generation.",
		0x4001);

EmuGSS_TCProgram20_3 prog_FT_0080_step_9(FT_0080_TIME_step9,
		"FT_SOLO_EPD_ICU_Monitoring_0080 step 2, Update PID 1 to 99", 1, 99);

//como lo he deshabilitado, ahora cuando se salga no me va a mandar un report y tampoco me va a hacer el 19_1, aunque este habilitado
#endif
