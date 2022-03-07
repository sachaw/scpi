void UndefinedFunction_00629678(void)
{
  scpi_register_command("*CLS", SCPI_CoreCls, 1);
  scpi_register_command("*ESE", SCPI_CoreEse, 1);
  scpi_register_command("*ESE?", SCPI_CoreEseQ, 1);
  scpi_register_command("*ESR?", SCPI_CoreEsrQ, 1);
  scpi_register_command("*IDN?", scpi_idnq,0);
  scpi_register_command("*OPC", SCPI_CoreOpc, 1);
  scpi_register_command("*OPC?", SCPI_CoreOpcQ, 1);
  scpi_register_command("*RST", SCPI_CoreRst, 1);
  scpi_register_command("*SRE", SCPI_CoreSre, 1);
  scpi_register_command("*SRE?", SCPI_CoreSreQ, 1);
  scpi_register_command("*STB?", SCPI_CoreStbQ, 1);
  scpi_register_command("*TST?", SCPI_CoreTstQ, 1);
  scpi_register_command("*WAI", SCPI_CoreWai, 1);
  scpi_register_command("SYSTem:ERRor?", SCPI_SystemErrorNextQ, 1);
  scpi_register_command("SYSTem:VERSion?", SCPI_SystemVersionQ, 1);
  scpi_register_command("SYSTem:COUNt?", SCPI_SystemErrorCountQ, 1);
  scpi_register_command("STATus:OPERation:CONDition?", SCPI_StatusOperationConditionQ , 1);
  scpi_register_command("STATus:OPERation:ENABle", SCPI_StatusOperationEnable, 1);
  scpi_register_command("STATus:OPERation[:EVENt]?", SCPI_StatusOperationEventQ, 1);
  scpi_register_command("STATus:QUEStionable:CONDition?", SCPI_StatusQuestionableConditionQ, 1);
  scpi_register_command("STATus:QUEStionable:ENABle", SCPI_StatusQuestionableEnable, 1);
  scpi_register_command("STATus:QUEStionable[:EVENt]?", SCPI_StatusQuestionableEventQ , 1);
  scpi_register_command("STATus:PRESet", SCPI_StatusPreset, 1);
}

void dev_register_time_cmd(void)
{
  scpi_if_register_scpi_cmd(":SYSTem:TIME", scpi_syst_comm_times, 1);
  scpi_if_register_scpi_cmd(":SYSTem:TIME?", scpi_syst_comm_timeq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:DATE", scpi_syst_comm_dates, 1);
  scpi_if_register_scpi_cmd(":SYSTem:DATE?", scpi_syst_comm_dateq, 1);
}

void dev_register_sys_reset_cmd(void)
{
  scpi_if_register_scpi_cmd(":SYSTem:PRESet", scpi_syst_reset, 1);
  scpi_if_register_scpi_cmd(":SYSTem:FDEFault", scpi_syst_factory_reset, 1);
  scpi_if_register_scpi_cmd("REBOOT", scpi_reboot, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PRESet:TYPE", scpi_syst_reset_type, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PRESet:TYPE?", scpi_sysq_reset_type, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PON:TYPE", scpi_syst_power_on_type, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PON:TYPE?", scpi_sysq_power_on_type, 1);
}

void dev_register_gpib_cmd(void)
{
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:GPIB:ADDRess", scpi_syst_comm_gpib_addr, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:GPIB:ADDRess?", scpi_syst_comm_gpib_addrq, 1);
}

void dev_register_eth_cmd(void)
{
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:TYPE", scpi_syst_comm_lan_modes, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:TYPE?", scpi_syst_comm_lan_modeq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:IPADdress", scpi_syst_comm_lan_ipad, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:IPADdress?", scpi_syst_comm_lan_ipadq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:SMASk", scpi_comm_lan_smas, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:SMASk?", scpi_comm_lan_smasq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:GATeway", scpi_comm_lan_gate, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:GATeway?", scpi_comm_lan_gateq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:MAC", scpi_comm_lan_mac, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:MAC?", scpi_comm_lan_macq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:HOSTname", (FuncDef3 *)&LAB_00649eec, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:LAN:HOSTname?", scpi_comm_lan_hostnameq, 1);
  scpi_if_register_scpi_cmd("NET_BRIDGE_ADDR?", scpi_net_bridge_addressq, 1);
}

void dev_register_sys_info_cmd(void)
{
  scpi_if_register_scpi_cmd("SRLN", scpi_srln, 1);
  scpi_if_register_scpi_cmd("SRLN?", scpi_srlnq, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE", scpi_sglt_upgrade, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE_CFG", scpi_sglt_upgrade_cfg, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE_PATH", scpi_sglt_upgrade_path, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE_CFG_PATH", scpi_sglt_upgrade_cfg_path, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-TEST-VAST-DATA", scpi_sglt_test_vast_data, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-TEST-VAST-DATA?", scpi_sglt_test_vast_data_q, 1);
  scpi_if_register_scpi_cmd("SCDP", scpi_sglt_printscreenq, 1);
  scpi_if_regsiter_scpi_bin_cmd("IDN-SGLT-PRI?", scpi_sglt_pri, 1);
  scpi_if_register_scpi_cmd("LOAD:CALI:FILE?", scpi_if_load_cali_file, 1);
}

void dev_register_chip_access_cmd(void)
{
  scpi_if_register_scpi_cmd("CHIP", scpi_chip, 1);
  scpi_if_register_scpi_cmd("CHIP?", scpi_chipq, 1);
}

void dev_register_debug_cmd(void)
{
  scpi_if_register_scpi_cmd("DMESg?", scpi_dmesgq, 1);
}

void dev_register_svn_version_cmd(void)
{
  scpi_if_register_scpi_cmd("SVNALL?", scpi_svnq, 1);
}

void dev_register_upload_cmd(void)
{
  scpi_if_register_scpi_cmd("MMEMory:UPLoad?", scpi_upload, 1);
}

void dev_register_license_cmd(void)
{
  scpi_if_register_scpi_cmd("LICENSE", scpi_license, 1);
  scpi_if_register_scpi_cmd("LICENSE?", scpi_licenseq, 1);
  scpi_if_register_scpi_cmd("LICENSE_KEY", scpi_key, 1);
  scpi_if_register_scpi_cmd("LICENSE_PR?", scpi_license_prq, 1);
  scpi_if_register_scpi_cmd("LICENSE_ID?", scpi_license_idq, 1);
  scpi_if_register_scpi_cmd("INNEr:PRODuction:MODE", scpi_set_production_mode, 1);
}

void dev_register_system_shell_cmd(void)
{
  scpi_if_register_scpi_cmd("SYSTem:FileSystem:Type?", scpi_check_file_system_type, 1);
}

void dev_register_boardtest_cmd(void)
{
  scpi_if_register_scpi_cmd("BOARDTEST?", scpi_device_boardtest_result, 1);
}

void dev_register_web_cmd(void)
{
  scpi_if_register_scpi_cmd("WEB:PSW", scpi_device_set_web_passwd, 0);
  scpi_if_register_scpi_cmd("WEB:PSW?", scpi_device_get_web_passwd, 0);
}

void dev_register_factory_information_cmd(void)
{
  scpi_if_register_scpi_cmd("FACTORYDATA", scpi_device_set_factory_information, 1);
  scpi_if_register_scpi_cmd("FACTORYDATA?", scpi_device_get_factory_information, 1);
}

