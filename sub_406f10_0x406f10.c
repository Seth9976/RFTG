// 函数名称: sub_406f10
// 虚拟地址: 0x406f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_406f10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6917a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165578 & 1) == 0)
        data_3165578.d |= 1
        int32_t var_8_1 = 0
        data_3165574 = sub_4f5220(data_307c174, "BtnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165578 & 2) == 0)
        data_3165578.d |= 2
        int32_t var_8_3 = 1
        data_3165570 = sub_4f5220(data_307c178, "BtnBack")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165578 & 4) == 0)
        data_3165578.d |= 4
        int32_t var_8_5 = 2
        data_316556c = sub_4f5220(data_307c174, "btnArrowR")
        int32_t var_8_6 = 0xffffffff
    
    int32_t eax_8
    
    if ((data_3165578 & 8) != 0)
        eax_8 = data_3165568
    else
        data_3165578.d |= 8
        int32_t var_8_7 = 3
        eax_8 = sub_4f5220(data_307c178, "btnArrowL")
        data_3165568 = eax_8
        int32_t var_8_8 = 0xffffffff
    
    int32_t edx_2 = data_316556c
    
    if (eax_8 == edx_2)
        sub_4c5870("CREDITS_BUTTON_PREV != CREDITS_BUTTON_NEXT", &data_83f3d3, 
            "..\code\CreditsDlg.cpp", 0x1d, "CreditsDialogClick")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 == data_3165570 || arg1 == data_3165574)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    if (arg1 == edx_2)
        *(data_27c05e4 + 0x10) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == eax_8)
        *(data_27c05e4 + 0x10) = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
