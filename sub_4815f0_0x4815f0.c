// 函数名称: sub_4815f0
// 虚拟地址: 0x4815f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4815f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69074a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165214 & 1) == 0)
        data_3165214.d |= 1
        int32_t var_8_1 = 0
        data_3165210 = sub_4f5220(data_307c170, "bgPlayer")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165214 & 2) == 0)
        data_3165214.d |= 2
        int32_t var_8_3 = 1
        data_316520c = sub_4f5220(data_307c170, "btnEmpty")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165214 & 4) == 0)
        data_3165214.d |= 4
        int32_t var_8_5 = 2
        data_3165208 = sub_4f5220(data_307c170, "btnFrame")
        int32_t var_8_6 = 0xffffffff
    
    if (arg3 == data_3165210 || arg3 == data_316520c || arg3 == data_3165208)
        sub_40cae0(&data_307cd0c, arg4)
    else
        int32_t eax_7 = sub_40c7a0(&data_307cd0c)
        int32_t ecx_2 = arg4 * 3
        
        if (*(eax_7 + (ecx_2 << 2) + 0x50) != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x22b, 
                "GameSetupDialogAIDifficultBtnClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(eax_7 + (ecx_2 << 2) + 0x54) += 1
        
        if (*(eax_7 + (ecx_2 << 2) + 0x54) s>= 3)
            *(eax_7 + (ecx_2 << 2) + 0x54) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
