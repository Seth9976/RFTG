// 函数名称: sub_47c810
// 虚拟地址: 0x47c810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47c810(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6991c2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c76c
    
    if ((data_3166908 & 1) == 0)
        data_3166908.d |= 1
        int32_t var_8_1 = 0
        data_3166904 = sub_4f5220(esi, "BtnExit")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166908 & 2) == 0)
        data_3166908.d |= 2
        int32_t var_8_3 = 1
        data_3166900 = sub_4f5220(esi, "BtnResume")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166908 & 4) == 0)
        data_3166908.d |= 4
        int32_t var_8_5 = 2
        data_31668fc = sub_4f5220(esi, "ButtonNewGame")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166908 & 8) == 0)
        data_3166908.d |= 8
        int32_t var_8_7 = 3
        data_31668f8 = sub_4f5220(esi, "BtnPlayOnline")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166908 & 0x10) == 0)
        data_3166908.d |= 0x10
        int32_t var_8_9 = 4
        data_31668f4 = sub_4f5220(esi, "BtnSettings")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166908 & 0x20) == 0)
        data_3166908.d |= 0x20
        int32_t var_8_11 = 5
        data_31668f0 = sub_4f5220(esi, "BtnStore")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3166908 & 0x40) == 0)
        data_3166908.d |= 0x40
        int32_t var_8_13 = 6
        data_31668ec = sub_4f5220(esi, "BtnRules")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_3166908 & 0x80) == 0)
        data_3166908.d |= 0x80
        int32_t var_8_15 = 7
        data_31668e8 = sub_4f5220(esi, "BtnCredits")
        int32_t var_8_16 = 0xffffffff
    
    if ((data_3166908.d & 0x100) == 0)
        data_3166908.d |= 0x100
        int32_t var_8_17 = 8
        data_31668e4 = sub_4f5220(esi, "PlayerNameBG")
        int32_t var_8_18 = 0xffffffff
    
    if (arg1 == data_3166900)
        sub_47c6d0()
        data_30d6f38 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_3166904)
        TerminateProcess(GetCurrentProcess(), 0)
        noreturn
    
    if (arg1 == data_31668fc)
        ecx.b = 1
        sub_40c910(&data_841320, 0, ecx.b, &data_307cd0c)
        data_30d6f38 = data_307c16c
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 != data_31668f4)
        if (arg1 == data_31668f0)
            data_30d6f38 = data_307c748
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (arg1 == data_31668ec)
            data_30d6f38 = data_307c69c
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (arg1 != data_31668e8)
            if (arg1 == data_31668e4)
                sub_474530(0)
                data_30d6f38 = data_307c620
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            if (arg1 == data_31668f8)
                if (*data_27e7a54 != 0)
                    sub_47c7e0()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                sub_474530(1)
                data_30d6f38 = data_307c620
        else
            data_30d6f38 = data_307c174
    else
        data_30d6f38 = data_307c588
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
