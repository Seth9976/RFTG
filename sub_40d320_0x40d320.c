// 函数名称: sub_40d320
// 虚拟地址: 0x40d320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40d320(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6915d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165520 & 1) == 0)
        data_3165520.d |= 1
        int32_t var_8_1 = 0
        data_316551c = sub_4f5220(data_307c16c, "tbl_ExpansionsNw")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165520 & 2) == 0)
        data_3165520.d |= 2
        int32_t var_8_3 = 1
        data_3165518 = sub_4f5220(data_307c16c, "tbl_ExpansionsGs")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165520 & 4) == 0)
        data_3165520.d |= 4
        int32_t var_8_5 = 2
        data_3165514 = sub_4f5220(data_307c16c, "tbl_ExpansionsRvI")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165520 & 8) == 0)
        data_3165520.d |= 8
        int32_t var_8_7 = 3
        data_3165510 = sub_4f5220(data_307c16c, "tbl_ExpansionsBoW")
        int32_t var_8_8 = 0xffffffff
    
    if (arg1 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x3c1, 
            "ButtonSlotToExpansionTable")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return data_316551c
        case 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return data_3165518
        case 2
            fsbase->NtTib.ExceptionList = ExceptionList
            return data_3165514
        case 3
            fsbase->NtTib.ExceptionList = ExceptionList
            return data_3165510
}