void dev_register_scpi_cmd(void)
{
  scpi_if_register_scpi_cmd(":SYSTem:TIME", scpi_syst_comm_times, 1);
  scpi_if_register_scpi_cmd(":SYSTem:TIME?", scpi_syst_comm_timeq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:DATE", scpi_syst_comm_dates, 1);
  scpi_if_register_scpi_cmd(":SYSTem:DATE?", scpi_syst_comm_dateq, 1);
  dev_register_eth_cmd();
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:GPIB:ADDRess", scpi_syst_comm_gpib_addr, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:GPIB:ADDRess?", scpi_syst_comm_gpib_addrq, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PRESet", scpi_syst_reset, 1);
  scpi_if_register_scpi_cmd(":SYSTem:FDEFault", scpi_syst_factory_reset, 1);
  scpi_if_register_scpi_cmd("REBOOT", scpi_reboot, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PRESet:TYPE", scpi_syst_reset_type, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PRESet:TYPE?", scpi_sysq_reset_type, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PON:TYPE", scpi_syst_power_on_type, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PON:TYPE?", scpi_sysq_power_on_type, 1);
  dev_register_sys_info_cmd();
  scpi_if_register_scpi_cmd("CHIP", scpi_chip, 1);
  scpi_if_register_scpi_cmd("CHIP?", scpi_chipq, 1);
  scpi_if_register_scpi_cmd("DMESg?", scpi_dmesgq, 1);
  scpi_if_register_scpi_cmd("SVNALL?", scpi_svnq, 1);
  scpi_if_regsiter_scpi_bin_cmd("$$SY_FP", scpi_virtual_key, 0);
  scpi_if_register_scpi_cmd("MMEMory:UPLoad?", scpi_upload, 1);
  scpi_if_register_scpi_cmd("LICENSE", scpi_license, 1);
  scpi_if_register_scpi_cmd("LICENSE?", scpi_licenseq, 1);
  scpi_if_register_scpi_cmd("LICENSE_KEY", scpi_key, 1);
  scpi_if_register_scpi_cmd("LICENSE_PR?", scpi_license_prq, 1);
  scpi_if_register_scpi_cmd("LICENSE_ID?", scpi_license_idq, 1);
  scpi_if_register_scpi_cmd("INNEr:PRODuction:MODE", scpi_set_production_mode, 1);
  scpi_if_register_scpi_cmd("SYSTem:FileSystem:Type?", scpi_check_file_system_type, 1);
  scpi_if_register_scpi_cmd("BOARDTEST?", scpi_device_boardtest_result, 1);
  scpi_if_register_scpi_cmd("WEB:PSW", scpi_device_set_web_passwd, 0);
  scpi_if_register_scpi_cmd("WEB:PSW?", scpi_device_get_web_passwd, 0);
  scpi_if_register_scpi_cmd("FACTORYDATA", scpi_device_set_factory_information, 1);
  scpi_if_register_scpi_cmd("FACTORYDATA?", scpi_device_get_factory_information, 1);
}

void scpi_register_cmd_acq(void)
{
  scpi_if_register_cmd("ACQW", "ACQUIRE_WAY", scpi_acquire_type_set);
  scpi_if_register_cmd("ACQW?", "ACQUIRE_WAY?", scpi_acquire_type_get);
  scpi_if_register_cmd("AVGA", "AVERAGE_ACQUIRE", scpi_average_acquire_set);
  scpi_if_register_cmd("AVGA?", "AVERAGE_ACQUIRE?", scpi_average_acquire_get);
  scpi_if_register_cmd("MSIZ", "MEMORY_SIZE", scpi_memdepth_set);
  scpi_if_register_cmd("MSIZ?", "MEMORY_SIZE?", scpi_memdepth_get);
  scpi_if_register_cmd("SXSA", "SINXX_SAMPLE", scpi_inter_mode_set);
  scpi_if_register_cmd("SXSA?", "SINXX_SAMPLE?", scpi_inter_mode_get);
  scpi_if_register_cmd("XYDS?", "XY_DISPLAY?", scpi_acq_xy_get);
  scpi_if_register_cmd("XYDS", "XY_DISPLAY", scpi_acq_xy_set);
  scpi_if_register_cmd("SARA?", "SAMPLE_RATE?", scpi_wv_sample_rate_get);
  scpi_if_register_cmd("SANU?", "SAMPLE_NUM?", scpi_sample_num_get);
  scpi_if_register_scpi_cmd("HORizontal:RECOrdlength", scpi_tek_memdepth_set, 1);
  scpi_if_register_scpi_cmd("HORizontal:RECOrdlength?", scpi_tek_sample_num_get, 1);
  scpi_if_register_private_cmd("ROLL", scpi_acq_roll_mode_set);
  scpi_if_register_private_cmd("ACENBT", scpi_enhance_bits_set);
  scpi_if_register_private_cmd("ACENBT?", scpi_enhance_bits_get);
  scpi_if_register_private_cmd("ACSQM?", scpi_acq_sq_mode_get);
  scpi_if_register_private_cmd("ACSQM", scpi_acq_sq_mode_set);
  scpi_if_register_private_cmd("ACSQS", scpi_acq_sq_seg_set);
}

void scpi_register_cmd_acq_new(void)
{
  scpi_if_register_scpi_cmd(":ACQuire:TYPE", scpi_acquire_type_set_new, 1);
  scpi_if_register_scpi_cmd(":ACQuire:TYPE?", scpi_acquire_type_get_new, 1);
  scpi_if_register_scpi_cmd(":ACQuire:MODE", scpi_acq_mode_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:MODE?", scpi_acq_mode_get, 1);
  scpi_if_register_scpi_cmd(":ACQuire:SEQuence", scpi_acq_seq_switch_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:SEQuence?", scpi_acq_seq_switch_get, 1);
  scpi_if_register_scpi_cmd(":ACQuire:SEQuence:COUNt", scpi_acq_sq_seg_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:SEQuence:COUNt?", scpi_acq_sq_seg_get, 1);
  scpi_if_register_scpi_cmd(":ACQuire:INTerpolation", scpi_inter_mode_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:INTerpolation?", scpi_inter_mode_get_new, 1);
  scpi_if_register_scpi_cmd(":ACQuire:MDEPth", scpi_memdepth_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:MDEPth?", scpi_memdepth_get_new, 1);
  scpi_if_register_scpi_cmd(":ACQuire:AALias", scpi_alias_fileter_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:AALias?", scpi_alias_fileter_get, 1);
  scpi_if_register_scpi_cmd(":ACQuire:AMODe", scpi_acq_fast_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:AMODe?", scpi_acq_fast_get, 1);
  scpi_if_register_scpi_cmd(":ACQuire:SRATe?", scpi_acq_sample_rate_get, 1);
  scpi_if_register_scpi_cmd(":ACQuire:POINts?", scpi_sample_num_get_new, 1);
  scpi_if_register_scpi_cmd(":ACQuire:CSWeep", scpi_acq_clear_sweeps, 1);
  scpi_if_register_scpi_cmd(":ACQuire:RESolution", scpi_acq_resolution_set, 1);
  scpi_if_register_scpi_cmd(":ACQuire:RESolution?", scpi_acq_resolution_get, 1);
  scpi_if_register_scpi_cmd(":STUB:OUTPut", scpi_stub_wave_type_set, 1);
}

void scpi_register_cmd_autosetup(void)
{
  scpi_if_register_cmd("ASET", "AUTOSETUP", scpi_autosetup_set);
  scpi_if_register_scpi_cmd("AUTOSet", scpi_tek_autosetup_set, 1);
}

void scpi_register_cmd_autosetup_new(void)
{
  scpi_if_register_scpi_cmd(":AUToset", scpi_autosetup_set, 1);
}

void scpi_register_cmd_ch(void)
{
  scpi_if_register_cmd("C#:VDIV", "C#:VOLT_DIV", scpi_ch_vdiv_set);
  scpi_if_register_cmd("C#:VDIV?", "C#:VOLT_DIV?", scpi_ch_vdiv_get);
  scpi_if_register_cmd("C#:TRA", "C#:TRACE", scpi_ch_tra_set);
  scpi_if_register_cmd("C#:TRA?", "C#:TRACE?", scpi_ch_tra_get);
  scpi_if_register_cmd("C#:OFST", "C#:OFFSET", scpi_ofst_ch_set);
  scpi_if_register_cmd("C#:OFST?", "C#:OFFSET?", scpi_ofst_ch_get);
  scpi_if_register_cmd("C#:CPL", "C#:COUPLING", scpi_cpl_ch_set);
  scpi_if_register_cmd("C#:CPL?", "C#:COUPLING?", scpi_cpl_ch_get);
  scpi_if_register_cmd("C#:ATTN", "C#:ATTENUATION", scpi_probe_ch_set);
  scpi_if_register_cmd("C#:ATTN?", "C#:ATTENUATION?", scpi_probe_ch_get);
  scpi_if_register_cmd("C#:UNIT", "C#:UNIT", scpi_ch_unit_set);
  scpi_if_register_cmd("C#:UNIT?", "C#:UNIT?", scpi_ch_unit_get);
  scpi_if_register_cmd("C#:SKEW", "C#:SKEW", scpi_ch_deskew_set);
  scpi_if_register_cmd("C#:SKEW?", "C#:SKEW?", scpi_ch_deskew_get);
  scpi_if_register_cmd("C#:INVS", "C#:INVERTSET", scpi_ch_invert_set);
  scpi_if_register_cmd("C#:INVS?", "C#:INVERTSET?", scpi_ch_invert_get);
  scpi_if_register_cmd("BWL", "BANDWIDTH_LIMIT", scpi_bwl_set);
  scpi_if_register_cmd("BWL?", "BANDWIDTH_LIMIT?", scpi_bwl_get);
  scpi_if_register_scpi_cmd("CH#:POSition", scpi_tek_ch_ofst_set, 1);
  scpi_if_register_scpi_cmd("CH#:POSition?", scpi_tek_ch_ofst_get, 1);
  scpi_if_register_scpi_cmd("CH#:SCAle", scpi_ch_vdiv_set, 1);
  scpi_if_register_scpi_cmd("CH#:SCAle?", scpi_ch_vdiv_get_new, 1);
  scpi_if_register_scpi_cmd("CH#:OFFset", scpi_tek_ch_dc_set, 1);
  scpi_if_register_scpi_cmd("CH#:OFFset?", scpi_tek_ch_dc_get, 1);
  scpi_if_register_scpi_cmd("CH#:PRObe:GAIN", scpi_tek_ch_probe_set, 1);
  scpi_if_register_scpi_cmd("CH#:PRObe:GAIN?", scpi_tek_ch_probe_get, 1);
  scpi_if_register_scpi_cmd("CH#:BANdwidth", scpi_tek_ch_bwl_set, 1);
  scpi_if_register_scpi_cmd("CH#:BANdwidth?", scpi_tek_ch_bwl_get, 1);
  scpi_if_register_scpi_cmd("CH#:COUPling", scpi_ch_cpl_set, 1);
  scpi_if_register_scpi_cmd("CH#:COUPling?", scpi_ch_cpl_get, 1);
  scpi_if_register_scpi_cmd("CH#:INVert", scpi_ch_invert_set, 1);
  scpi_if_register_scpi_cmd("CH#:INVert?", scpi_ch_invert_get_new, 1);
  scpi_if_register_scpi_cmd("CH#:TERmination", scpi_tek_ch_impedance_set, 1);
  scpi_if_register_scpi_cmd("CH#:TERmination?", scpi_tek_ch_impedance_get, 1);
  scpi_if_register_scpi_cmd("SELect:CH#", scpi_ch_tra_set, 1);
  scpi_if_register_scpi_cmd("SELect:CH#?", scpi_ch_tra_get_new, 1);
  scpi_if_register_scpi_cmd("CH#:LABel", scpi_label_text_set, 1);
  scpi_if_register_private_cmd("C#:BWL?", scpi_bwl_ch_get);
  scpi_if_register_private_cmd("C#:HADJ", scpi_ch_hadj_set);
  scpi_if_register_private_cmd("C#:HADJ?", scpi_ch_hadj_get);
  scpi_if_register_private_cmd("C#:PRIority", scpi_ch_priority_set);
  scpi_if_register_private_cmd("C#:PRIority?", scpi_ch_priority_get);
  scpi_if_register_private_cmd("VDIVL", scpi_vdiv_limit_set);
  scpi_if_register_private_cmd("VDIVL?", scpi_vdiv_limit_get);
  scpi_if_register_private_cmd("CHS?", scpi_ch_num_get);
}

void scpi_register_cmd_ch_new(void)
{
  scpi_if_register_scpi_cmd(":CHANnel:COUNt?", scpi_ch_num_get_new, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SWITch", scpi_ch_tra_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SWITch?", scpi_ch_tra_get_new, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SCALe", scpi_ch_vdiv_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SCALe?", scpi_ch_vdiv_get_new, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:OFFSet", scpi_ch_ofst_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:OFFSet?", scpi_ch_ofst_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:BWLimit", scpi_ch_bwl_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:BWLimit?", scpi_ch_bwl_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:COUPling", scpi_ch_cpl_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:COUPling?", scpi_ch_cpl_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:IMPedance", scpi_ch_impedance_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:IMPedance?", scpi_ch_impedance_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:PROBe", scpi_ch_probe_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:PROBe?", scpi_ch_probe_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:INVert", scpi_ch_invert_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:INVert?", scpi_ch_invert_get_new, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SKEW", scpi_ch_deskew_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SKEW?", scpi_ch_deskew_get_new, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:UNIT", scpi_ch_unit_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:UNIT?", scpi_ch_unit_get_new, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:VISible", scpi_ch_visible_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:VISible?", scpi_ch_visible_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:LABel", scpi_label_display_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:LABel?", scpi_label_display_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:LABel:TEXT", scpi_label_text_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:LABel:TEXT?", scpi_label_text_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SLIMit", scpi_vdiv_limit_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:SLIMit?", scpi_vdiv_limit_get, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:PRiority", scpi_ch_priority_set, 1);
  scpi_if_register_scpi_cmd(":CHANnel#:PRiority?", scpi_ch_priority_get_new, 1);
}

void scpi_register_cmd_cursor(void)
{
  scpi_if_register_cmd("CRMS?", "CURSOR_MEASURE?", scpi_cursor_mode_get);
  scpi_if_register_cmd("CRMS", "CURSOR_MEASURE", scpi_cursor_mode_set);
  scpi_if_register_cmd("CRTY?", "CURSOR_TYPE?", scpi_cursor_type_get);
  scpi_if_register_bin_cmd("CRTY", "CURSOR_TYPE", scpi_cursor_type_set);
  scpi_if_register_cmd("C#:CRST?", "C#:CURSOR_SET?", scpi_cursor_param_ch_get);
  scpi_if_register_cmd("C#:CRST", "C#:CURSOR_SET", scpi_cursor_param_ch_set);
  scpi_if_register_cmd("C#:CRVA?", "C#:CURSOR_VALUE?", scpi_cursor_value_ch_get);
  scpi_if_register_cmd("MATH:CRVA?", "MATH:CURSOR_VALUE?", scpi_cursor_value_math_get);
  scpi_if_register_scpi_cmd("CURSor:FUNCTION", scpi_tek_cursor_mode_set, 1);
  scpi_if_register_scpi_cmd("CURSor:SOUrce", scpi_tek_cursor_src_set, 1);
  scpi_if_register_scpi_cmd("CURSor:VBArs:POSITION#", scpi_cursor_x_set, 1);
  scpi_if_register_scpi_cmd("CURSor:VBArs:POSITION#?", scpi_cursor_x_get, 1);
  scpi_if_register_scpi_cmd("CURSor:VBArs:HPOS#?", scpi_tek_cursor_mea_value_get, 1);
}

void scpi_register_cmd_cursor_new(void)
{
  scpi_if_register_scpi_cmd(":CURSor", scpi_cursor_switch_set, 1);
  scpi_if_register_scpi_cmd(":CURSor?", scpi_cursor_switch_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:MODE", scpi_cursor_mode_set_new, 1);
  scpi_if_register_scpi_cmd(":CURSor:MODE?", scpi_cursor_mode_get_new, 1);
  scpi_if_register_scpi_cmd(":CURSor:TAGStyle", scpi_cursor_display_set, 1);
  scpi_if_register_scpi_cmd(":CURSor:TAGStyle?", scpi_cursor_display_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:XREFerence", scpi_cursor_x_ref_set, 1);
  scpi_if_register_scpi_cmd(":CURSor:XREFerence?", scpi_cursor_x_ref_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:YREFerence", scpi_cursor_y_ref_set, 1);
  scpi_if_register_scpi_cmd(":CURSor:YREFerence?", scpi_cursor_y_ref_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:SOURce#", scpi_cursor_src_set, 1);
  scpi_if_register_scpi_cmd(":CURSor:SOURce#?", scpi_cursor_src_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:X#", scpi_cursor_x_set, 1);
  scpi_if_register_scpi_cmd(":CURSor:X#?", scpi_cursor_x_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:Y#", scpi_cursor_y_set, 1);
  scpi_if_register_scpi_cmd(":CURSor:Y#?", scpi_cursor_y_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:XDELta?", scpi_cursor_xdelta_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:IXDelta?", scpi_cursor_ixdelta_get, 1);
  scpi_if_register_scpi_cmd(":CURSor:YDELta?", scpi_cursor_ydelta_get, 1);
}

void scpi_register_cmd_decode(void)
{
  scpi_if_register_cmd("DCST", "DeCo_Status", scpi_decode_set_switch);
  scpi_if_register_cmd("DCST?", "Deco_Status?", scpi_decode_get_switch);
  scpi_if_register_cmd("DCPA", "DeCoPAram", scpi_decode_set_param);
  scpi_if_register_cmd("B1:DCIC", "B1:DeCo_IiC", scpi_decode_set_bus1_iic);
  scpi_if_register_cmd("B2:DCIC", "B2:DeCo_IiC", scpi_decode_set_bus2_iic);
  scpi_if_register_cmd("B1:DCSP", "B1:DeCo_SPi", scpi_decode_set_bus1_spi);
  scpi_if_register_cmd("B2:DCSP", "B2:DeCo_SPi", scpi_decode_set_bus2_spi);
  scpi_if_register_cmd("B1:DCUT", "B1:DeCo_UarT", scpi_decode_set_bus1_uart);
  scpi_if_register_cmd("B2:DCUT", "B2:DeCo_UarT", scpi_decode_set_bus2_uart);
  scpi_if_register_cmd("B1:DCCN", "B1:DeCo_CaN", scpi_decode_set_bus1_can);
  scpi_if_register_cmd("B2:DCCN", "B2:DeCo_CaN", scpi_decode_set_bus2_can);
  scpi_if_register_cmd("B1:DCLN", "B1:DeCo_LiN", scpi_decode_set_bus1_lin);
  scpi_if_register_cmd("B2:DCLN", "B2:DeCo_LiN", scpi_decode_set_bus2_lin);
  scpi_if_register_private_cmd("DCDI?", scpi_decode_get_is_need_digital);
  scpi_if_register_private_cmd("DCVL?", scpi_decode_get_result);
  scpi_if_register_private_cmd("DCLR?", scpi_decode_get_list_result);
}

void scpi_register_cmd_decode_new(void)
{
  scpi_if_register_scpi_cmd(":DECode", scpi_decode_set_switch, 1);
  scpi_if_register_scpi_cmd(":DECode?", scpi_decode_get_switch_new, 1);
  scpi_if_register_scpi_cmd(":DECode:LIST", scpi_decode_set_list_display, 1);
  scpi_if_register_scpi_cmd(":DECode:LIST?", scpi_decode_get_list_display, 1);
  scpi_if_register_scpi_cmd(":DECode:LIST:LINE", scpi_decode_set_list_line, 1);
  scpi_if_register_scpi_cmd(":DECode:LIST:LINE?", scpi_decode_get_list_line, 1);
  scpi_if_register_scpi_cmd(":DECode:LIST:SCRoll", scpi_decode_set_list_scroll, 1);
  scpi_if_register_scpi_cmd(":DECode:LIST:SCRoll?", scpi_decode_get_list_scroll, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#", scpi_decode_set_bus_switch, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#?", scpi_decode_get_bus_switch, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:PROTocol", scpi_decode_set_protocol, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:PROTocol?", scpi_decode_get_protocol, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FORMat", scpi_decode_set_format, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FORMat?", scpi_decode_get_format, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:COPY", scpi_decode_set_copy, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FRAMecount?", scpi_decode_get_bus_frame_num, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:RESult?", scpi_decode_get_bus_result, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SCLSource", scpi_decode_set_iic_scl, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SCLSource?", scpi_decode_get_iic_scl, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SCLThreshold", scpi_decode_set_iic_sclt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SCLThreshold?", scpi_decode_get_iic_sclt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SDASource", scpi_decode_set_iic_sda, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SDASource?", scpi_decode_get_iic_sda, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SDAThreshold", scpi_decode_set_iic_sdat, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:SDAThreshold?", scpi_decode_get_iic_sdat, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:RWBit", scpi_decode_set_iic_rw, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIC:RWBit?", scpi_decode_get_iic_rw, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CLKSource", scpi_decode_set_spi_clk, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CLKSource?", scpi_decode_get_spi_clk, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:LATChedge", scpi_decode_set_spi_clk_edge, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:LATChedge?", scpi_decode_get_spi_clk_edge, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CLKThreshold", scpi_decode_set_spi_clkt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CLKThreshold?", scpi_decode_get_spi_clkt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MOSISource", scpi_decode_set_spi_mosi, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MOSISource?", scpi_decode_get_spi_mosi, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MOSIThreshold", scpi_decode_set_spi_mosit, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MOSIThreshold?", scpi_decode_get_spi_mosit, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MISOSource", scpi_decode_set_spi_miso, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MISOSource?", scpi_decode_get_spi_miso, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MISOThreshold", scpi_decode_set_spi_misot, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:MISOThreshold?", scpi_decode_get_spi_misot, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CSTYpe", scpi_decode_set_spi_cs_type, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CSTYpe?", scpi_decode_get_spi_cs_type, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CSSource", scpi_decode_set_spi_cs, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CSSource?", scpi_decode_get_spi_cs, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CSThreshold", scpi_decode_set_spi_cst, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:CSThreshold?", scpi_decode_get_spi_cst, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:NCSSource", scpi_decode_set_spi_ncs, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:NCSSource?", scpi_decode_get_spi_ncs, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:NCSThreshold", scpi_decode_set_spi_ncst, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:NCSThreshold?", scpi_decode_get_spi_ncst, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:DLENgth", scpi_decode_set_spi_data_length, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:DLENgth?", scpi_decode_get_spi_data_length, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:BITorder", scpi_decode_set_spi_bit_order, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:SPI:BITorder?", scpi_decode_get_spi_bit_order, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:RXSource", scpi_decode_set_uart_rx, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:RXSource?", scpi_decode_get_uart_rx, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:RXThreshold", scpi_decode_set_uart_rxt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:RXThreshold?", scpi_decode_get_uart_rxt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:TXSource", scpi_decode_set_uart_tx, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:TXSource?", scpi_decode_get_uart_tx, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:TXThreshold", scpi_decode_set_uart_txt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:TXThreshold?", scpi_decode_get_uart_txt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:BAUD", scpi_decode_set_uart_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:BAUD?", scpi_decode_get_uart_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:DLENgth", scpi_decode_set_uart_data_length, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:DLENgth?", scpi_decode_get_uart_data_length, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:PARity", scpi_decode_set_uart_parity, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:PARity?", scpi_decode_get_uart_parity, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:STOP", scpi_decode_set_uart_stop, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:STOP?", scpi_decode_get_uart_stop, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:BITorder", scpi_decode_set_uart_bit, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:BITorder?", scpi_decode_get_uart_bit, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:IDLE", scpi_decode_set_uart_idle, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:UART:IDLE?", scpi_decode_get_uart_idle, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CAN:SOURce", scpi_decode_set_can_h, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CAN:SOURce?", scpi_decode_get_can_h, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CAN:THReshold", scpi_decode_set_can_ht, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CAN:THReshold?", scpi_decode_get_can_ht, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CAN:BAUD", scpi_decode_set_can_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CAN:BAUD?", scpi_decode_get_can_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:LIN:SOURce", scpi_decode_set_lin_source, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:LIN:SOURce?", scpi_decode_get_lin_source, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:LIN:THReshold", scpi_decode_set_lin_threshold, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:LIN:THReshold?", scpi_decode_get_lin_threshold, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:LIN:BAUD", scpi_decode_set_lin_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:LIN:BAUD?", scpi_decode_get_lin_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FLEXray:SOURce", scpi_decode_set_flex_source, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FLEXray:SOURce?", scpi_decode_get_flex_source, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FLEXray:THReshold", scpi_decode_set_flex_threshold, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FLEXray:THReshold?", scpi_decode_get_flex_threshold, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FLEXray:BAUD", scpi_decode_set_flex_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:FLEXray:BAUD?", scpi_decode_get_flex_baud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:SOURce", scpi_decode_set_canfd_h, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:SOURce?", scpi_decode_get_canfd_h, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:THReshold", scpi_decode_set_canfd_ht, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:THReshold?", scpi_decode_get_canfd_ht, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:BAUDNominal", scpi_decode_set_canfd_nbaud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:BAUDNominal?", scpi_decode_get_canfd_nbaud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:BAUDData", scpi_decode_set_canfd_dbaud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:CANFd:BAUDData?", scpi_decode_get_canfd_dbaud, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:BCLKSource", scpi_decode_set_i2s_bclk, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:BCLKSource?", scpi_decode_get_i2s_bclk, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:BCLKThreshold", scpi_decode_set_i2s_bclkt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:BCLKThreshold?", scpi_decode_get_i2s_bclkt, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:WSSource", scpi_decode_set_i2s_ws, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:WSSource?", scpi_decode_get_i2s_ws, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:WSTHreshold", scpi_decode_set_i2s_wst, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:WSTHreshold?", scpi_decode_get_i2s_wst, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:DSource", scpi_decode_set_i2s_data, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:DSource?", scpi_decode_get_i2s_data, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:DTHReshold", scpi_decode_set_i2s_datat, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:DTHReshold?", scpi_decode_get_i2s_datat, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:LATChedge", scpi_decode_set_i2s_bclk_edge, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:LATChedge?", scpi_decode_get_i2s_bclk_edge, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:LCH", scpi_decode_set_i2s_left_ch, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:LCH?", scpi_decode_get_i2s_left_ch, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:AVARiant", scpi_decode_set_i2s_audio, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:AVARiant?", scpi_decode_get_i2s_audio, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:SBIT", scpi_decode_set_i2s_start_bit, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:SBIT?", scpi_decode_get_i2s_start_bit, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:DLENgth", scpi_decode_set_i2s_data_length, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:DLENgth?", scpi_decode_get_i2s_data_length, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:BITorder", scpi_decode_set_i2s_bit_order, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:BITorder?", scpi_decode_get_i2s_bit_order, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:ANNotate", scpi_decode_set_i2s_annotate, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:IIS:ANNotate?", scpi_decode_get_i2s_annotate, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:M1553:SOURce", scpi_decode_set_1553_source, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:M1553:SOURce?", scpi_decode_get_1553_source, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:M1553:UTHReshold", scpi_decode_set_1553_upper_thresh, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:M1553:UTHReshold?", scpi_decode_get_1553_upper_thresh, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:M1553:LTHReshold", scpi_decode_set_1553_low_thresh, 1);
  scpi_if_register_scpi_cmd(":DECode:BUS#:M1553:LTHReshold?", scpi_decode_get_1553_low_thresh, 1);
}

void scpi_register_cmd_digital(void)
{
  scpi_if_register_cmd("DI:SW", "DI:SWITCH", scpi_digital_switch_set);
  scpi_if_register_cmd("DI:SW?", "DI:SWITCH?", scpi_digital_switch_get);
  scpi_if_register_cmd("D#:TRA", "D0:TRACE", scpi_digital_control_set);
  scpi_if_register_cmd("D#:TRA?", "D0:TRACE?", scpi_digital_control_get);
  scpi_if_register_cmd("L8:TSM", "L8:THRESHOLD_MODE", scpi_digital_d0_d7_threshold_mode_set);
  scpi_if_register_cmd("L8:TSM?", "L8:THRESHOLD_MODE?", scpi_digital_d0_d7_threshold_mode_get);
  scpi_if_register_cmd("L8:CUS", "L8:CUSTOM", scpi_digital_d0_d7_threshold_value_set);
  scpi_if_register_cmd("L8:CUS?", "L8:CUSTOM?", scpi_digital_d0_d7_threshold_value_get);
  scpi_if_register_cmd("H8:TSM", "H8:THRESHOLD_MODE", scpi_digital_d8_d15_threshold_mode_set);
  scpi_if_register_cmd("H8:TSM?", "H8:THRESHOLD_MODE?", scpi_digital_d8_d15_threshold_mode_get);
  scpi_if_register_cmd("H8:CUS", "H8:CUSTOM", scpi_digital_d8_d15_threshold_value_set);
  scpi_if_register_cmd("H8:CUS?", "H8:CUSTOM?", scpi_digital_d8_d15_threshold_value_get);
  scpi_if_register_cmd("DI:SARA?", "DI:SAMPLE_RATE?", scpi_digital_sample_rate_get);
  scpi_if_register_cmd("CUS:L8", "CUSTOM:L8", scpi_digital_d0_d7_threshold_value_set);
  scpi_if_register_cmd("CUS:H8", "CUSTOM:H8", scpi_digital_d8_d15_threshold_value_set);
  scpi_if_register_private_cmd("DI:CH", scpi_digital_channel_height_set);
  scpi_if_register_private_cmd("DI:L8", scpi_digital_channel_group_d0_d7_set);
  scpi_if_register_private_cmd("DI:H8", scpi_digital_channel_group_d8_d15_set);
  scpi_if_register_private_cmd("DI:KC", scpi_digital_user_knob_control_set);
  scpi_if_register_private_cmd("DI:WF?", scpi_digital_display_wave_get);
  scpi_if_register_private_cmd("DI:FR?", scpi_digital_freq_get);
  scpi_if_register_private_cmd("DI:THAD", scpi_digital_thresholds_adjust_set);
  scpi_if_register_private_cmd("DI:THAD?", scpi_digital_thresholds_adjust_get);
  scpi_if_register_private_cmd("DI:MTHRED?", scpi_digital_calib_data_get);
  scpi_if_register_private_cmd("DI:CMF?", scpi_digital_is_cmd_finished);
  scpi_if_register_private_cmd("DI:STTA?", scpi_digital_start_acq);
  scpi_if_register_private_cmd("DI:STPA?", scpi_digital_stop_acq);
  scpi_if_register_private_cmd("DI:WSR?", scpi_digital_wait_stop_ready);
  scpi_if_register_private_cmd("DI:LTV?", scpi_digital_get_local_trig_vld);
  scpi_if_register_private_cmd("DI:LCALI?", scpi_digital_get_local_cali_data);
  scpi_if_register_private_cmd("DI:ECALI", scpi_digital_set_ext_cali_data);
  scpi_if_register_private_cmd("DI:EXTV", scpi_digital_set_ext_trig_vld);
  scpi_if_register_private_cmd("DI:SWID", scpi_digital_set_switch_index);
  scpi_if_register_private_cmd("DI:HISM?", scpi_digital_set_hist_mode);
  scpi_if_register_private_cmd("DI:MSTM", scpi_digital_set_master_mode);
  scpi_if_register_private_cmd("DI:RDDR?", scpi_digital_set_ddr3_reset);
  scpi_if_register_private_cmd("DI:STOP", scpi_digital_set_run_stop_status);
  scpi_if_register_private_cmd("DI:SLFM", scpi_digital_set_self_mode);
  scpi_if_register_private_cmd("DI:CALM", scpi_digital_set_cali_mode);
  scpi_if_register_private_cmd("DI:UPIN", scpi_digital_update_datapreview_info);
  scpi_if_register_private_cmd("DI:UTC", scpi_digital_usbtmc_connected);
  scpi_if_register_private_cmd("DI:FV?", scpi_digital_get_fpga_version);
  scpi_if_register_private_cmd("DI:PV?", scpi_digital_get_pcb_version);
  scpi_if_register_private_cmd("DI:BV?", scpi_digital_get_bom_version);
  scpi_if_register_private_cmd("DI:SV?", scpi_digital_get_software_version);
  scpi_if_register_private_cmd("DI:ADC_SKEW", scpi_digital_set_adc_skew_value);
  scpi_if_register_private_cmd("DI:ACQVD?", scpi_digital_get_acq_valid_param);
  scpi_if_register_private_cmd("DI:ADCM", scpi_digital_set_adc_mode);
  scpi_if_register_private_cmd("DI:TRCP", scpi_digital_set_trig_coupling);
  scpi_if_register_private_cmd("DI:PRBW", scpi_digital_set_pro_bwl);
  scpi_if_register_private_cmd("DI:RDON", scpi_digital_read_data_once);
  scpi_if_register_private_cmd("DI:DTAN", scpi_digital_data_analysis);
  scpi_if_register_private_cmd("DI:DTANF?", scpi_digital_get_data_analysis_flag);
  scpi_if_register_private_cmd("DI:DTANF", scpi_digital_set_data_analysis_flag);
  scpi_if_register_private_cmd("DI:IDTANF", scpi_digital_set_interrupt_data_analysis_flag);
  scpi_if_register_private_cmd("DI:TDIVF", scpi_digital_set_tdiv_flag);
  scpi_if_register_private_cmd("DI:PRTP", scpi_digital_set_master_product_type);
  scpi_if_register_private_cmd("DI:DES", scpi_digital_deskew_set);
  scpi_if_register_private_cmd("CHMD", scpi_digital_ch_mode_set);
  scpi_if_register_private_cmd("DI:SRLN", scpi_digital_set_serial_number);
  scpi_if_register_private_cmd("DI:SRLN?", scpi_digital_get_serial_number);
  scpi_if_register_private_cmd("D#:TRSL", scpi_digital_trig_slope_digital_set);
  scpi_if_register_private_cmd("D#:TRSL?", scpi_digital_trig_slope_digital_get);
  scpi_if_register_private_cmd("D#:ACT", scpi_digital_activated_channel_set);
}

void scpi_register_cmd_digital_new(void)
{
  scpi_if_register_scpi_cmd(":DIGital", scpi_digital_switch_set, 1);
  scpi_if_register_scpi_cmd(":DIGital?", scpi_digital_switch_get_new, 1);
  scpi_if_register_scpi_cmd(":DIGital:ACTive", scpi_digital_active_channel_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:ACTive?", scpi_digital_active_channel_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:SKEW", scpi_digital_deskew_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:SKEW?", scpi_digital_deskew_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:HEIGht", scpi_digital_wave_height_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:HEIGht?", scpi_digital_wave_height_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:POSition", scpi_digital_wave_pos_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:POSition?", scpi_digital_wave_pos_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:THReshold#", scpi_digital_group_thresh_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:THReshold#?", scpi_digital_group_thresh_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:D#", scpi_digital_single_display_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:D#?", scpi_digital_single_display_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:LABel#", scpi_digital_single_label_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:LABel#?", scpi_digital_single_label_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:DISPlay", scpi_digital_bus_display_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:DISPlay?", scpi_digital_bus_display_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:FORMat", scpi_digital_bus_format_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:FORMat?", scpi_digital_bus_format_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:DEFault", scpi_digital_bus_data_reset, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:MAP", scpi_digital_bus_bit_data_set, 1);
  scpi_if_register_scpi_cmd(":DIGital:BUS#:MAP?", scpi_digital_bus_bit_data_get, 1);
  scpi_if_register_scpi_cmd(":DIGital:SRATe?", scpi_digital_sample_rate_get_new, 1);
  scpi_if_register_scpi_cmd(":DIGital:POINts?", scpi_digital_sample_points_get, 1);
}

void scpi_register_cmd_display(void)
{
  scpi_if_register_cmd("DTJN?", "DOT_JOIN?", scpi_disp_dots_get);
  scpi_if_register_cmd("DTJN", "DOT_JOIN", scpi_disp_dots_set);
  scpi_if_register_cmd("GRDS?", "GRID_DISPLAY?", scpi_disp_grid_get);
  scpi_if_register_cmd("GRDS", "GRID_DISPLAY", scpi_disp_grid_set);
  scpi_if_register_cmd("PESU?", "PERSIST_SETUP?", scpi_disp_persist_get);
  scpi_if_register_cmd("PESU", "PERSIST_SETUP", scpi_disp_persist_set);
  scpi_if_register_cmd("INTS?", "INTENSITY?", scpi_disp_intensity_get);
  scpi_if_register_cmd("INTS", "INTENSITY", scpi_disp_intensity_set);
  scpi_if_register_private_cmd("DSCL", scpi_disp_clear_set);
  scpi_if_register_private_cmd("PECL", scpi_disp_persist_clear_set);
}

void scpi_register_cmd_display_new(void)
{
  scpi_if_register_scpi_cmd(":DISPlay:TYPE", scpi_disp_type_set, 1);
  scpi_if_register_scpi_cmd(":DISPlay:TYPE?", scpi_disp_type_get, 1);
  scpi_if_register_scpi_cmd(":DISPlay:COLor", scpi_disp_color_set, 1);
  scpi_if_register_scpi_cmd(":DISPlay:COLor?", scpi_disp_color_get, 1);
  scpi_if_register_scpi_cmd(":DISPlay:PERSistence", scpi_disp_persist_set_new, 1);
  scpi_if_register_scpi_cmd(":DISPlay:PERSistence?", scpi_disp_persist_get_new, 1);
  scpi_if_register_scpi_cmd(":DISPlay:GRIDstyle", scpi_disp_grid_set_new, 1);
  scpi_if_register_scpi_cmd(":DISPlay:GRIDstyle?", scpi_disp_grid_get_new, 1);
  scpi_if_register_scpi_cmd(":DISPlay:INTensity", scpi_disp_intensity_set_new, 1);
  scpi_if_register_scpi_cmd(":DISPlay:INTensity?", scpi_disp_intensity_get_new, 1);
  scpi_if_register_scpi_cmd(":DISPlay:GRATicule", scpi_disp_graticule_set, 1);
  scpi_if_register_scpi_cmd(":DISPlay:GRATicule?", scpi_disp_graticule_get, 1);
  scpi_if_register_scpi_cmd(":DISPlay:TRANsparence", scpi_disp_transp_set, 1);
  scpi_if_register_scpi_cmd(":DISPlay:TRANsparence?", scpi_disp_transp_get, 1);
  scpi_if_register_scpi_cmd(":DISPlay:BACKlight", scpi_disp_backlight_set, 1);
  scpi_if_register_scpi_cmd(":DISPlay:BACKlight?", scpi_disp_backlight_get, 1);
  scpi_if_register_scpi_cmd(":DISPlay:LEDlight", scpi_disp_ledlight_set, 1);
  scpi_if_register_scpi_cmd(":DISPlay:LEDlight?", scpi_disp_ledlight_get, 1);
  scpi_if_register_scpi_cmd(":DISPlay:CLEar", scpi_disp_clear_set, 1);
}

void scpi_register_cmd_history(void)
{
  scpi_if_register_cmd("HSMD", "HISTORY_MODE", scpi_history_mode_set);
  scpi_if_register_cmd("HSMD?", "HISTORY_MODE?", scpi_history_mode_get);
  scpi_if_register_cmd("FRAM", "FRAME_SET", scpi_history_frame_set);
  scpi_if_register_cmd("FRAM?", "FRAME_SET?", scpi_history_frame_get);
  scpi_if_register_cmd("FTIM?", "FRAME_TIME?", scpi_history_frame_time_get);
  scpi_if_register_cmd("HSLST", "HISTORY_LIST", scpi_history_list_switch_set);
  scpi_if_register_cmd("HSLST?", "HISTORY_LIST?", scpi_history_list_switch_get);
  scpi_if_register_private_cmd("HSST", scpi_history_state_set);
  scpi_if_register_private_cmd("HSST?", scpi_history_state_get);
  scpi_if_register_private_cmd("FPAR?", scpi_history_frame_param_get);
}

void scpi_register_cmd_history_new(void)
{
  scpi_if_register_scpi_cmd(":HISTORy", scpi_history_mode_set, 1);
  scpi_if_register_scpi_cmd(":HISTORy?", scpi_history_mode_get_new, 1);
  scpi_if_register_scpi_cmd(":HISTORy:PLAY", scpi_history_state_set, 1);
  scpi_if_register_scpi_cmd(":HISTORy:PLAY?", scpi_history_state_get, 1);
  scpi_if_register_scpi_cmd(":HISTORy:INTERval", scpi_history_frame_interval_set, 1);
  scpi_if_register_scpi_cmd(":HISTORy:INTERval?", scpi_history_frame_interval_get, 1);
  scpi_if_register_scpi_cmd(":HISTORy:FRAMe", scpi_history_frame_set, 1);
  scpi_if_register_scpi_cmd(":HISTORy:FRAMe?", scpi_history_frame_get_new, 1);
  scpi_if_register_scpi_cmd(":HISTORy:LIST", scpi_history_list_switch_set_new, 1);
  scpi_if_register_scpi_cmd(":HISTORy:LIST?", scpi_history_list_switch_get_new, 1);
  scpi_if_register_scpi_cmd(":HISTORy:TIME?", scpi_history_frame_time_get_new, 1);
}

void scpi_register_cmd_math(void)
{
  scpi_if_register_bin_cmd("DEF", "DEFine", scpi_math_operation_set);
  scpi_if_register_cmd("DEF?", "DEFine?", scpi_math_operation_get);
  scpi_if_register_cmd("MATH:INVS", "MATH:INVERTSET", scpi_invert_math_set);
  scpi_if_register_cmd("MATH:INVS?", "MATH:INVERTSET?", scpi_invert_math_get);
  scpi_if_register_cmd("MTVD?", "MATH_VERT_DIV?", scpi_math_vdiv_get);
  scpi_if_register_cmd("MTVD", "MATH_VERT_DIV", scpi_math_vdiv_set);
  scpi_if_register_cmd("MTVP?", "MATH_VERT_POS?", scpi_math_vpos_get);
  scpi_if_register_cmd("MTVP", "MATH_VERT_POS", scpi_math_vpos_set);
  scpi_if_register_cmd("FFTW?", "FFT_WINDOW?", scpi_fft_wind_get);
  scpi_if_register_cmd("FFTW", "FFT_WINDOW", scpi_fft_wind_set);
  scpi_if_register_cmd("FFTC?", "FFT_CENTER?", scpi_fft_center_get);
  scpi_if_register_cmd("FFTC", "FFT_CENTER", scpi_fft_center_set);
  scpi_if_register_cmd("FFTT?", "FFT_TDIV?", scpi_fft_tdiv_get);
  scpi_if_register_cmd("FFTU?", "FFT_UNIT?", scpi_fft_unit_get);
  scpi_if_register_cmd("FFTU", "FFT_UNIT", scpi_fft_unit_set);
  scpi_if_register_cmd("FFTS?", "FFT_SCALE?", scpi_fft_scale_get);
  scpi_if_register_cmd("FFTS", "FFT_SCALE", scpi_fft_scale_set);
  scpi_if_register_cmd("FFTP?", "FFT_POS?", scpi_fft_pos_get);
  scpi_if_register_cmd("FFTP", "FFT_POS", scpi_fft_pos_set);
  scpi_if_register_cmd("FFTF?", "FFT_FULLSCREEN?", scpi_fft_full_screen_get);
  scpi_if_register_cmd("FFTF", "FFT_FULLSCREEN", scpi_fft_full_screen_set);
  scpi_if_register_private_cmd("MDID", scpi_diff_dx_set);
  scpi_if_register_private_cmd("MTEN?", scpi_math_enable_get);
  scpi_if_register_private_cmd("MTEN", scpi_math_enable_set);
}

void scpi_register_cmd_math_new(void)
{
  scpi_if_register_scpi_cmd(":FUNCtion:FFTDisplay", scpi_fft_display_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion:FFTDisplay?", scpi_fft_display_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion:GVALue", scpi_math_integ_gate_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion:GVALue?", scpi_math_integ_gate_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#", scpi_math_enable_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#?", scpi_math_enable_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:OPERation", scpi_math_operator_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:OPERation?", scpi_math_operator_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:SOURce#", scpi_math_source_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:SOURce#?", scpi_math_source_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:SCALe?", scpi_math_vdiv_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:SCALe", scpi_math_vdiv_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:POSition?", scpi_math_vpos_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:POSition", scpi_math_vpos_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:INVert?", scpi_math_invert_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:INVert", scpi_math_invert_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:LABel", scpi_math_label_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:LABel?", scpi_math_label_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:LABel:TEXT", scpi_math_label_text_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:LABel:TEXT?", scpi_math_label_text_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:DIFF:DX?", scpi_math_diff_dx_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:DIFF:DX", scpi_math_diff_dx_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:INTegrate:OFFSet?", scpi_math_integ_offset_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:INTegrate:OFFSet", scpi_math_integ_offset_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:INTegrate:GATE", scpi_math_integ_gate_switch_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:INTegrate:GATE?", scpi_math_integ_gate_switch_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:POINts?", scpi_fft_points_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:POINts", scpi_fft_points_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:WINDow?", scpi_fft_wind_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:WINDow", scpi_fft_wind_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:MODE", scpi_fft_mode_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:MODE?", scpi_fft_mode_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:RESET", scpi_fft_average_reset, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:AUToset", scpi_fft_auto_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SCALe", scpi_fft_scale_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SCALe?", scpi_fft_scale_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:RLEVel", scpi_fft_reflevel_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:RLEVel?", scpi_fft_reflevel_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:LOAD", scpi_fft_load_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:LOAD?", scpi_fft_load_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:UNIT", scpi_fft_unit_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:UNIT?", scpi_fft_unit_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:HCENter", scpi_fft_center_set_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:HCENter?", scpi_fft_center_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:HSCale?", scpi_fft_tdiv_get_new, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SPAN", scpi_fft_span_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SPAN?", scpi_fft_span_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch", scpi_fft_search_tool_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch?", scpi_fft_search_tool_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch:THReshold", scpi_fft_search_thresh_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch:THReshold?", scpi_fft_search_thresh_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch:EXCursion", scpi_fft_search_excursion_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch:EXCursion?", scpi_fft_search_excursion_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch:RESult?", scpi_fft_search_result_get, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:FFT:SEARch:MARKer#", scpi_fft_search_marker_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:ERES:BITS", scpi_math_eres_bit_set, 1);
  scpi_if_register_scpi_cmd(":FUNCtion#:AVERage:NUM", scpi_math_average_num_set, 1);
  scpi_if_register_private_cmd(":FUNCtion#:FFT:INFormation?", scpi_math_fft_info_get);
}

void scpi_register_cmd_mea(void)
{
  scpi_if_register_cmd("CYMT?", "CYMOMETER?", scpi_cymometer_get);
  scpi_if_register_cmd("CYMT_HW?", "CYMOMETER_HW?", scpi_cymometer_test_get);
  scpi_if_register_cmd("C#:PAVA?", "C#:PARAMETER_VALUE?", scpi_mea_value_ch_get);
  scpi_if_register_cmd("Z#:PAVA?", "Z#:PARAMETER_VALUE?", scpi_mea_value_zch_get);
  scpi_if_register_cmd("REFA:PAVA?", "REFA:PARAMETER_VALUE?", scpi_mea_value_refa_get);
  scpi_if_register_cmd("REFB:PAVA?", "REFB:PARAMETER_VALUE?", scpi_mea_value_refb_get);
  scpi_if_register_cmd("REFC:PAVA?", "REFC:PARAMETER_VALUE?", scpi_mea_value_refc_get);
  scpi_if_register_cmd("REFD:PAVA?", "REFD:PARAMETER_VALUE?", scpi_mea_value_refd_get);
  scpi_if_register_cmd("MATH:PAVA?", "MATH:PARAMETER_VALUE?", scpi_mea_value_math_get);
  scpi_if_register_cmd("PACU", "PARAMETER_CUSTOM", scpi_mea_type_set);
  scpi_if_register_cmd("PAVA?", "PARAMETER_VALUE?", scpi_cust_and_stat_get);
  scpi_if_register_cmd("PAVA", "PARAMETER_VALUE", scpi_cust_clear_set);
  scpi_if_register_bin_cmd("C1-C2:MEAD?", "C1-C2:MEAD?", scpi_delay_mea_value_ch1_ch2_get);
  scpi_if_register_bin_cmd("C1-C3:MEAD?", "C1-C3:MEAD?", scpi_delay_mea_value_ch1_ch3_get);
  scpi_if_register_bin_cmd("C1-C4:MEAD?", "C1-C4:MEAD?", scpi_delay_mea_value_ch1_ch4_get);
  scpi_if_register_bin_cmd("C2-C3:MEAD?", "C2-C3:MEAD?", scpi_delay_mea_value_ch2_ch3_get);
  scpi_if_register_bin_cmd("C2-C4:MEAD?", "C2-C4:MEAD?", scpi_delay_mea_value_ch2_ch4_get);
  scpi_if_register_bin_cmd("C3-C4:MEAD?", "C3-C4:MEAD?", scpi_delay_mea_value_ch3_ch4_get);
  scpi_if_register_bin_cmd("C2-C1:MEAD?", "C2-C1:MEAD?", scpi_delay_mea_value_ch2_ch1_get);
  scpi_if_register_bin_cmd("C3-C1:MEAD?", "C3-C1:MEAD?", scpi_delay_mea_value_ch3_ch1_get);
  scpi_if_register_bin_cmd("C4-C1:MEAD?", "C4-C1:MEAD?", scpi_delay_mea_value_ch4_ch1_get);
  scpi_if_register_bin_cmd("C3-C2:MEAD?", "C3-C2:MEAD?", scpi_delay_mea_value_ch3_ch2_get);
  scpi_if_register_bin_cmd("C4-C2:MEAD?", "C4-C2:MEAD?", scpi_delay_mea_value_ch4_ch2_get);
  scpi_if_register_bin_cmd("C4-C3:MEAD?", "C4-C3:MEAD?", scpi_delay_mea_value_ch4_ch3_get);
  scpi_if_register_bin_cmd("MEAD", "MEAD", scpi_delay_mea_value_set);
  scpi_if_register_cmd("MEGS", "MEASURE_GATE_SWITCH", scpi_mea_gate_switch_set);
  scpi_if_register_cmd("MEGA", "MEASURE_GATEA", scpi_mea_gate_a_set);
  scpi_if_register_cmd("MEGB", "MEASURE_GATEB", scpi_mea_gate_b_set);
  scpi_if_register_cmd("PASTAT", "PASTAT", scpi_stat_switch_set);
  scpi_if_register_cmd("MEACL", "MEASURE_CLEAR", scpi_mea_clear_set);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:SOUrce#", scpi_tek_mea_src_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:SOUrce#?", scpi_tek_mea_src_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:TYPe", scpi_tek_mea_item_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:TYPe?", scpi_tek_mea_item_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:UNIts?", scpi_tek_mea_unit_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:VALue?", scpi_tek_mea_value_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:DELay:DIRection", scpi_tek_mea_delay_direct_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:DELay:DIRection?", scpi_tek_mea_delay_direct_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:DELay:EDGE#", scpi_tek_mea_delay_edge_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:IMMed:DELay:EDGE#?", scpi_tek_mea_delay_edge_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:SOUrce#", scpi_tek_dis_mea_src_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:SOUrce#?", scpi_tek_dis_mea_src_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:TYPe", scpi_tek_dis_mea_item_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:TYPe?", scpi_tek_dis_mea_item_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:STATE", scpi_mea_advance_state_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:STATE?", scpi_mea_advance_state_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:VALue?", scpi_mea_advance_value_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:MEAN?", scpi_tek_dis_mea_statistic_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:DELay:DIRection", scpi_tek_dis_mea_delay_direct_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:DELay:DIRection?", scpi_tek_dis_mea_delay_direct_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:DELay:EDGE#", scpi_tek_dis_mea_delay_edge_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:MEAS#:DELay:EDGE#?", scpi_tek_dis_mea_delay_edge_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:REFLevel:METHod", scpi_tek_mea_ref_method_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:REFLevel:METHod?", scpi_tek_mea_ref_method_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:REFLevel:ABSolute:MID#", scpi_tek_mea_ref_abs_midlevel_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:REFLevel:ABSolute:MID#?", scpi_tek_mea_ref_abs_midlevel_get, 1);
  scpi_if_register_scpi_cmd("MEASUrement:REFLevel:PERCent:MID#", scpi_tek_mea_ref_perc_midlevel_set, 1);
  scpi_if_register_scpi_cmd("MEASUrement:REFLevel:PERCent:MID#?", scpi_tek_mea_ref_perc_midlevel_get, 1);
  scpi_if_register_private_cmd("D#:PAVA?", scpi_mea_value_digital_get);
  scpi_if_register_private_cmd("ZD#:PAVA?", scpi_mea_value_zdigital_get);
  scpi_if_register_private_cmd("MEASC", scpi_mea_src_set);
  scpi_if_register_private_cmd("MEASW", scpi_mea_switch_set);
  scpi_if_register_private_cmd("AMEASW", scpi_all_mea_switch_set);
  scpi_if_register_private_cmd("CM:PAVA?", scpi_curr_mea_value_get);
  scpi_if_register_private_cmd("CMPA", scpi_curr_mea_set);
  scpi_if_register_private_cmd("DI:MEAST?", scpi_digital_mea_status_get);
}

void scpi_register_cmd_mea_new(void)
{
  scpi_if_register_scpi_cmd(":MEASure", scpi_mea_switch_set, 1);
  scpi_if_register_scpi_cmd(":MEASure?", scpi_mea_switch_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:MODE", scpi_mea_mode_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:MODE?", scpi_mea_mode_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:GATE", scpi_mea_gate_switch_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:GATE?", scpi_mea_gate_switch_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:GATE:GA", scpi_mea_gate_a_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:GATE:GA?", scpi_mea_gate_a_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:GATE:GB", scpi_mea_gate_b_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:GATE:GB?", scpi_mea_gate_b_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:SIMPle:SOURce", scpi_mea_simple_src_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:SIMPle:SOURce?", scpi_mea_simple_src_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:SIMPle:ITEM", scpi_mea_simple_item_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:SIMPle:VALue?", scpi_mea_simple_value_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STYLe", scpi_mea_advance_mode_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STYLe?", scpi_mea_advance_mode_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:LINenumber", scpi_mea_advance_num_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:LINenumber?", scpi_mea_advance_num_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:TRENd", scpi_mea_trend_switch_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:TRENd?", scpi_mea_trend_switch_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics", scpi_mea_stat_switch_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics?", scpi_mea_stat_switch_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics:RESet", scpi_mea_stat_reset, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics:MAXCount", scpi_mea_stat_count_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics:MAXCount?", scpi_mea_stat_count_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics:HISTOGram", scpi_mea_histogram_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics:HISTOGram?", scpi_mea_histogram_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:STATistics:WINDow", scpi_mea_histogram_window_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#", scpi_mea_advance_state_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#?", scpi_mea_advance_state_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#:SOURce#", scpi_mea_advance_src_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#:SOURce#?", scpi_mea_advance_src_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#:TYPE", scpi_mea_advance_item_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#:TYPE?", scpi_mea_advance_item_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#:VALue?", scpi_mea_advance_value_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:ADVanced:P#:STATistics?", scpi_mea_advance_statistics_get, 1);
  scpi_if_register_scpi_cmd(":MEASure:THReshold:SOURce", scpi_mea_threshold_src_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:THReshold:TYPE", scpi_mea_threshold_type_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:THReshold:PERCent", scpi_mea_threshold_value_set, 1);
  scpi_if_register_scpi_cmd(":MEASure:THReshold:ABSolute", scpi_mea_threshold_value_set, 1);
}

void scpi_register_cmd_other(void)
{
  scpi_if_register_cmd("CHDR", "CHDR", scpi_com_format_set);
  scpi_if_register_cmd("CHDR?", "CHDR?", scpi_com_format_get);
  scpi_if_register_scpi_cmd("FPANEL:PRESS", scpi_tek_key_value_set, 1);
  scpi_if_register_private_bin_cmd("WEB:PSW", scpi_web_psw_set);
  scpi_if_register_private_cmd("WEB:PSW?", scpi_web_psw_get);
  scpi_if_register_private_bin_cmd("SY_FP", scpi_key_value_set);
  scpi_if_register_private_bin_cmd("$$SY_FP", scpi_key_value_set);
  scpi_if_register_private_cmd("LED?", scpi_led_state_get);
  scpi_if_register_private_bin_cmd("BUID", scpi_build_id_set);
  scpi_if_register_private_cmd("BUID?", scpi_build_id_get);
  scpi_if_register_private_cmd("FORMat:DATA", scpi_data_format_set);
  scpi_if_register_private_cmd("FORMat:DATA?", scpi_data_format_get);
}

void scpi_register_cmd_pass_fail(void)
{
  scpi_if_register_cmd("PFEN", "PF_ENABLE", scpi_if_pf_enable_set);
  scpi_if_register_cmd("PFEN?", "PF_ENABLE?", scpi_if_pf_enable_get);
  scpi_if_register_cmd("PFDS", "PF_DISPLAY", scpi_if_pf_display_set);
  scpi_if_register_cmd("PFDS?", "PF_DISPLAY?", scpi_if_pf_display_get);
  scpi_if_register_cmd("PFST", "PF_SET", scpi_if_pf_xy_set);
  scpi_if_register_cmd("PFST?", "PF_SET?", scpi_if_pf_xy_get);
  scpi_if_register_cmd("PFSC", "PF_SOURCE", scpi_if_pf_src_set);
  scpi_if_register_cmd("PFSC?", "PF_SOURCE?", scpi_if_pf_src_get);
  scpi_if_register_cmd("PFOP", "PF_OPERATION", scpi_if_pf_operation_set);
  scpi_if_register_cmd("PFOP?", "PF_OPERATION?", scpi_if_pf_operation_get);
  scpi_if_register_cmd("PFBF", "PF_BUFFER", scpi_if_pf_buffer_set);
  scpi_if_register_cmd("PFBF?", "PF_BUFFER?", scpi_if_pf_buffer_get);
  scpi_if_register_cmd("PFFS", "PF_FAIL_STOP", scpi_if_pf_fail_stop_set);
  scpi_if_register_cmd("PFFS?", "PF_FAIL_STOP?", scpi_if_pf_fail_stop_get);
  scpi_if_register_cmd("PFCM", "PF_CREATEM", scpi_if_pf_creat_mask_set);
  scpi_if_register_cmd("PFDD?", "PF_DATADIS?", scpi_if_pf_data_get);
  scpi_if_register_cmd("PACL", "PARAMETER_CLR", scpi_if_pf_clear_param);
  scpi_if_register_private_cmd("PFTY", scpi_if_pf_type_set);
  scpi_if_register_private_cmd("PFTY?", scpi_if_pf_type_get);
  scpi_if_register_private_cmd("PFHIS", scpi_if_pf_fail_history_set);
  scpi_if_register_private_cmd("PFHIS?", scpi_if_pf_fail_history_get);
  scpi_if_register_private_cmd("PFCAP", scpi_if_pf_fail_capture_set);
  scpi_if_register_private_cmd("PFCAP?", scpi_if_pf_fail_capture_get);
}

void scpi_register_cmd_pass_fail_new(void)
{
  scpi_if_register_scpi_cmd(":MTESt", scpi_if_pf_enable_set, 1);
  scpi_if_register_scpi_cmd(":MTESt?", scpi_if_pf_enable_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:SOURce", scpi_if_pf_src_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:SOURce?", scpi_if_pf_src_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:TYPE", scpi_if_pf_type_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:TYPE?", scpi_if_pf_type_get, 1);
  scpi_if_register_scpi_cmd(":MTESt:MASK:CREate", scpi_if_pf_creat_mask_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:MASK:CHECk?", scpi_if_pf_check_mask_get, 1);
  scpi_if_register_scpi_cmd(":MTESt:MASK:LOAD", scpi_if_pf_load_mask_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:OPERate", scpi_if_pf_operation_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:OPERate?", scpi_if_pf_operation_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:RESet", scpi_if_pf_clear_param, 1);
  scpi_if_register_scpi_cmd(":MTESt:COUNt?", scpi_if_pf_data_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:IDISplay", scpi_if_pf_display_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:IDISplay?", scpi_if_pf_display_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:BUZZer", scpi_if_pf_buffer_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:BUZZer?", scpi_if_pf_buffer_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:SOF", scpi_if_pf_fail_stop_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:SOF?", scpi_if_pf_fail_stop_get_new, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:FTH", scpi_if_pf_fail_history_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:FTH?", scpi_if_pf_fail_history_get, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:COF", scpi_if_pf_fail_capture_set, 1);
  scpi_if_register_scpi_cmd(":MTESt:FUNCtion:COF?", scpi_if_pf_fail_capture_get, 1);
}

void scpi_register_cmd_print_screen(void)
{
  scpi_if_register_cmd("SCDP", "SCDP", scpi_print_bmp);
  scpi_if_register_cmd("PNGDP", "PNGDP", scpi_print_png);
}

void scpi_register_cmd_print_screen_new(void)
{
  scpi_if_register_scpi_cmd(":PRINt", scpi_print_screen, 1);
}

void scpi_register_cmd_ref(void)
{
  scpi_if_register_cmd("REFSR", "REF_SOURCE", scpi_ref_source_set);
  scpi_if_register_cmd("REFSR?", "REF_SOURCE?", scpi_ref_source_get);
  scpi_if_register_cmd("REFLA", "REF_LOCATION", scpi_ref_location_set);
  scpi_if_register_cmd("REFLA?", "REF_LOCATION?", scpi_ref_location_get);
  scpi_if_register_cmd("REFSA", "REF_SAVE", scpi_ref_save_set);
  scpi_if_register_cmd("REFDS", "REF_DISPLAY", scpi_ref_display_set);
  scpi_if_register_cmd("REFDS?", "REF_DISPLAY?", scpi_ref_display_get);
  scpi_if_register_cmd("REFSC", "REF_SCALE", scpi_ref_scale_set);
  scpi_if_register_cmd("REFSC?", "REF_SCALE?", scpi_ref_scale_get);
  scpi_if_register_cmd("REFPO", "REF_POSITION", scpi_ref_position_set);
  scpi_if_register_cmd("REFPO?", "REF_POSITION?", scpi_ref_position_get);
  scpi_if_register_cmd("REFCL", "REF_CLOSE", scpi_ref_function_close);
}

void scpi_register_cmd_ref_new(void)
{
  scpi_if_register_scpi_cmd(":REFA:DATA", scpi_refa_operation_set, 1);
  scpi_if_register_scpi_cmd(":REFA:DATA:SOURce?", scpi_refa_save_source_get, 1);
  scpi_if_register_scpi_cmd(":REFA:DATA:SCALe", scpi_refa_scale_set, 1);
  scpi_if_register_scpi_cmd(":REFA:DATA:SCALe?", scpi_refa_scale_get, 1);
  scpi_if_register_scpi_cmd(":REFA:DATA:POSition", scpi_refa_position_set, 1);
  scpi_if_register_scpi_cmd(":REFA:DATA:POSition?", scpi_refa_position_get, 1);
  scpi_if_register_scpi_cmd(":REFA:LABel", scpi_refa_label_display_set, 1);
  scpi_if_register_scpi_cmd(":REFA:LABel?", scpi_refa_label_display_get, 1);
  scpi_if_register_scpi_cmd(":REFA:LABel:TEXT", scpi_refa_label_text_set, 1);
  scpi_if_register_scpi_cmd(":REFA:LABel:TEXT?", scpi_refa_label_text_get, 1);
  scpi_if_register_scpi_cmd(":REFB:DATA", scpi_refb_operation_set, 1);
  scpi_if_register_scpi_cmd(":REFB:DATA:SOURce?", scpi_refb_save_source_get, 1);
  scpi_if_register_scpi_cmd(":REFB:DATA:SCALe", scpi_refb_scale_set, 1);
  scpi_if_register_scpi_cmd(":REFB:DATA:SCALe?", scpi_refb_scale_get, 1);
  scpi_if_register_scpi_cmd(":REFB:DATA:POSition", scpi_refb_position_set, 1);
  scpi_if_register_scpi_cmd(":REFB:DATA:POSition?", scpi_refb_position_get, 1);
  scpi_if_register_scpi_cmd(":REFB:LABel", scpi_refb_label_display_set, 1);
  scpi_if_register_scpi_cmd(":REFB:LABel?", scpi_refb_label_display_get, 1);
  scpi_if_register_scpi_cmd(":REFB:LABel:TEXT", scpi_refb_label_text_set, 1);
  scpi_if_register_scpi_cmd(":REFB:LABel:TEXT?", scpi_refb_label_text_get, 1);
  scpi_if_register_scpi_cmd(":REFC:DATA", scpi_refc_operation_set, 1);
  scpi_if_register_scpi_cmd(":REFC:DATA:SOURce?", scpi_refc_save_source_get, 1);
  scpi_if_register_scpi_cmd(":REFC:DATA:SCALe", scpi_refc_scale_set, 1);
  scpi_if_register_scpi_cmd(":REFC:DATA:SCALe?", scpi_refc_scale_get, 1);
  scpi_if_register_scpi_cmd(":REFC:DATA:POSition", scpi_refc_position_set, 1);
  scpi_if_register_scpi_cmd(":REFC:DATA:POSition?", scpi_refc_position_get, 1);
  scpi_if_register_scpi_cmd(":REFC:LABel", scpi_refc_label_display_set, 1);
  scpi_if_register_scpi_cmd(":REFC:LABel?", scpi_refc_label_display_get, 1);
  scpi_if_register_scpi_cmd(":REFC:LABel:TEXT", scpi_refc_label_text_set, 1);
  scpi_if_register_scpi_cmd(":REFC:LABel:TEXT?", scpi_refc_label_text_get, 1);
  scpi_if_register_scpi_cmd(":REFD:DATA", scpi_refd_operation_set, 1);
  scpi_if_register_scpi_cmd(":REFD:DATA:SOURce?", scpi_refd_save_source_get, 1);
  scpi_if_register_scpi_cmd(":REFD:DATA:SCALe", scpi_refd_scale_set, 1);
  scpi_if_register_scpi_cmd(":REFD:DATA:SCALe?", scpi_refd_scale_get, 1);
  scpi_if_register_scpi_cmd(":REFD:DATA:POSition", scpi_refd_position_set, 1);
  scpi_if_register_scpi_cmd(":REFD:DATA:POSition?", scpi_refd_position_get, 1);
  scpi_if_register_scpi_cmd(":REFD:LABel", scpi_refd_label_display_set, 1);
  scpi_if_register_scpi_cmd(":REFD:LABel?", scpi_refd_label_display_get, 1);
  scpi_if_register_scpi_cmd(":REFD:LABel:TEXT", scpi_refd_label_text_set, 1);
  scpi_if_register_scpi_cmd(":REFD:LABel:TEXT?", scpi_refd_label_text_get, 1);
}

void scpi_register_cmd_save_recall(void)
{
  scpi_if_register_cmd("*RST", "*RST", scpi_set_default);
  scpi_if_register_bin_cmd("PNSU", "PANEL_SETUP", scpi_cur_config_set);
  scpi_if_register_cmd("*RCL", "*RCL", scpi_recall_setup_inter);
  scpi_if_register_cmd("*SAV", "*SAV", scpi_save_setup_inter);
  scpi_if_register_cmd("RCPN", "RECALL_PANEL", scpi_recall_setup_disk);
  scpi_if_register_cmd("STPN", "STORE_PANEL", scpi_save_setup_disk);
  scpi_if_register_cmd("CSVS", "CSVS", scpi_csv_param_save_set);
  scpi_if_register_cmd("CSVS?", "CSVS?", scpi_csv_param_save_get);
  scpi_if_register_private_cmd("SUSWF?", scpi_support_save_wf_to_bin);
  scpi_if_register_private_cmd("WFDA?", scpi_save_wf_to_bin);
  scpi_if_register_private_cmd("WFDAHSR?", scpi_save_wf_to_bin_hsr);
  scpi_if_register_private_cmd("WFDAF?", scpi_save_wf_to_bin_finish);
  scpi_if_register_private_cmd("PNSU?", scpi_cur_config_get);
  scpi_if_register_private_cmd("DFKS", scpi_default_key_set);
}

void scpi_register_cmd_save_recall_new(void)
{
  scpi_if_register_scpi_cmd(":SAVE:SETup", scpi_save_setup_set, 1);
  scpi_if_register_scpi_cmd(":SAVE:DEFault", scpi_save_default_type_set, 1);
  scpi_if_register_scpi_cmd(":SAVE:REFerence", scpi_save_ref_set, 1);
  scpi_if_register_scpi_cmd(":SAVE:CSV", scpi_save_csv_set, 1);
  scpi_if_register_scpi_cmd(":SAVE:MATLab", scpi_save_matlab_set, 1);
  scpi_if_register_scpi_cmd(":SAVE:IMAGe", scpi_save_image_set, 1);
  scpi_if_register_scpi_cmd(":SAVE:BINary", scpi_save_binary_set, 1);
  scpi_if_register_scpi_cmd(":RECall:SETup", scpi_recall_setup_set, 1);
  scpi_if_register_scpi_cmd(":RECall:FDEFault", scpi_recall_default, 1);
  scpi_if_register_scpi_cmd(":RECall:REFerence", scpi_recall_ref_set, 1);
  scpi_if_register_scpi_cmd(":RECall:SERase", scpi_recall_security_erase, 1);
}

void scpi_register_cmd_trig(void)
{
  scpi_if_register_cmd("C#:TRLV", "C#:TRIG_LEVEL", scpi_trig_level_ch_set);
  scpi_if_register_cmd("C#:TRLV?", "C#:TRIG_LEVEL?", scpi_trig_level_ch_get);
  scpi_if_register_cmd("EX:TRLV", "EX:TRIG_LEVEL", scpi_trig_level_ext_set);
  scpi_if_register_cmd("EX:TRLV?", "EX:TRIG_LEVEL?", scpi_trig_level_ext_get);
  scpi_if_register_cmd("EX5:TRLV", "EX5:TRIG_LEVEL", scpi_trig_level_ext5_set);
  scpi_if_register_cmd("EX5:TRLV?", "EX5:TRIG_LEVEL?", scpi_trig_level_ext5_get);
  scpi_if_register_cmd("C#:TRLV2", "C#:TRIG_LEVEL2", scpi_trig_level_second_ch_set);
  scpi_if_register_cmd("C#:TRLV2?", "C#:TRIG_LEVEL2?", scpi_trig_level_second_ch_get);
  scpi_if_register_cmd("C#:TRSL", "C#:TRIG_SLOPE", scpi_trig_slope_ch_set);
  scpi_if_register_cmd("C#:TRSL?", "C#:TRIG_SLOPE?", scpi_trig_slope_ch_get);
  scpi_if_register_cmd("EX:TRSL", "EX:TRIG_SLOPE", scpi_trig_slope_ext_set);
  scpi_if_register_cmd("EX:TRSL?", "EX:TRIG_SLOPE?", scpi_trig_slope_ext_get);
  scpi_if_register_cmd("EX5:TRSL", "EX5:TRIG_SLOPE", scpi_trig_slope_ext5_set);
  scpi_if_register_cmd("EX5:TRSL?", "EX5:TRIG_SLOPE?", scpi_trig_slope_ext5_get);
  scpi_if_register_cmd("LINE:TRSL", "LINE:TRIG_SLOPE", scpi_trig_slope_line_set);
  scpi_if_register_cmd("LINE:TRSL?", "LINE:TRIG_SLOPE?", scpi_trig_slope_line_get);
  scpi_if_register_cmd("C#:TRCP", "C#:TRIG_COUPLING", scpi_trig_coupl_ch_set);
  scpi_if_register_cmd("C#:TRCP?", "C#:TRIG_COUPLING?", scpi_trig_coupl_ch_get);
  scpi_if_register_cmd("EX:TRCP", "EX:TRIG_COUPLING", scpi_trig_coupl_ext_set);
  scpi_if_register_cmd("EX:TRCP?", "EX:TRIG_COUPLING?", scpi_trig_coupl_ext_get);
  scpi_if_register_cmd("EX5:TRCP", "EX5:TRIG_COUPLING", scpi_trig_coupl_ext5_set);
  scpi_if_register_cmd("EX5:TRCP?", "EX5:TRIG_COUPLING?", scpi_trig_coupl_ext5_get);
  scpi_if_register_cmd("LINE:TRCP", "LINE:TRIG_COUPLING", scpi_trig_coupl_line_set);
  scpi_if_register_cmd("LINE:TRCP?", "LINE:TRIG_COUPLING?", scpi_trig_coupl_line_get);
  scpi_if_register_cmd("TRCP", "TRIG_COUPLING", scpi_trig_coupling_set);
  scpi_if_register_cmd("TRCP?", "TRIG_COUPLING?", scpi_trig_coupling_get);
  scpi_if_register_cmd("TRSE?", "TRIG_SELECT?", scpi_trig_type_get);
  scpi_if_register_bin_cmd("TRSE", "TRIG_SELECT", scpi_trig_type_set);
  scpi_if_register_cmd("TRMD?", "TRIG_MODE?", scpi_trig_mode_get);
  scpi_if_register_cmd("TRMD", "TRIG_MODE", scpi_trig_mode_set);
  scpi_if_register_cmd("SET50", "SET50", scpi_trig_level50_set);
  scpi_if_register_cmd("TRWI?", "TRIG_WINDOW?", scpi_trig_window_get);
  scpi_if_register_cmd("TRWI", "TRIG_WINDOW", scpi_trig_window_set);
  scpi_if_register_cmd("TRPA?", "TRIG_PATTERN?", scpi_trig_pattern_get);
  scpi_if_register_cmd("TRPA", "TRIG_PATTERN", scpi_trig_pattern_set);
  scpi_if_register_cmd("STOP", "STOP", scpi_stop_once_set);
  scpi_if_register_cmd("ARM", "ARM_ACQUISITION", scpi_single_once_set);
  scpi_if_register_cmd("TRLV?", "TRIG_LEVEL?", scpi_trig_level_src_get);
  scpi_if_register_cmd("SAST?", "SAMPLE_STATUS?", scpi_trig_sample_state_get);
  scpi_if_register_cmd("TRIIC:SCL", "TRIG_IIC:SCL", scpi_trig_iic_scl_set);
  scpi_if_register_cmd("TRIIC:SCL?", "TRIG_IIC:SCL?", scpi_trig_iic_scl_get);
  scpi_if_register_cmd("TRIIC:SDA", "TRIG_IIC:SDA", scpi_trig_iic_sda_set);
  scpi_if_register_cmd("TRIIC:SDA?", "TRIG_IIC:SDA?", scpi_trig_iic_sda_get);
  scpi_if_register_cmd("TRIIC:CON", "TRIG_IIC:CONDITION", scpi_trig_iic_condition_set);
  scpi_if_register_cmd("TRIIC:CON?", "TRIG_IIC:CONDITION?", scpi_trig_iic_condition_get);
  scpi_if_register_cmd("TRIIC:ADDR", "TRIG_IIC:ADDRESS", scpi_trig_iic_address_set);
  scpi_if_register_cmd("TRIIC:ADDR?", "TRIG_IIC:ADDRESS?", scpi_trig_iic_address_get);
  scpi_if_register_cmd("TRIIC:DATA", "TRIG_IIC:DATA", scpi_trig_iic_data1_set);
  scpi_if_register_cmd("TRIIC:DATA?", "TRIG_IIC:DATA?", scpi_trig_iic_data1_get);
  scpi_if_register_cmd("TRIIC:DAT2", "TRIG_IIC:DATA2", scpi_trig_iic_data2_set);
  scpi_if_register_cmd("TRIIC:DAT2?", "TRIG_IIC:DATA2?", scpi_trig_iic_data2_get);
  scpi_if_register_cmd("TRIIC:QUAL", "TRIG_IIC:QUALIFIER", scpi_trig_iic_compare_set);
  scpi_if_register_cmd("TRIIC:QUAL?", "TRIG_IIC:QUALIFIER?", scpi_trig_iic_compare_get);
  scpi_if_register_cmd("TRIIC:RW", "TRIG_IIC:RW", scpi_trig_iic_rw_set);
  scpi_if_register_cmd("TRIIC:RW?", "TRIG_IIC:RW?", scpi_trig_iic_rw_get);
  scpi_if_register_cmd("TRIIC:ALEN", "TRIG_IIC:ADDR_LEN", scpi_trig_iic_addr_len_set);
  scpi_if_register_cmd("TRIIC:ALEN?", "TRIG_IIC:ADDR_LEN?", scpi_trig_iic_addr_len_get);
  scpi_if_register_cmd("TRIIC:DLEN", "TRIG_IIC:DATA_LEN", scpi_trig_iic_byte_len_set);
  scpi_if_register_cmd("TRIIC:DLEN?", "TRIG_IIC:DATA_LEN?", scpi_trig_iic_byte_len_get);
  scpi_if_register_cmd("TRSPI:CLK", "TRIG_SPI:CLK", scpi_trig_spi_clk_set);
  scpi_if_register_cmd("TRSPI:CLK?", "TRIG_SPI:CLK?", scpi_trig_spi_clk_get);
  scpi_if_register_cmd("TRSPI:CLK:EDGE", "TRIG_SPI:CLK:EDGE", scpi_trig_spi_clk_slope_set);
  scpi_if_register_cmd("TRSPI:CLK:EDGE?", "TRIG_SPI:CLK:EDGE?", scpi_trig_spi_clk_slope_get);
  scpi_if_register_cmd("TRSPI:CLK:TIM", "TRIG_SPI:CLK:TIME", scpi_trig_spi_timeout_set);
  scpi_if_register_cmd("TRSPI:CLK:TIM?", "TRIG_SPI:CLK:TIM?", scpi_trig_spi_timeout_get);
  scpi_if_register_cmd("TRSPI:MOSI", "TRIG_SPI:MOSI", scpi_trig_spi_mosi_set);
  scpi_if_register_cmd("TRSPI:MOSI?", "TRIG_SPI:MOSI?", scpi_trig_spi_mosi_get);
  scpi_if_register_cmd("TRSPI:MISO", "TRIG_SPI:MISO", scpi_trig_spi_miso_set);
  scpi_if_register_cmd("TRSPI:MISO?", "TRIG_SPI:MISO?", scpi_trig_spi_miso_get);
  scpi_if_register_cmd("TRSPI:CSTP", "TRIG_SPI:CSTYPE", scpi_trig_spi_cs_type_set);
  scpi_if_register_cmd("TRSPI:CSTP?", "TRIG_SPI:CSTYPE?", scpi_trig_spi_cs_type_get);
  scpi_if_register_cmd("TRSPI:CS", "TRIG_SPI:CS", scpi_trig_spi_cs_set);
  scpi_if_register_cmd("TRSPI:CS?", "TRIG_SPI:CS?", scpi_trig_spi_cs_get);
  scpi_if_register_cmd("TRSPI:NCS", "TRIG_SPI:NCS", scpi_trig_spi_ncs_set);
  scpi_if_register_cmd("TRSPI:NCS?", "TRIG_SPI:NCS?", scpi_trig_spi_ncs_get);
  scpi_if_register_cmd("TRSPI:TRTY", "TRIG_SPI:TRTY", scpi_trig_spi_trig_type_set);
  scpi_if_register_cmd("TRSPI:TRTY?", "TRIG_SPI:TRTY?", scpi_trig_spi_trig_type_get);
  scpi_if_register_cmd("TRSPI:DLEN", "TRIG_SPI:DATA_LEN", scpi_trig_spi_data_len_set);
  scpi_if_register_cmd("TRSPI:DLEN?", "TRIG_SPI:DATA_LEN?", scpi_trig_spi_data_len_get);
  scpi_if_register_cmd("TRSPI:DATA", "TRIG_SPI:DATA", scpi_trig_spi_bit_value_set);
  scpi_if_register_cmd("TRSPI:BIT", "TRIG_SPI:BIT", scpi_trig_spi_bit_order_set);
  scpi_if_register_cmd("TRSPI:BIT?", "TRIG_SPI:BIT?", scpi_trig_spi_bit_order_get);
  scpi_if_register_cmd("TRUART:RX", "TRIG_UART:RX", scpi_trig_uart_rx_set);
  scpi_if_register_cmd("TRUART:RX?", "TRIG_UART:RX?", scpi_trig_uart_rx_get);
  scpi_if_register_cmd("TRUART:TX", "TRIG_UART:TX", scpi_trig_uart_tx_set);
  scpi_if_register_cmd("TRUART:TX?", "TRIG_UART:TX?", scpi_trig_uart_tx_get);
  scpi_if_register_cmd("TRUART:TRTY", "TRIG_UART:TRTY", scpi_trig_uart_source_type_set);
  scpi_if_register_cmd("TRUART:TRTY?", "TRIG_UART:TRTY?", scpi_trig_uart_source_type_get);
  scpi_if_register_cmd("TRUART:CON", "TRIG_UART:CONDITION", scpi_trig_uart_condition_set);
  scpi_if_register_cmd("TRUART:CON?", "TRIG_UART:CONDITION?", scpi_trig_uart_condition_get);
  scpi_if_register_cmd("TRUART:QUAL", "TRIG_UART:QUALIFIER", scpi_trig_uart_compare_set);
  scpi_if_register_cmd("TRUART:QUAL?", "TRIG_UART:QUALIFIER?", scpi_trig_uart_compare_get);
  scpi_if_register_cmd("TRUART:DATA", "TRIG_UART:DATA", scpi_trig_uart_data_set);
  scpi_if_register_cmd("TRUART:DATA?", "TRIG_UART:DATA?", scpi_trig_uart_data_get);
  scpi_if_register_cmd("TRUART:BAUD", "TRIG_UART:BAUD", scpi_trig_uart_baud_set);
  scpi_if_register_cmd("TRUART:BAUD?", "TRIG_UART:BAUD?", scpi_trig_uart_baud_get);
  scpi_if_register_cmd("TRUART:DLEN", "TRIG_UART:DATA_LEN", scpi_trig_uart_data_len_set);
  scpi_if_register_cmd("TRUART:DLEN?", "TRIG_UART:DATA_LEN?", scpi_trig_uart_data_len_get);
  scpi_if_register_cmd("TRUART:PAR", "TRIG_UART:PARITY", scpi_trig_uart_parity_check_set);
  scpi_if_register_cmd("TRUART:PAR?", "TRIG_UART:PARITY?", scpi_trig_uart_parity_check_get);
  scpi_if_register_cmd("TRUART:POL", "TRIG_UART:POLARITY", scpi_trig_uart_idle_level_set);
  scpi_if_register_cmd("TRUART:POL?", "TRIG_UART:POLARITY?", scpi_trig_uart_idle_level_get);
  scpi_if_register_cmd("TRUART:STOP", "TRIG_UART:STOP", scpi_trig_uart_stop_bit_set);
  scpi_if_register_cmd("TRUART:STOP?", "TRIG_UART:STOP?", scpi_trig_uart_stop_bit_get);
  scpi_if_register_cmd("TRUART:BIT", "TRIG_UART:BIT", scpi_trig_uart_bit_order_set);
  scpi_if_register_cmd("TRUART:BIT?", "TRIG_UART:BIT?", scpi_trig_uart_bit_order_get);
  scpi_if_register_cmd("TRCAN:CANH", "TRIG_CAN:CANH", scpi_trig_can_can_h_set);
  scpi_if_register_cmd("TRCAN:CANH?", "TRIG_CAN:CANH?", scpi_trig_can_can_h_get);
  scpi_if_register_cmd("TRCAN:CANL", "TRIG_CAN:CANL", scpi_trig_can_can_l_set);
  scpi_if_register_cmd("TRCAN:CANL?", "TRIG_CAN:CANL?", scpi_trig_can_can_l_get);
  scpi_if_register_cmd("TRCAN:TRTY", "TRIG_CAN:TRTY", scpi_trig_can_trig_source_set);
  scpi_if_register_cmd("TRCAN:TRTY?", "TRIG_CAN:TRTY?", scpi_trig_can_trig_source_get);
  scpi_if_register_cmd("TRCAN:CON", "TRIG_CAN:CONDITION", scpi_trig_can_condition_set);
  scpi_if_register_cmd("TRCAN:CON?", "TRIG_CAN:CONDITION?", scpi_trig_can_condition_get);
  scpi_if_register_cmd("TRCAN:ID", "TRIG_CAN:ID", scpi_trig_can_id_set);
  scpi_if_register_cmd("TRCAN:ID?", "TRIG_CAN:ID?", scpi_trig_can_id_get);
  scpi_if_register_cmd("TRCAN:IDL", "TRIG_CAN:ID_LEN", scpi_trig_can_id_bits_set);
  scpi_if_register_cmd("TRCAN:IDL?", "TRIG_CAN:ID_LEN?", scpi_trig_can_id_bits_get);
  scpi_if_register_cmd("TRCAN:DATA", "TRIG_CAN:DATA", scpi_trig_can_data1_set);
  scpi_if_register_cmd("TRCAN:DATA?", "TRIG_CAN:DATA?", scpi_trig_can_data1_get);
  scpi_if_register_cmd("TRCAN:DAT2", "TRIG_CAN:DATA2", scpi_trig_can_data2_set);
  scpi_if_register_cmd("TRCAN:DAT2?", "TRIG_CAN:DATA2?", scpi_trig_can_data2_get);
  scpi_if_register_cmd("TRCAN:BAUD", "TRIG_CAN:BAUD", scpi_trig_can_baud_set);
  scpi_if_register_cmd("TRCAN:BAUD?", "TRIG_CAN:BAUD?", scpi_trig_can_baud_get);
  scpi_if_register_cmd("TRLIN:SRC", "TRIG_LIN:SOURCE", scpi_trig_lin_src_set);
  scpi_if_register_cmd("TRLIN:SRC?", "TRIG_LIN:SOURCE?", scpi_trig_lin_src_get);
  scpi_if_register_cmd("TRLIN:CON", "TRIG_LIN:CONDITION", scpi_trig_lin_condition_set);
  scpi_if_register_cmd("TRLIN:CON?", "TRIG_LIN:CONDITION?", scpi_trig_lin_condition_get);
  scpi_if_register_cmd("TRLIN:ID", "TRIG_LIN:ID", scpi_trig_lin_id_set);
  scpi_if_register_cmd("TRLIN:ID?", "TRIG_LIN:ID?", scpi_trig_lin_id_get);
  scpi_if_register_cmd("TRLIN:DATA", "TRIG_LIN:DATA", scpi_trig_lin_data1_set);
  scpi_if_register_cmd("TRLIN:DATA?", "TRIG_LIN:DATA?", scpi_trig_lin_data1_get);
  scpi_if_register_cmd("TRLIN:DAT2", "TRIG_LIN:DATA2", scpi_trig_lin_data2_set);
  scpi_if_register_cmd("TRLIN:DAT2?", "TRIG_LIN:DATA2?", scpi_trig_lin_data2_get);
  scpi_if_register_cmd("TRLIN:DLEN", "TRIG_LIN:DATA_LEN", scpi_trig_lin_data_bytes_set);
  scpi_if_register_cmd("TRLIN:DLEN?", "TRIG_LIN:DATA_LEN?", scpi_trig_lin_data_bytes_get);
  scpi_if_register_cmd("TRLIN:ERR:ID", "TRIG_LIN:ERR:ID", scpi_trig_lin_error_frame_id_set);
  scpi_if_register_cmd("TRLIN:ERR:ID?", "TRIG_LIN:ERR:ID?", scpi_trig_lin_error_frame_id_get);
  scpi_if_register_cmd("TRLIN:ERR:CHK", "TRIG_LIN:ERR:CHECK", scpi_trig_lin_checksum_error_set);
  scpi_if_register_cmd("TRLIN:ERR:CHK?", "TRIG_LIN:ERR:CHECK?", scpi_trig_lin_checksum_error_set);
  scpi_if_register_cmd("TRLIN:ERR:SYNC", "TRIG_LIN:ERR:SYNC", scpi_trig_lin_sync_error_set);
  scpi_if_register_cmd("TRLIN:ERR:SYNC?", "TRIG_LIN:ERR:SYNC?", scpi_trig_lin_sync_error_get);
  scpi_if_register_cmd("TRLIN:ERR:PAR", "TRIG_LIN:ERR:PAR", scpi_trig_lin_parity_error_set);
  scpi_if_register_cmd("TRLIN:ERR:PAR?", "TRIG_LIN:ERR:PAR?", scpi_trig_lin_parity_error_get);
  scpi_if_register_cmd("TRLIN:BAUD", "TRIG_LIN:BAUD", scpi_trig_lin_baud_set);
  scpi_if_register_cmd("TRLIN:BAUD?", "TRIG_LIN:BAUD?", scpi_trig_lin_baud_get);
  scpi_if_register_cmd("TRLIN:STAN", "TRIG_LIN:STANDARD", scpi_trig_lin_spec_set);
  scpi_if_register_cmd("TRLIN:STAN?", "TRIG_LIN:STANDARD?", scpi_trig_lin_spec_get);
  scpi_if_register_scpi_cmd("ACQuire:STATE", scpi_tek_acq_state_set, 1);
  scpi_if_register_scpi_cmd("ACQuire:STATE?", scpi_tek_acq_state_get, 1);
  scpi_if_register_scpi_cmd("ACQuire:STOPAfter", scpi_tek_acq_after_stop_set, 1);
  scpi_if_register_scpi_cmd("ACQuire:STOPAfter?", scpi_tek_acq_after_stop_get, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:MODe", scpi_tek_trig_mode_set, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:MODe?", scpi_tek_trig_mode_get, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:TYPe", scpi_tek_trig_type_set, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:TYPe?", scpi_tek_trig_type_get, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:LEVel", scpi_tek_edg_trig_level_set, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:LEVel?", scpi_edg_trig_level_get, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:EDGE:SOUrce", scpi_tek_edge_trig_source_set, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:EDGE:SOUrce?", scpi_tek_edge_trig_source_get, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:EDGE:COUPling", scpi_tek_edge_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:EDGE:COUPling?", scpi_tek_edge_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:EDGE:SLOpe", scpi_tek_edge_trig_slope_set, 1);
  scpi_if_register_scpi_cmd("TRIGger:A:EDGE:SLOpe?", scpi_tek_edge_trig_slope_get, 1);
  scpi_if_register_private_cmd("TRTY", scpi_trigger_type_set);
  scpi_if_register_private_cmd("TRSR", scpi_trigger_source_set);
  scpi_if_register_private_cmd("TRSR?", scpi_trigger_source_get);
  scpi_if_register_private_cmd("TRDP", scpi_trig_drop_type_set);
  scpi_if_register_private_cmd("TRDP?", scpi_trig_drop_type_get);
  scpi_if_register_private_cmd("TRPH", scpi_digital_trig_pattern_holdoff_set);
  scpi_if_register_private_cmd("TRPH?", scpi_digital_trig_pattern_holdoff_get);
  scpi_if_register_private_cmd("TRPT", scpi_digital_trig_pattern_limit_set);
  scpi_if_register_private_cmd("TRPT?", scpi_digital_trig_pattern_limit_get);
  scpi_if_register_private_cmd("TRFSM?", scpi_trig_fsm_get);
  scpi_if_register_private_cmd("TRIIC", scpi_digital_trig_iic_set);
  scpi_if_register_private_cmd("TRIIC?", scpi_digital_trig_iic_get);
  scpi_if_register_private_cmd("TRSPI", scpi_digital_trig_spi_set);
  scpi_if_register_private_cmd("TRSPI?", scpi_digital_trig_spi_get);
  scpi_if_register_private_cmd("TRUART", scpi_digital_trig_uart_set);
  scpi_if_register_private_cmd("TRUART?", scpi_digital_trig_uart_get);
  scpi_if_register_private_cmd("TRCAN", scpi_digital_trig_can_set);
  scpi_if_register_private_cmd("TRCAN?", scpi_digital_trig_can_get);
  scpi_if_register_private_cmd("TRLIN", scpi_digital_trig_lin_set);
  scpi_if_register_private_cmd("TRLIN?", scpi_digital_trig_lin_get);
  scpi_if_register_private_cmd("TRST?", scpi_trig_state_get);
  scpi_if_register_private_cmd("TRNR", scpi_trig_noise_reject_set);
  scpi_if_register_private_cmd("TRNR?", scpi_trig_noise_reject_get);
}

void scpi_register_cmd_trig_new(void)
{
  scpi_if_register_scpi_cmd(":TRIGger:TYPE", scpi_trig_type_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:TYPE?", scpi_trig_type_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:MODE", scpi_trig_mode_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:MODE?", scpi_trig_mode_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUN", scpi_trig_run_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:STOP", scpi_trig_stop_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:STATus?", scpi_trig_sample_state_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FORCe", scpi_stop_once_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FREQuency?", scpi_trigger_freq_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SET50", scpi_trig_level50_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:SOURce", scpi_edge_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:SOURce?", scpi_edge_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:COUPling", scpi_edge_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:COUPling?", scpi_edge_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:SLOPe", scpi_edge_trig_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:SLOPe?", scpi_edge_trig_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:LEVel", scpi_edg_trig_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:LEVel?", scpi_edg_trig_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HOLDoff", scpi_edge_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HOLDoff?", scpi_edge_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HLDTime", scpi_edge_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HLDTime?", scpi_edge_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HLDEVent", scpi_edge_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HLDEVent?", scpi_edge_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:EDGE:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:SOURce", scpi_slope_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:SOURce?", scpi_slope_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:COUPling", scpi_slope_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:COUPling?", scpi_slope_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:SLOPe", scpi_slope_trig_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:SLOPe?", scpi_slope_trig_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HLEVel", scpi_slope_trig_hlevel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HLEVel?", scpi_slope_trig_hlevel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:LLEVel", scpi_slope_trig_llevel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:LLEVel?", scpi_slope_trig_llevel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HOLDoff", scpi_slope_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HOLDoff?", scpi_slope_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HLDTime", scpi_slope_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HLDTime?", scpi_slope_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HLDEVent", scpi_slope_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HLDEVent?", scpi_slope_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:LIMit", scpi_slope_trig_limit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:LIMit?", scpi_slope_trig_limit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:TUPPer", scpi_slope_trig_limit_high_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:TUPPer?", scpi_slope_trig_limit_high_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:TLOWer", scpi_slope_trig_limit_low_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SLOPe:TLOWer?", scpi_slope_trig_limit_low_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:SOURce", scpi_pulse_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:SOURce?", scpi_pulse_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:COUPling", scpi_pulse_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:COUPling?", scpi_pulse_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:POLarity", scpi_pulse_trig_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:POLarity?", scpi_pulse_trig_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:LEVel", scpi_pulse_trig_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:LEVel?", scpi_pulse_trig_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HOLDoff", scpi_pulse_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HOLDoff?", scpi_pulse_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HLDTime", scpi_pulse_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HLDTime?", scpi_pulse_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HLDEVent", scpi_pulse_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HLDEVent?", scpi_pulse_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:LIMit", scpi_pulse_trig_limit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:LIMit?", scpi_pulse_trig_limit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:TUPPer", scpi_pulse_trig_limit_high_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:TUPPer?", scpi_pulse_trig_limit_high_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:TLOWer", scpi_pulse_trig_limit_low_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PULSe:TLOWer?", scpi_pulse_trig_limit_low_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:SOURce", scpi_video_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:SOURce?", scpi_video_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:LEVel", scpi_video_trig_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:LEVel?", scpi_video_trig_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:STANdard", scpi_video_trig_standard_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:STANdard?", scpi_video_trig_standard_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:SYNC", scpi_video_trig_sync_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:SYNC?", scpi_video_trig_sync_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:LINE", scpi_video_trig_line_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:LINE?", scpi_video_trig_line_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:FIELd", scpi_video_trig_field_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:FIELd?", scpi_video_trig_field_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:FRATe", scpi_video_trig_frame_rate_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:FRATe?", scpi_video_trig_frame_rate_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:LCNT", scpi_video_trig_line_cnt_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:LCNT?", scpi_video_trig_line_cnt_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:FCNT", scpi_video_trig_field_cnt_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:FCNT?", scpi_video_trig_field_cnt_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:INTerlace", scpi_video_trig_interlace_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:VIDeo:INTerlace?", scpi_video_trig_interlace_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:SOURce", scpi_window_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:SOURce?", scpi_window_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:COUPling", scpi_window_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:COUPling?", scpi_window_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:TYPE", scpi_trig_window_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:TYPE?", scpi_trig_window_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HLEVel", scpi_window_trig_hlevel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HLEVel?", scpi_window_trig_hlevel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:LLEVel", scpi_window_trig_llevel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:LLEVel?", scpi_window_trig_llevel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:CLEVel", scpi_window_trig_center_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:CLEVel?", scpi_window_trig_center_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:DLEVel", scpi_window_trig_delta_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:DLEVel?", scpi_window_trig_delta_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HOLDoff", scpi_wind_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HOLDoff?", scpi_wind_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HLDTime", scpi_wind_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HLDTime?", scpi_wind_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HLDEVent", scpi_wind_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HLDEVent?", scpi_wind_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:WINDow:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:SOURce", scpi_runt_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:SOURce?", scpi_runt_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:COUPling", scpi_runt_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:COUPling?", scpi_runt_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:POLarity", scpi_runt_trig_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:POLarity?", scpi_runt_trig_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HLEVel", scpi_runt_trig_hlevel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HLEVel?", scpi_runt_trig_hlevel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:LLEVel", scpi_runt_trig_llevel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:LLEVel?", scpi_runt_trig_llevel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:LIMit", scpi_runt_trig_limit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:LIMit?", scpi_runt_trig_limit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:TUPPer", scpi_runt_trig_limit_high_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:TUPPer?", scpi_runt_trig_limit_high_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:TLOWer", scpi_runt_trig_limit_low_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:TLOWer?", scpi_runt_trig_limit_low_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HOLDoff", scpi_runt_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HOLDoff?", scpi_runt_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HLDTime", scpi_runt_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HLDTime?", scpi_runt_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HLDEVent", scpi_runt_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HLDEVent?", scpi_runt_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:RUNT:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:SOURce", scpi_interval_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:SOURce?", scpi_interval_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:COUPling", scpi_interval_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:COUPling?", scpi_interval_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:SLOPe", scpi_interval_trig_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:SLOPe?", scpi_interval_trig_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:LEVel", scpi_interval_trig_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:LEVel?", scpi_interval_trig_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:LIMit", scpi_interval_trig_limit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:LIMit?", scpi_interval_trig_limit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:TUPPer", scpi_interval_trig_limit_high_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:TUPPer?", scpi_interval_trig_limit_high_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:TLOWer", scpi_interval_trig_limit_low_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:TLOWer?", scpi_interval_trig_limit_low_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HOLDoff", scpi_interval_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HOLDoff?", scpi_interval_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HLDTime", scpi_interval_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HLDTime?", scpi_interval_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HLDEVent", scpi_interval_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HLDEVent?", scpi_interval_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:INTerval:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:SOURce", scpi_dropout_trig_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:SOURce?", scpi_dropout_trig_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:COUPling", scpi_dropout_trig_coupl_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:COUPling?", scpi_dropout_trig_coupl_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:SLOPe", scpi_dropout_trig_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:SLOPe?", scpi_dropout_trig_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:LEVel", scpi_dropout_trig_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:LEVel?", scpi_dropout_trig_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:TYPE", scpi_trig_drop_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:TYPE?", scpi_trig_drop_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:TIME", scpi_trig_drop_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:TIME?", scpi_trig_drop_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HOLDoff", scpi_dropout_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HOLDoff?", scpi_dropout_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HLDTime", scpi_dropout_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HLDTime?", scpi_dropout_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HLDEVent", scpi_dropout_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HLDEVent?", scpi_dropout_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:NREJect", scpi_trig_noise_reject_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:DROPout:NREJect?", scpi_trig_noise_reject_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:LOGic", scpi_pttn_trig_logic_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:LOGic?", scpi_pttn_trig_logic_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:INPut", scpi_pttn_trig_pttn_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:INPut?", scpi_pttn_trig_pttn_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:LEVel", scpi_pttn_trig_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:LEVel?", scpi_pttn_trig_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:LIMit", scpi_pttn_trig_limit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:LIMit?", scpi_pttn_trig_limit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:TUPPer", scpi_pttn_trig_limit_high_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:TUPPer?", scpi_pttn_trig_limit_high_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:TLOWer", scpi_pttn_trig_limit_low_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:TLOWer?", scpi_pttn_trig_limit_low_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HOLDoff", scpi_pttn_trig_holdoff_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HOLDoff?", scpi_pttn_trig_holdoff_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HLDTime", scpi_pttn_trig_holdoff_time_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HLDTime?", scpi_pttn_trig_holdoff_time_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HLDEVent", scpi_pttn_trig_holdoff_event_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HLDEVent?", scpi_pttn_trig_holdoff_event_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HSTart", scpi_trig_holdoff_start_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:PATTern:HSTart?", scpi_trig_holdoff_start_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:TYPE", scpi_trig_qualify_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:TYPE?", scpi_trig_qualify_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:ESource", scpi_trig_qualify_edge_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:ESource?", scpi_trig_qualify_edge_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:ELEVel", scpi_trig_qualify_edge_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:ELEVel?", scpi_trig_qualify_edge_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:ESLope", scpi_trig_qualify_edge_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:ESLope?", scpi_trig_qualify_edge_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:QSource", scpi_trig_qualify_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:QSource?", scpi_trig_qualify_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:QLEVel", scpi_trig_qualify_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:QLEVel?", scpi_trig_qualify_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:LIMit", scpi_quali_trig_limit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:LIMit?", scpi_quali_trig_limit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:TUPPer", scpi_quali_trig_limit_high_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:TUPPer?", scpi_quali_trig_limit_high_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:TLOWer", scpi_quali_trig_limit_low_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:QUALified:TLOWer?", scpi_quali_trig_limit_low_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SCLSource", scpi_trig_iic_scl_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SCLSource?", scpi_trig_iic_scl_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SCLThreshold", scpi_trig_iic_scl_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SCLThreshold?", scpi_trig_iic_scl_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SDASource", scpi_trig_iic_sda_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SDASource?", scpi_trig_iic_sda_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SDAThreshold", scpi_trig_iic_sda_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:SDAThreshold?", scpi_trig_iic_sda_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:CONDition", scpi_trig_iic_con_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:CONDition?", scpi_trig_iic_con_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:ADDRess", scpi_trig_iic_address_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:ADDRess?", scpi_trig_iic_address_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:ALENgth", scpi_trig_iic_addr_len_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:ALENgth?", scpi_trig_iic_addr_len_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:DATA", scpi_trig_iic_data1_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:DATA?", scpi_trig_iic_data1_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:DAT2", scpi_trig_iic_data2_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:DAT2?", scpi_trig_iic_data2_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:DLENgth", scpi_trig_iic_byte_len_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:DLENgth?", scpi_trig_iic_byte_len_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:LIMit", scpi_trig_iic_compare_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:LIMit?", scpi_trig_iic_compare_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:RWBit", scpi_trig_iic_rw_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIC:RWBit?", scpi_trig_iic_rw_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CLKSource", scpi_trig_spi_clk_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CLKSource?", scpi_trig_spi_clk_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CLKThreshold", scpi_trig_spi_clk_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CLKThreshold?", scpi_trig_spi_clk_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:LATChedge", scpi_trig_spi_clk_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:LATChedge?", scpi_trig_spi_clk_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MOSISource", scpi_trig_spi_mosi_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MOSISource?", scpi_trig_spi_mosi_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MOSIThreshold", scpi_trig_spi_mosi_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MOSIThreshold?", scpi_trig_spi_mosi_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MISOSource", scpi_trig_spi_miso_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MISOSource?", scpi_trig_spi_miso_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MISOThreshold", scpi_trig_spi_miso_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:MISOThreshold?", scpi_trig_spi_miso_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CSTYpe", scpi_trig_spi_cs_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CSTYpe?", scpi_trig_spi_cs_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CSSource", scpi_trig_spi_cs_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CSSource?", scpi_trig_spi_cs_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CSThreshold", scpi_trig_spi_cs_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:CSThreshold?", scpi_trig_spi_cs_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:NCSSource", scpi_trig_spi_ncs_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:NCSSource?", scpi_trig_spi_ncs_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:NCSThreshold", scpi_trig_spi_ncs_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:NCSThreshold?", scpi_trig_spi_ncs_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:TTYPe", scpi_trig_spi_trig_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:TTYPe?", scpi_trig_spi_trig_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:DLENgth", scpi_trig_spi_data_len_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:DLENgth?", scpi_trig_spi_data_len_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:DATA", scpi_trig_spi_bit_value_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:DATA?", scpi_trig_spi_bit_value_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:BITorder", scpi_trig_spi_bit_order_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:SPI:BITorder?", scpi_trig_spi_bit_order_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:RXSource", scpi_trig_uart_rx_srouce_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:RXSource?", scpi_trig_uart_rx_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:RXThreshlod", scpi_trig_uart_rx_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:RXThreshlod?", scpi_trig_uart_rx_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:TXSource", scpi_trig_uart_tx_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:TXSource?", scpi_trig_uart_tx_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:TXThreshold", scpi_trig_uart_tx_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:TXThreshold?", scpi_trig_uart_tx_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:TTYPe", scpi_trig_uart_source_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:TTYPe?", scpi_trig_uart_source_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:CONDition", scpi_trig_uart_condition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:CONDition?", scpi_trig_uart_condition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:LIMit", scpi_trig_uart_compare_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:LIMit?", scpi_trig_uart_compare_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:DATA", scpi_trig_uart_data_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:DATA?", scpi_trig_uart_data_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:BAUD", scpi_trig_uart_baud_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:BAUD?", scpi_trig_uart_baud_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:DLENgth", scpi_trig_uart_data_len_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:DLENgth?", scpi_trig_uart_data_len_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:PARity", scpi_trig_uart_parity_check_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:PARity?", scpi_trig_uart_parity_check_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:IDLE", scpi_trig_uart_idle_level_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:IDLE?", scpi_trig_uart_idle_level_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:STOP", scpi_trig_uart_stop_bit_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:STOP?", scpi_trig_uart_stop_bit_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:BITorder", scpi_trig_uart_bit_order_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:UART:BITorder?", scpi_trig_uart_bit_order_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:SOURce", scpi_trig_can_hsource_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:SOURce?", scpi_trig_can_hsource_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:THReshold", scpi_trig_can_hthreshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:THReshold?", scpi_trig_can_hthreshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:TTYPe", scpi_trig_can_trig_source_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:TTYPe?", scpi_trig_can_trig_source_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:CONDition", scpi_trig_can_condition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:CONDition?", scpi_trig_can_condition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:ID", scpi_trig_can_id_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:ID?", scpi_trig_can_id_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:IDLength", scpi_trig_can_id_bits_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:IDLength?", scpi_trig_can_id_bits_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:DATA", scpi_trig_can_data1_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:DATA?", scpi_trig_can_data1_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:DAT2", scpi_trig_can_data2_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:DAT2?", scpi_trig_can_data2_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:BAUD", scpi_trig_can_baud_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CAN:BAUD?", scpi_trig_can_baud_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:SOURce", scpi_trig_lin_source_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:SOURce?", scpi_trig_lin_source_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:THReshold", scpi_trig_lin_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:THReshold?", scpi_trig_lin_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:CONDition", scpi_trig_lin_condition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:CONDition?", scpi_trig_lin_condition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ID", scpi_trig_lin_id_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ID?", scpi_trig_lin_id_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:DATA", scpi_trig_lin_data1_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:DATA?", scpi_trig_lin_data1_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:DAT2", scpi_trig_lin_data2_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:DAT2?", scpi_trig_lin_data2_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:ID", scpi_trig_lin_error_frame_id_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:ID?", scpi_trig_lin_error_frame_id_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:DLENgth", scpi_trig_lin_data_bytes_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:DLENgth?", scpi_trig_lin_data_bytes_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:CHECksum", scpi_trig_lin_checksum_error_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:CHECksum?", scpi_trig_lin_checksum_error_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:SYNC", scpi_trig_lin_sync_error_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:SYNC?", scpi_trig_lin_sync_error_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:PARity", scpi_trig_lin_parity_error_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:ERRor:PARity?", scpi_trig_lin_parity_error_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:BAUD", scpi_trig_lin_baud_set_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:BAUD?", scpi_trig_lin_baud_get_new, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:STANdard", scpi_trig_lin_spec_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:LIN:STANdard?", scpi_trig_lin_spec_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:SOURce", scpi_trig_flex_src_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:SOURce?", scpi_trig_flex_src_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:THReshold", scpi_trig_flex_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:THReshold?", scpi_trig_flex_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:CONDition", scpi_trig_flex_condition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:CONDition?", scpi_trig_flex_condition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:ID", scpi_trig_flex_frameID_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:ID?", scpi_trig_flex_frameID_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:COMPare", scpi_trig_flex_compare_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:COMPare?", scpi_trig_flex_compare_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:CYCLe", scpi_trig_flex_cycle_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:CYCLe?", scpi_trig_flex_cycle_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:REPetition", scpi_trig_flex_repetition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:REPetition?", scpi_trig_flex_repetition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:TYPE", scpi_trig_flex_frametype_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:FRAMe:TYPE?", scpi_trig_flex_frametype_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:SYMBol:TYPE", scpi_trig_flex_symbol_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:SYMBol:TYPE?", scpi_trig_flex_symbol_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:ERRor:TYPE", scpi_trig_flex_error_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:ERRor:TYPE?", scpi_trig_flex_error_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:BAUD", scpi_trig_flex_baud_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:FLEXray:BAUD?", scpi_trig_flex_baud_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:SOURce", scpi_trig_canfd_src_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:SOURce?", scpi_trig_canfd_src_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:THReshold", scpi_trig_canfd_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:THReshold?", scpi_trig_canfd_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:FTYPe", scpi_trig_canfd_frame_type_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:FTYPe?", scpi_trig_canfd_frame_type_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:CONDition", scpi_trig_canfd_condition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:CONDition?", scpi_trig_canfd_condition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:ID", scpi_trig_canfd_id_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:ID?", scpi_trig_canfd_id_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:IDLength", scpi_trig_canfd_id_bits_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:IDLength?", scpi_trig_canfd_id_bits_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:DATA", scpi_trig_canfd_data1_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:DATA?", scpi_trig_canfd_data1_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:DAT2", scpi_trig_canfd_data2_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:DAT2?", scpi_trig_canfd_data2_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:BAUDNominal", scpi_trig_canfd_norminal_baud_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:BAUDNominal?", scpi_trig_canfd_norminal_baud_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:BAUDData", scpi_trig_canfd_data_baud_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:CANFd:BAUDData?", scpi_trig_canfd_data_baud_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:BCLKSource", scpi_trig_iis_clk_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:BCLKSource?", scpi_trig_iis_clk_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:BCLKThreshold", scpi_trig_iis_clk_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:BCLKThreshold?", scpi_trig_iis_clk_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:LATChedge", scpi_trig_iis_clk_slope_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:LATChedge?", scpi_trig_iis_clk_slope_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:WSSource", scpi_trig_iis_ws_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:WSSource?", scpi_trig_iis_ws_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:WSTHreshold", scpi_trig_iis_ws_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:WSTHreshold?", scpi_trig_iis_ws_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:DSource", scpi_trig_iis_data_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:DSource?", scpi_trig_iis_data_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:DTHReshold", scpi_trig_iis_data_threshold_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:DTHReshold?", scpi_trig_iis_data_threshold_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:LCH", scpi_trig_iis_leftch_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:LCH?", scpi_trig_iis_leftch_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:AVARiant", scpi_trig_iis_audio_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:AVARiant?", scpi_trig_iis_audio_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:CONDition", scpi_trig_iis_condition_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:CONDition?", scpi_trig_iis_condition_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:CHANnel", scpi_trig_iis_trig_channel_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:CHANnel?", scpi_trig_iis_trig_channel_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:BITorder", scpi_trig_iis_bit_order_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:BITorder?", scpi_trig_iis_bit_order_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:DLENgth", scpi_trig_iis_data_bits_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:DLENgth?", scpi_trig_iis_data_bits_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:COMPare", scpi_trig_iis_compare_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:COMPare?", scpi_trig_iis_compare_get, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:VALue", scpi_trig_iis_value_set, 1);
  scpi_if_register_scpi_cmd(":TRIGger:IIS:VALue?", scpi_trig_iis_value_get, 1);
}

void scpi_register_cmd_utility(void)
{
  scpi_if_register_cmd("BUZZ?", "BUZZER?", scpi_utility_sound_get);
  scpi_if_register_cmd("BUZZ", "BUZZER", scpi_utility_sound_set);
  scpi_if_register_cmd("SCSV?", "SCREEN_SAVE?", scpi_utility_screen_saver_get);
  scpi_if_register_cmd("SCSV", "SCREEN_SAVE", scpi_utility_screen_saver_set);
  scpi_if_register_cmd("CONET?", "COMM_NET?", scpi_if_utility_ipaddr_get);
  scpi_if_register_cmd("CONET", "COMM_NET", scpi_if_utility_ipaddr_set);
  scpi_if_register_cmd("MENU", "MENU", scpi_menu_state_set);
  scpi_if_register_cmd("MENU?", "MENU?", scpi_menu_state_get);
  scpi_if_register_cmd("EMOD", "EduMode", scpi_edu_set);
  scpi_if_register_cmd("EMOD?", "EduMode?", scpi_edu_get);
  scpi_if_register_scpi_cmd("LANGuage", scpi_tek_utility_language_set, 1);
  scpi_if_register_scpi_cmd("TIME", scpi_tek_syst_comm_times, 1);
  scpi_if_register_scpi_cmd("DATE", scpi_tek_syst_comm_dates, 1);
  scpi_if_register_scpi_cmd("LOCK", scpi_tek_key_lock_set, 1);
  scpi_if_register_scpi_cmd("LOCK?", scpi_tek_key_lock_get, 1);
  scpi_if_register_scpi_cmd("UNLock", scpi_tek_key_unlock_set, 1);
  scpi_if_register_private_cmd("FAN_SPD?", scpi_utility_fan_speed_get);
  scpi_if_register_private_cmd("FAN_DUTY", scpi_utility_fan_duty_set);
  scpi_if_register_private_cmd(":SYSTem:COMMunicate:LAN:MAC", scpi_comm_lan_mac_set);
  scpi_if_register_private_cmd("BATTery?", scpi_battery_info_get);
  scpi_if_register_private_cmd("TEMPerature?", scpi_zynq_temperature_get);
}

void scpi_register_cmd_utility_new(void)
{
  scpi_if_register_scpi_cmd(":SYSTem:BUZZer", scpi_utility_sound_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:BUZZer?", scpi_utility_sound_get_new, 1);
  scpi_if_register_scpi_cmd(":SYSTem:LANGuage", scpi_utility_language_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:LANGuage?", scpi_utility_language_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:SSAVer", scpi_utility_screen_saver_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:SSAVer?", scpi_utility_screen_saver_get_new, 1);
  scpi_if_register_scpi_cmd(":SYSTem:CLOCk", scpi_utility_clock_source_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:CLOCk?", scpi_utility_clock_source_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:CLOCk:STATus?", scpi_utility_ext_clock_status_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:VNCPort", scpi_utility_vnc_port_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:COMMunicate:VNCPort?", scpi_utility_vnc_port_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PON", scpi_utility_power_on_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PON?", scpi_utility_power_on_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:SHUTdown", scpi_utility_shutdown, 1);
  scpi_if_register_scpi_cmd(":SYSTem:REBoot", scpi_utility_reboot, 1);
  scpi_if_register_scpi_cmd(":SYSTem:MENU", scpi_menu_state_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:MENU?", scpi_menu_state_get_new, 1);
  scpi_if_register_scpi_cmd(":SYSTem:TOUCh", scpi_utility_touch_lock_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:TOUCh?", scpi_utility_touch_lock_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:REMote", scpi_utility_remote_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:REMote?", scpi_utility_remote_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:REMote:STYLe", scpi_utility_remote_style_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:REMote:STYLe?", scpi_utility_remote_style_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:KEYPress", scpi_utility_key_press, 1);
  scpi_if_register_scpi_cmd(":SYSTem:SELFCal", scpi_utility_selfcal_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:SELFCal?", scpi_utility_selfcal_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:BOARDinfo?", scpi_utility_board_info_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:PINFo?", scpi_utility_pcb_version_get, 1);
  scpi_if_register_scpi_cmd(":SYSTem:EDUMode", scpi_utility_edu_set, 1);
  scpi_if_register_scpi_cmd(":SYSTem:EDUMode?", scpi_utility_edu_get, 1);
}

void scpi_register_cmd_zoom(void)
{
  scpi_if_register_cmd("TDIV", "TIME_DIV", scpi_timebase_set);
  scpi_if_register_cmd("TDIV?", "TIME_DIV?", scpi_timebase_get);
  scpi_if_register_cmd("TRDL", "TRIG_DELAY", scpi_hori_trig_delay_set);
  scpi_if_register_cmd("TRDL?", "TRIG_DELAY?", scpi_hori_delay_get);
  scpi_if_register_cmd("HMAG", "HOR_MAGNIFY", scpi_zoom_tdiv_set);
  scpi_if_register_cmd("HMAG?", "HOR_MAGNIFY?", scpi_zoom_tdiv_get);
  scpi_if_register_cmd("HPOS", "HOR_POSITION", scpi_zoom_delay_set);
  scpi_if_register_cmd("HPOS?", "HOR_POSITION?", scpi_zoom_delay_get);
  scpi_if_register_scpi_cmd("HORizontal:SCAle", scpi_timebase_set, 1);
  scpi_if_register_scpi_cmd("HORizontal:SCAle?", scpi_timebase_get_new, 1);
  scpi_if_register_scpi_cmd("HORizontal:DELay:MODe", scpi_tek_hori_expand_mode_set, 1);
  scpi_if_register_scpi_cmd("HORizontal:DELay:MODe?", scpi_tek_hori_expand_mode_get, 1);
  scpi_if_register_scpi_cmd("HORizontal:DELay:TIMe", scpi_tek_hori_delay_set, 1);
  scpi_if_register_scpi_cmd("HORizontal:DELay:TIMe?", scpi_tek_hori_delay_get, 1);
  scpi_if_register_scpi_cmd("HORizontal:POSition", scpi_tek_hori_delay_percent_set, 1);
  scpi_if_register_scpi_cmd("HORizontal:POSition?", scpi_tek_hori_delay_percent_get, 1);
  scpi_if_register_private_cmd("HSTA", scpi_zoom_state_set);
  scpi_if_register_private_cmd("HSTA?", scpi_zoom_state_get);
}

void scpi_register_cmd_timebase(void)
{
  scpi_if_register_scpi_cmd(":TIMebase:WINDow", scpi_zoom_state_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:WINDow?", scpi_zoom_state_get, 1);
  scpi_if_register_scpi_cmd(":TIMebase:SCALe", scpi_timebase_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:SCALe?", scpi_timebase_get_new, 1);
  scpi_if_register_scpi_cmd(":TIMebase:DELay", scpi_hori_delay_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:DELay?", scpi_hori_delay_get_new, 1);
  scpi_if_register_scpi_cmd(":TIMebase:WINDow:SCALe", scpi_zoom_tdiv_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:WINDow:SCALe?", scpi_zoom_tdiv_get_new, 1);
  scpi_if_register_scpi_cmd(":TIMebase:WINDow:DELay", scpi_zoom_delay_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:WINDow:DELay?", scpi_zoom_delay_get_new, 1);
  scpi_if_register_scpi_cmd(":TIMebase:REFerence:MODE", scpi_hori_expand_mode_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:REFerence:MODE?", scpi_hori_expand_mode_get, 1);
  scpi_if_register_scpi_cmd(":TIMebase:REFerence:DELay", scpi_hori_ref_pos_set, 1);
  scpi_if_register_scpi_cmd(":TIMebase:REFerence:DELay?", scpi_hori_ref_pos_get, 1);
}

void scpi_register_cmd_wf(void)
{
  scpi_if_register_cmd("C#:WF?", "C#:WAVEFORM?", scpi_wf_ch_get);
  scpi_if_register_cmd("MATH:WF?", "MATH:WAVEFORM?", scpi_wf_math_get);
  scpi_if_register_cmd("F#:WF?", "F#:WAVEFORM?", scpi_wf_func_get);
  scpi_if_register_cmd("D#:WF?", "D#:WAVEFORM?", scpi_digital_wf_get);
  scpi_if_register_cmd("WFSU?", "WAVEFORM_SETUP?", scpi_wf_param_get);
  scpi_if_register_cmd("WFSU", "WAVEFORM_SETUP", scpi_wf_param_set);
  scpi_if_register_scpi_cmd(":WAVeform:BYTeorder?", scpi_comm_order_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:BYTeorder", scpi_comm_order_set, 1);
  scpi_if_register_scpi_cmd(":WAVeform:WIDTh", scpi_comm_type_set, 1);
  scpi_if_register_scpi_cmd(":WAVeform:WIDTh?", scpi_comm_type_get, 1);
  scpi_if_register_private_cmd("TMPLate?", scpi_wfdata_template_get);
}

void scpi_register_cmd_wf_new(void)
{
  scpi_if_register_scpi_cmd(":WAVeform:SOURce", scpi_wf_source_set, 1);
  scpi_if_register_scpi_cmd(":WAVeform:SOURce?", scpi_wf_source_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:STARt", scpi_wf_start_num_set, 1);
  scpi_if_register_scpi_cmd(":WAVeform:STARt?", scpi_wf_start_num_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:INTerval", scpi_wf_interval_num_set, 1);
  scpi_if_register_scpi_cmd(":WAVeform:INTerval?", scpi_wf_interval_num_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:POINt", scpi_wf_point_num_set, 1);
  scpi_if_register_scpi_cmd(":WAVeform:POINt?", scpi_wf_point_num_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:MAXPoint?", scpi_wf_max_point_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:DATA?", scpi_wf_data_get, 1);
  scpi_if_register_scpi_cmd(":WAVeform:PREamble?", scpi_wf_head_get, 1);
}

void scpi_register_bswv_cmd(void)
{
  scpi_lib_get_ch1_cmd("BaSicWaVe",abStack16);
  scpi_lib_get_ch2_cmd("BaSicWaVe",abStack16);
  scpi_lib_get_ch1_query_cmd("BaSicWaVe",abStack16);
  scpi_lib_get_ch2_query_cmd("BaSicWaVe",abStack16);
  scpi_lib_get_ch1_cmd("HARMonic",abStack16);
  scpi_lib_get_ch2_cmd("HARMonic",abStack16);
  scpi_lib_get_ch1_query_cmd("HARMonic",abStack16);
  scpi_lib_get_ch2_query_cmd("HARMonic",abStack16);
  scpi_if_register_scpi_cmd("C1:BaSic_WaVe", scpi_ch1_basic_wave, 1);
  scpi_if_register_scpi_cmd("C1:BaSic_WaVe?", scpi_ch1_basic_waveq, 1);
  scpi_if_register_scpi_cmd("C2:BaSic_WaVe", scpi_ch2_basic_wave, 1);
  scpi_if_register_scpi_cmd("C2:BaSic_WaVe?", scpi_ch2_basic_waveq, 1);
  scpi_lib_register_scpi_command("BaSicWaVe", scpi_current_ch_basic_wave);
  scpi_lib_register_scpi_command("BaSicWaVe?", scpi_current_ch_basic_waveq);
  scpi_lib_register_scpi_command("HARMonic", scpi_current_ch_harmonic_wave);
  scpi_lib_register_scpi_command("HARMonic?", scpi_current_ch_harmonic_waveq);
}

void scpi_register_invert_cmd(void)
{
  scpi_if_register_scpi_cmd("C1:INVERT", FUN_010be0c8, 1);
  scpi_if_register_scpi_cmd("C1:INVERT?", FUN_010be0f4, 1);
  scpi_if_register_scpi_cmd("C1:INVT", FUN_010be0c8, 1);
  scpi_if_register_scpi_cmd("C1:INVT?", FUN_010be0f4, 1);
  scpi_if_register_scpi_cmd("C2:INVERT", FUN_010be120, 1);
  scpi_if_register_scpi_cmd("C2:INVERT?", FUN_010be16c, 1);
  scpi_if_register_scpi_cmd("C2:INVT", FUN_010be120, 1);
  scpi_if_register_scpi_cmd("C2:INVT?", FUN_010be16c, 1);
  scpi_if_register_scpi_cmd("INVT", FUN_010be198, 1);
  scpi_if_register_scpi_cmd("INVT?", FUN_010be1d0, 1);
  scpi_if_register_scpi_cmd("INVERT", FUN_010be198, 1);
  scpi_if_register_scpi_cmd("INVERT?", FUN_010be1d0, 1);
}

void scpi_register_time_base_cali_cmd(void)
{
  scpi_if_register_scpi_cmd("DACC", scpi_set_time_base_cali_cb, 1);
  scpi_if_register_scpi_cmd("DAC_CODE", scpi_set_time_base_cali_cb, 1);
  scpi_if_register_scpi_cmd("DACC?", scpi_get_time_base_cali_cb, 1);
  scpi_if_register_scpi_cmd("DAC_CODE?", scpi_get_time_base_cali_cb, 1);
}

void scpi_register_clock_source_cmd(void)
{
  scpi_if_register_scpi_cmd("ROSC", scpi_set_clock_source_cb, 1);
  scpi_if_register_scpi_cmd("ROSCILLATOR", scpi_set_clock_source_cb, 1);
  scpi_if_register_scpi_cmd("ROSC?", scpi_get_clock_source_cb, 1);
  scpi_if_register_scpi_cmd("ROSCILLATOR?", scpi_get_clock_source_cb, 1);
}

void scpi_register_voltage_overload_cmd(void)
{
  scpi_if_register_scpi_cmd("VOLTPRT", scpi_set_voltage_overload_cb, 1);
  scpi_if_register_scpi_cmd("VOLTPRT?", scpi_get_voltage_overload_cb, 1);
}

void cfg_serial_number_t(void)
{
  scpi_if_register_scpi_cmd("SRLN", scpi_srln_cmd, 1);
  scpi_if_register_scpi_cmd("SRLN?", scpi_srlnq_cmd, 1);
}

void scpi_register_cali_commands_cmd(void)
{
  scpi_lib_get_ch1_cmd("FreqReSPAJusT", abStack16);
  scpi_lib_register_scpi_command(pcVar1, scpi_cali_frequency_response_ch_one);
  scpi_lib_get_ch2_cmd("FreqReSPAJusT", abStack16);
  scpi_lib_get_ch1_cmd("AMPlitudeDBM", abStack16);
  scpi_lib_get_ch2_cmd("AMPlitudeDBM", abStack16);
  scpi_lib_get_ch1_query_cmd("AMPlitudeDBM", abStack16);
  scpi_lib_get_ch2_query_cmd("AMPlitudeDBM", abStack16);
  scpi_if_register_scpi_cmd("savecali", scpi_cali_save_data, 1);
  scpi_if_register_scpi_cmd("selfcali", scpi_cali_self_cali, 1);
  scpi_if_register_scpi_cmd("printcali", scpi_cali_print_cali, 1);
  scpi_if_register_scpi_cmd("clearcali", scpi_cali_clear_cali, 1);
  scpi_if_register_scpi_cmd("cleardelta", scpi_cali_clear_ac_delta, 1);
  scpi_lib_register_scpi_command("SeLFCALIbration", scpi_cali_self_cali);
  scpi_lib_get_query_cmd("SeLFCALIbration", abStack16);
  scpi_lib_register_scpi_command("FreqCouNTerCALIbration", scpi_cali_frequency_counter);
  scpi_lib_get_query_cmd("FreqCouNTerCALIbration", abStack16);
  scpi_lib_get_ch1_cmd("DUTYCALIbration", abStack16);
  scpi_lib_get_ch2_cmd("DUTYCALIbration", abStack16);
  scpi_lib_get_ch1_query_cmd("DUTYCALIbration", abStack16);
  scpi_lib_get_ch2_query_cmd("DUTYCALIbration", abStack16);
  scpi_lib_get_ch1_cmd("AcDelta", abStack16);
  scpi_lib_get_ch2_cmd("AcDelta", abStack16);
  scpi_lib_register_scpi_command("PRinTCALIbration", scpi_cali_print_cali);
  scpi_lib_register_scpi_command("CLeaRCALIbration", scpi_cali_clear_cali);
  scpi_lib_register_scpi_command("WriteFLASH", scpi_write_flash);
  scpi_lib_register_scpi_command("ReadFLASH", scpi_read_flash);
  scpi_lib_register_scpi_command("ClearFLASH", scpi_clear_flash);
  scpi_lib_register_scpi_command("WriteFLASHBLocK", scpi_write_flash_block);
  scpi_lib_register_scpi_command("ReadFLASHBLocK", scpi_read_flash_block);
  scpi_lib_register_scpi_command("WriteReadFLASHBLocK", scpi_write_read_flash_block);
  unknown("FeeDBacKAJusT", abStack16)
  unknown("SaVeAJusTDaTa", abStack16)
}

void scpi_register_driver_cmd(void)
{
  scpi_if_register_scpi_cmd("k7dump", scpi_driver_k7dump, 1);
  scpi_if_register_scpi_cmd("k7dump?", scpi_driver_k7dumpq, 1);
}

void scpi_register_bandwidth_update_cmd(void)
{
  scpi_if_regsiter_scpi_bin_cmd("MCBD", scpi_set_bandwidth_update_string_cb, 1);
  scpi_if_regsiter_scpi_bin_cmd("MCBD?", scpi_get_bandwidth_update_string_cb, 1);
  scpi_if_register_scpi_cmd("MD5_PR?", scpi_get_md5_product_cb, 1);
  scpi_if_register_scpi_cmd("MD5_SRLN?", scpi_get_md5_serilnum_cb, 1);
  scpi_if_register_scpi_cmd("IQSP", scpi_set_iq_support_string_cb, 1);
  scpi_if_register_scpi_cmd("IQSP?", scpi_get_iq_support_string_cb, 1);
}

void scpi_register_board_test_cmd(void)
{
  scpi_if_register_scpi_cmd("BOARD_TEST?", scpi_get_board_test_cb, 1);
}

void scpi_register_reset_adc_cmd(void)
{
  scpi_if_register_scpi_cmd("RESETADC", scpi_reset_ad9122, 1);
}

void scpi_register_drp_dynamic_reconfig_phase_cmd(void)
{
  scpi_if_register_scpi_cmd("DRV_RECONFIG_PHASE", scpi_drp_dynamic_reconfig_phase_test_cb, 1);
}

void scpi_register_number_format_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("NumBerForMat", abStack16);
  scpi_lib_get_query_cmd("NumBerForMat", abStack16);
  scpi_if_register_scpi_cmd("NumBer_ForMat", scpi_point_format, 1);
  scpi_if_register_scpi_cmd("NumBer_ForMat?", scpi_point_formatq, 1);
}

void scpi_register_power_on_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("SystemConFiG", abStack16);
  scpi_lib_get_query_cmd("SystemConFiG", abStack16);
  scpi_if_register_scpi_cmd("Sys_CFG", scpi_system_config, 1);
  scpi_if_register_scpi_cmd("Sys_CFG?", scpi_system_configq, 1);
}

void scpi_register_scrnsvr_cmd(void)
{
  scpi_if_register_scpi_cmd("SCSV", scpi_set_scrnsvr_cb, 1);
  scpi_if_register_scpi_cmd("SCREEN_SAVE", scpi_set_scrnsvr_cb, 1);
  scpi_if_register_scpi_cmd("SCSV?", scpi_get_scrnsvr_cb, 1);
  scpi_if_register_scpi_cmd("SCREEN_SAVE?", scpi_get_scrnsvr_cb, 1);
}

void scpi_register_iq_cmd(void)
{
  scpi_if_regsiter_scpi_bin_cmd("IQDA", scpi_iq_data_cmd, 1);
  scpi_if_register_scpi_cmd("IQ:FTW", scpi_iq_ftw_cmd, 1);
  scpi_if_register_scpi_cmd("IQ:FrequencySampling", scpi_iq_frequency_sampling_cmd, 1);
  scpi_if_register_scpi_cmd("IQ:FrequencySampling?", scpi_iq_frequency_sampling_cmdq, 1);
  scpi_if_register_scpi_cmd("IQ:FrequencySamplingLimit?", scpi_iq_frequency_sampling_limit_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:CENTerfreq", scpi_iq_center_freq_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:CENTerfreq?", scpi_iq_center_freq_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:SAMPlerate", scpi_iq_sample_rate_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:SAMPlerate?", scpi_iq_sample_rate_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:SYMBolrate", scpi_iq_symbol_rate_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:SYMBolrate?", scpi_iq_symbol_rate_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:AMPLitude", scpi_iq_amplitude_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:AMPLitude?", scpi_iq_amplitude_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:GAIN", scpi_iq_adjust_gain_balance_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:GAIN?", scpi_iq_adjust_gain_balance_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:IOFFset", scpi_iq_adjust_i_offset_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:IOFFset?", scpi_iq_adjust_i_offset_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:QOFFset", scpi_iq_adjust_q_offset_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:QOFFset?", scpi_iq_adjust_q_offset_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:QSKew", scpi_iq_adjust_q_skew_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:IQADjustment:QSKew?", scpi_iq_adjust_q_skew_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:TRIGger:SOURce", scpi_iq_trigger_source_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:TRIGger:SOURce?", scpi_iq_trigger_source_cmdq, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:WAVEload:BUILtin", scpi_iq_built_in_wave_name_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:WAVEload:USERstored", scpi_iq_user_stored_wave_name_cmd, 1);
  scpi_if_register_scpi_cmd("[:SOURce]:IQ:WAVEload?", scpi_iq_wave_name_cmdq, 1);
  scpi_if_register_scpi_cmd("IQTRials", scpi_set_iq_trials_left_cmd, 1);
  scpi_if_register_scpi_cmd("IQTRials?", scpi_get_iq_trials_left_cmdq, 1);
}

void dev_register_virtual_key_cmd(void)
{
  scpi_if_regsiter_scpi_bin_cmd("$$SY_FP", scpi_virtual_key, 0);
}

void scpi_register_virtual_key_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("VirtualKEY",abStack16);
}

void other_init_upgrade(void)
{
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE", other_xplus_upgrade, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE_PATH", other_xplus_upgrade_path, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE_CFG", other_xplus_upgrade_cfg, 1);
  scpi_if_regsiter_scpi_bin_cmd("SGLT-UPGRADE_CFG_PATH", other_xplus_upgrade_cfg_path, 1);
}

void scpi_register_RST_cmd(void)
{
  scpi_if_regsiter_scpi_bin_cmd("*RST", scpi_device_set_default, 1);
}

void scpi_register_build_in_cmd(void)
{
  scpi_lib_get_query_cmd("SToreList", abStack16);
  scpi_lib_get_query_cmd("WaVeDaTa", abStack16);
  scpi_lib_get_query_cmd("WaVePaRameter", abStack16);
  scpi_lib_get_ch1_cmd("ARbWaVe", abStack16);
  scpi_lib_get_ch2_cmd("ARbWaVe", abStack16);
  scpi_lib_get_ch1_query_cmd("ARbWaVe", abStack16);
  scpi_lib_get_ch2_query_cmd("ARbWaVe", abStack16);
  scpi_if_regsiter_scpi_bin_cmd("C1:WVDT", scpi_ch1_build_in_wavedata, 1);
  scpi_if_regsiter_scpi_bin_cmd("C2:WVDT", scpi_ch2_build_in_wavedata, 1);
  scpi_lib_register_scpi_command("ARbWaVe", scpi_current_ch_build_in_wave);
  scpi_lib_register_scpi_command("ARbWaVe?", scpi_current_ch_build_in_waveq);
}

void scpi_register_cmd_boardtest(void)
{
  scpi_if_register_private_cmd("BOARDTEST?", scpi_boardtest_get);
  scpi_if_register_private_cmd("HSR_BOTEST?", scpi_hsr_boardtest_get);
}

void scpi_register_cmd_cal(void)
{
  scpi_if_register_cmd("*CAL?", "*CAL?", scpi_do_self_cal);
  scpi_if_register_private_cmd("C#:VGAC", scpi_vga_ch_set);
  scpi_if_register_private_cmd("C#:VGAC?", scpi_vga_ch_get);
  scpi_if_register_private_cmd("C#:ALL_VGAC", scpi_vga_all_ch_set);
  scpi_if_register_private_cmd("C#:DACC", scpi_dac_ch_set);
  scpi_if_register_private_cmd("C#:DACC?", scpi_dac_ch_get);
  scpi_if_register_private_cmd("C#:ADC_FS_SET", scpi_adc_fs_ch_set);
  scpi_if_register_private_cmd("C#:DAC_ATTEN", scpi_dac_atten_ch_set);
  scpi_if_register_private_bin_cmd("DAC:SAVE", scpi_save_dacfile);
  scpi_if_register_private_bin_cmd("ARCHER_DAC:SAVE", scpi_save_archer_dacfile);
  scpi_if_register_private_bin_cmd("HSR_DAC:SAVE", scpi_save_dac_data);
  scpi_if_register_private_cmd("DAC_CODE", scpi_time_base_cal_set);
  scpi_if_register_private_cmd("CLK:SET", scpi_clk_accuracy_cal_set);
  scpi_if_register_private_cmd("EXT:SAVE", scpi_save_extfile);
  scpi_if_register_private_cmd("CLK:SAVE", scpi_save_clkfile);
  scpi_if_register_private_cmd("EXLV", scpi_ext_trig_level_set);
  scpi_if_register_private_cmd("EXDL", scpi_ext_delay_init_set);
  scpi_if_register_private_cmd("EXDL:SAVE", scpi_save_ext_delay);
  scpi_if_register_private_cmd("EXTCT:SAVE", scpi_save_extfile_center);
  scpi_if_register_private_cmd("HSR_EXTCT:SAVE", scpi_save_ext_center);
  scpi_if_register_private_cmd("HSR_EXTDT:SAVE", scpi_save_ext_delta);
  scpi_if_register_private_cmd("HSR_EXTDL:SAVE", scpi_save_hsr_ext_delay);
  scpi_if_register_private_cmd("ADJAVE?", scpi_adjave_get);
  scpi_if_register_private_cmd("LOAD:SELFcal:FILE?", scpi_load_self_cal_file);
  scpi_if_register_private_cmd(":CHIp#:TEMp?", scpi_chip_temp_get);
  scpi_if_register_private_cmd(":AFLAsh:TESt:RESult?", scpi_attached_flash_test_result_get);
  scpi_if_register_private_cmd(":CALibrate:DIGital:DELay", scpi_mso_cal_set_dx_skew);
  scpi_if_register_private_cmd(":CALibrate:DIGital:DELay:CLEAn", scpi_mso_cal_clean_btd);
  scpi_if_register_private_cmd(":CALibrate:DIGital:DELay:SAVEBTD", scpi_mso_cal_save_btd);
  scpi_if_register_private_cmd(":CALibrate:DIGital:DELay:LOADBTD", scpi_mso_cal_load_btd);
  scpi_if_register_private_cmd(":CALibrate:DIGital:TRIGLVL", scpi_mso_cal_trig_level);
  scpi_if_register_private_cmd(":CALibrate:DIGital:THREshold:L8", scpi_mso_l8_trig_level_set);
  scpi_if_register_private_cmd(":CALibrate:DIGital:THREshold:H8", scpi_mso_h8_trig_level_set);
  scpi_if_register_private_cmd("BWF", scpi_bwf_force);
  scpi_if_register_private_cmd("ADCCAL:PHASE", scpi_adc_cal_phase);
  scpi_if_register_private_cmd("ADCCAL:PHASE?", scpi_adc_cal_get_phase);
  scpi_if_register_private_cmd("ADCCAL:CONVERT", scpi_adc_cal_convert);
  scpi_if_register_private_cmd("ADCCAL:DUTYCYCLE", scpi_adc_cal_dutycycle);
  scpi_if_register_private_cmd("ADCCAL:SAVE", scpi_adc_calfile_save);
  scpi_if_register_private_cmd("ADCCAL:LOAD", scpi_adc_calfile_load);
  scpi_if_register_private_cmd("VGACAL:TEMPCO", scpi_vga_cal_tempco);
  scpi_if_register_private_cmd("CAL:PKG", scpi_pkg_calfiles);
  scpi_if_register_private_cmd("LOGDBG", scpi_logdbg);
  scpi_if_register_private_cmd("CALSTA?", scpi_get_cal_status);
  scpi_if_register_private_cmd(":CALibrate:CHANnel:SKEW", scpi_ch_skew_cal);
  scpi_if_register_private_cmd(":CALibrate:FILTer:SWITch", scpi_filter_switch_set);
  scpi_if_register_private_cmd(":CALibrate:BUZZer_CONTINUe:SWITch", scpi_buzzer_continue_timer_switch_set);
  scpi_if_register_private_bin_cmd("FILTER:SAVE", scpi_save_filter_gain);
}

void scpi_register_cmd_probe_offset_cal(void)
{
  scpi_if_register_private_cmd("C#:POffs", scpi_probe_offset_ch_set);
  scpi_if_register_private_cmd("C#:POffs?", scpi_probe_offset_ch_get);
  scpi_if_register_private_cmd("C#:PDAC", scpi_probe_DAC_ch_set);
  scpi_if_register_private_cmd("C#:PDAC?", scpi_probe_DAC_ch_get);
  scpi_if_register_private_cmd("C#:PDelta", scpi_probe_Delta_ch_set);
  scpi_if_register_private_cmd("C#:PDelta?", scpi_probe_Delta_ch_get);
  scpi_if_register_private_cmd("C#:PIntc", scpi_probe_Intercept_ch_set);
  scpi_if_register_private_cmd("C#:PIntc?", scpi_probe_Intercept_ch_get);
  scpi_if_register_private_cmd("C#:PCali?", scpi_probe_offset_calibrate_ch);
  scpi_if_register_private_cmd("C#:PInfo?", scpi_probe_info_get_ch);
  scpi_if_register_private_cmd("C#:ProbeSN", scpi_probe_SN_ch_set);
  scpi_if_register_private_cmd("C#:PType", scpi_probe_type_ch_set);
  scpi_if_register_private_cmd("C#:PRes", scpi_probe_res_ch_set);
  scpi_if_register_private_cmd("C#:PCap", scpi_probe_cap_ch_set);
  scpi_if_register_private_cmd("C#:PBW", scpi_probe_BW_ch_set);
  scpi_if_register_private_cmd("C#:PGain", scpi_probe_Gain_ch_set);
}

void scpi_register_cmd_sys_resgiter(void)
{
  scpi_if_register_private_cmd("CMR?", scpi_get_command_error_register);
  scpi_if_register_private_cmd("EXR?", scpi_get_execution_error_register);
  scpi_if_register_private_cmd("DDR?", scpi_get_device_dependtent_register);
  scpi_if_register_private_cmd("INR?", scpi_get_device_internal_register);
  scpi_if_register_private_cmd("ALST?", scpi_get_all_status_register);
}

void scpi_if_register_cmd_rpsc(void)
{
  scpi_if_register_private_cmd("RPSC", scpi_utility_register_product_scpi_cmd);
}

void scpi_register_cmd_awg(void)
{
  scpi_if_register_private_bin_cmd("IDN-SGLT-AWG?", scpi_awg_idn_get);
  scpi_if_register_private_bin_cmd("SRLN-AWG", scpi_awg_serial_num_set);
  scpi_if_register_private_bin_cmd("C1:WVDT", scpi_awg_build_in_wavedata);
}

void scpi_register_out_put_cmd(void)
{
  scpi_lib_get_ch1_cmd("OUTPut",abStack16);
  scpi_lib_get_ch2_cmd("OUTPut",abStack16);
  scpi_lib_get_ch1_query_cmd("OUTPut",abStack16);
  scpi_lib_get_ch2_query_cmd("OUTPut",abStack16);
  scpi_lib_register_scpi_command("OUTPut", scpi_current_ch_out_put);
  scpi_lib_register_scpi_command("OUTPut?", scpi_current_ch_out_putq);
  scpi_lib_register_scpi_command("OUT_BOTHCH", scpi_both_ch_out_put);
}

void scpi_register_burst_cmd(void)
{
  scpi_lib_get_ch1_cmd("BursTWaVe",abStack16);
  scpi_lib_get_ch2_cmd("BursTWaVe",abStack16);
  scpi_lib_get_ch1_query_cmd("BursTWaVe",abStack16);
  scpi_lib_get_ch2_query_cmd("BursTWaVe",abStack16);
  scpi_lib_register_scpi_command("BursTWaVe", scpi_current_ch_burst_wave);
  scpi_lib_register_scpi_command("BursTWaVe?", scpi_current_ch_burst_waveq);
}

void scpi_register_mdwv_cmd(void)
{
  scpi_lib_get_ch1_cmd("MoDulateWaVe",abStack16);
  scpi_lib_get_ch2_cmd("MoDulateWaVe",abStack16);
  scpi_lib_get_ch1_query_cmd("MoDulateWaVe",abStack16);
  scpi_lib_get_ch2_query_cmd("MoDulateWaVe",abStack16);
  scpi_lib_register_scpi_command("MoDulateWaVe", scpi_current_ch_modulate_wave);
  scpi_lib_register_scpi_command("MoDulateWaVe?", scpi_current_ch_modulate_waveq);
}

void scpi_register_sweep_cmd(void)
{
  scpi_lib_get_ch1_cmd("SWeepWaVe",abStack16);
  scpi_lib_get_ch2_cmd("SWeepWaVe",abStack16);
  scpi_lib_get_ch1_query_cmd("SWeepWaVe",abStack16);
  scpi_lib_get_ch2_query_cmd("SWeepWaVe",abStack16);
  scpi_lib_register_scpi_command("SWeepWaVe", scpi_current_ch_sweep_wave);
  scpi_lib_register_scpi_command("SWeepWaVe?", scpi_current_ch_sweep_waveq);
}

void scpi_register_wave_combine_cmd(void)
{
  scpi_lib_get_ch1_cmd("CoMBiNe",abStack16);
  scpi_lib_get_ch2_cmd("CoMBiNe",abStack16);
  scpi_lib_get_ch1_query_cmd("CoMBiNe",abStack16);
  scpi_lib_get_ch2_query_cmd("CoMBiNe",abStack16);
  scpi_lib_register_scpi_command("CoMBiNe", scpi_current_ch_wave_combine_cb);
  scpi_lib_register_scpi_command("CoMBiNe?", scpi_current_ch_wave_combine_cbq);
}

void scpi_register_noise_add_cmd(void)
{
  scpi_lib_get_ch1_cmd("NOISE_ADD",abStack16);
  scpi_lib_get_ch1_query_cmd("NOISE_ADD",abStack16);
  scpi_lib_get_ch2_cmd("NOISE_ADD",abStack16);
  scpi_lib_get_ch2_query_cmd("NOISE_ADD",abStack16);
}

void scpi_register_sample_rate_cmd(void)
{
  scpi_lib_get_ch1_cmd("SampleRATE",abStack16);
  scpi_lib_get_ch1_query_cmd("SampleRATE",abStack16);
  scpi_lib_get_ch2_cmd("SampleRATE",abStack16);
  scpi_lib_get_ch2_query_cmd("SampleRATE",abStack16);
  scpi_lib_register_scpi_command("SampleRATE", scpi_current_ch_sample_rate);
  scpi_lib_register_scpi_command("SampleRATE?", scpi_current_ch_sample_rateq);
}

void scpi_register_sync_cmd(void)
{
  scpi_lib_get_ch1_cmd("SYNC",abStack16);
  scpi_lib_get_ch1_query_cmd("SYNC",abStack16);
  scpi_lib_get_ch2_cmd("SYNC",abStack16);
  scpi_lib_get_ch2_query_cmd("SYNC",abStack16);
  scpi_lib_register_scpi_command("SYNC", scpi_current_ch_sync_state);
  scpi_lib_register_scpi_command("SYNC?", scpi_current_ch_sync_stateq);
}

void scpi_register_product_band_cmd(void)
{
  scpi_lib_get_special_cmd("PRODuct",abStack16);
  scpi_lib_get_special_cmd("PRODuct?",abStack16);
}

void scpi_register_freq_counter_cmd(void)
{
  scpi_lib_register_scpi_command("FreqCouNTer", scpi_freq_counter);
  scpi_lib_get_query_cmd("FreqCouNTer",abStack16);
}

void scpi_register_buzzer_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("BUZZer",abStack16);
  scpi_lib_get_query_cmd("BUZZer",abStack16);
}

void scpi_register_ch_copy_cmd(void)
{
  scpi_lib_get_special_cmd("PAraCoPy",abStack16);
}

void scpi_register_coupling_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("COUPling",abStack16);
  scpi_lib_get_query_cmd("COUPling",abStack16);
}

void scpi_register_eqphase_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("EQPHASE",abStack16);
}

void scpi_register_language_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("LAnGuaGe",abStack16);
  scpi_lib_get_query_cmd("LAnGuaGe",abStack16);
}

void scpi_register_mode_select_cmd(void)
{
  scpi_lib_get_witchout_ch_cmd("MODE",abStack16);
  scpi_lib_get_query_cmd("MODE",abStack16);
}

void scpi_register_cascade_cmd(void)
{
  scpi_lib_register_scpi_command("CASCADE", scpi_cascade_set_cmd);
  scpi_lib_get_query_cmd("CASCADE",abStack16);
}

void scpi_register_iq_test_cmd(void)
{
  scpi_lib_register_scpi_command("iq", scpi_iq);
}

void scpi_register_cmd_pro_bw(void)
{
  scpi_if_register_cmd("MD5_SRLN?","MD5_SRLN?",scpi_if_md5_serial_number_get);
  scpi_if_register_cmd("PRO_SRLN?","PRO_SRLN?",scpi_if_md5_options_srln);
  scpi_if_register_bin_cmd("LCISL","LICENCE_INSTALL",scpi_if_md5_options_license_set);
  scpi_if_register_cmd("LCISL?","LICENCE_INSTALL?",scpi_if_md5_options_license_get);
  scpi_if_register_cmd("PRBD?","PRODUCT_BAND?",scpi_if_md5_product_band_get);
  scpi_if_register_cmd("MCBD?","MACHINE_BAND?",scpi_if_md5_license_get);
  scpi_if_register_bin_cmd("MCBD","MACHINE_BAND",scpi_if_md5_license_set);
  scpi_if_register_cmd("SCOPEID?","SCOPE_ID?",scpi_scope_id_get);
  scpi_if_register_cmd("MD5_PR?","MD5_PR?",scpi_md5_product_get);
  scpi_if_register_cmd("LIC:DEL","LICENCE_DELETE",scpi_if_md5_options_license_delete);
}