// 函数名称: sub_474560
// 虚拟地址: 0x474560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_474560(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_699262
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c76c
    
    if ((data_3166930 & 1) == 0)
        data_3166930.d |= 1
        int32_t var_8_1 = 0
        data_316692c = sub_4f5220(esi, "BtnExit")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166930 & 2) == 0)
        data_3166930.d |= 2
        int32_t var_8_3 = 1
        data_3166928 = sub_4f5220(esi, "BtnResume")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166930 & 4) == 0)
        data_3166930.d |= 4
        int32_t var_8_5 = 2
        data_3166924 = sub_4f5220(esi, "ButtonNewGame")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166930 & 8) == 0)
        data_3166930.d |= 8
        int32_t var_8_7 = 3
        data_3166920 = sub_4f5220(esi, "BtnPlayOnline")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166930 & 0x10) == 0)
        data_3166930.d |= 0x10
        int32_t var_8_9 = 4
        data_316691c = sub_4f5220(esi, "BtnSettings")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166930 & 0x20) == 0)
        data_3166930.d |= 0x20
        int32_t var_8_11 = 5
        data_3166918 = sub_4f5220(esi, "BtnStore")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3166930 & 0x40) == 0)
        data_3166930.d |= 0x40
        int32_t var_8_13 = 6
        data_3166914 = sub_4f5220(esi, "BtnRules")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_3166930 & 0x80) == 0)
        data_3166930.d |= 0x80
        int32_t var_8_15 = 7
        data_3166910 = sub_4f5220(esi, "BtnCredits")
        int32_t var_8_16 = 0xffffffff
    
    if ((data_3166930.d & 0x100) == 0)
        data_3166930.d |= 0x100
        int32_t var_8_17 = 8
        data_316690c = sub_4f5220(esi, "PlayerNameBG")
        int32_t var_8_18 = 0xffffffff
    
    if (arg1 == data_3166928)
        sub_474460()
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_316692c)
        TerminateProcess(GetCurrentProcess(), 0)
        noreturn
    
    if (arg1 == data_3166924)
        sub_40c910(&data_8413a8, 0, true, &data_307cd0c)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_316691c)
        data_307d594 = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_3166918)
        data_307d96c = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_3166914)
        sub_4b5a50(&data_307d8cc)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_3166910)
        data_307d8c8 = 0
        data_307d8b8 = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_316690c)
        sub_474530(0)
    else if (arg1 == data_3166920)
        if (*data_27e7a54 != 0)
            sub_474500()
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        sub_474530(1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
