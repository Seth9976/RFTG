// 函数名称: sub_419fe0
// 虚拟地址: 0x419fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_419fe0(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6912ee
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165490 & 1) == 0)
        data_3165490.d |= 1
        int32_t var_8_1 = 0
        char const* const var_18_1 = "uiTutorial1"
        int32_t eax_4
        char* edx
        char* edx_1
        eax_4, edx_1 = sub_510710(data_307ca78, edx)
        data_315fa34 = eax_4
        int32_t* eax_5 = data_307ca78
        char const* const var_18_2 = "uiTutorial2"
        data_315fa38 = 1
        int32_t eax_6
        char* edx_2
        eax_6, edx_2 = sub_510710(eax_5, edx_1)
        data_315fa3c = eax_6
        int32_t* eax_7 = data_307ca78
        char const* const var_18_3 = "uiTutorial3"
        data_315fa40 = 2
        int32_t eax_8
        char* edx_3
        eax_8, edx_3 = sub_510710(eax_7, edx_2)
        data_315fa44 = eax_8
        int32_t* eax_9 = data_307ca78
        char const* const var_18_4 = "uiTutorial4"
        data_315fa48 = 3
        int32_t eax_10
        char* edx_4
        eax_10, edx_4 = sub_510710(eax_9, edx_3)
        data_315fa4c = eax_10
        int32_t* eax_11 = data_307ca78
        char const* const var_18_5 = "uiTutorial5"
        data_315fa50 = 4
        int32_t eax_12
        char* edx_5
        eax_12, edx_5 = sub_510710(eax_11, edx_4)
        data_315fa54 = eax_12
        int32_t* eax_13 = data_307ca78
        char const* const var_18_6 = "uiTutorial6"
        data_315fa58 = 5
        int32_t eax_14
        char* edx_6
        eax_14, edx_6 = sub_510710(eax_13, edx_5)
        data_315fa5c = eax_14
        int32_t* eax_15 = data_307ca78
        char const* const var_18_7 = "uiTutorial7"
        data_315fa60 = 6
        int32_t eax_16
        char* edx_7
        eax_16, edx_7 = sub_510710(eax_15, edx_6)
        data_315fa64 = eax_16
        int32_t* eax_17 = data_307ca78
        char const* const var_18_8 = "uiTutorial8"
        data_315fa68 = 7
        int32_t eax_18
        char* edx_8
        eax_18, edx_8 = sub_510710(eax_17, edx_7)
        data_315fa6c = eax_18
        int32_t* eax_19 = data_307ca78
        char const* const var_18_9 = "uiTutorial9"
        data_315fa70 = 8
        int32_t eax_20
        char* edx_9
        eax_20, edx_9 = sub_510710(eax_19, edx_8)
        data_315fa74 = eax_20
        int32_t* eax_21 = data_307ca78
        char const* const var_18_10 = "uiTutorial10"
        data_315fa78 = 9
        int32_t eax_22
        char* edx_10
        eax_22, edx_10 = sub_510710(eax_21, edx_9)
        data_315fa7c = eax_22
        int32_t* eax_23 = data_307ca78
        char const* const var_18_11 = "uiTutorial11"
        data_315fa80 = 0xa
        int32_t eax_24
        char* edx_11
        eax_24, edx_11 = sub_510710(eax_23, edx_10)
        data_315fa84 = eax_24
        int32_t* eax_25 = data_307ca78
        char const* const var_18_12 = "uiTutorial12"
        data_315fa88 = 0xb
        data_315fa8c = sub_510710(eax_25, edx_11)
        int32_t var_8_2 = 0xffffffff
    
    for (int32_t i = 0; i s< 0xc; i += 1)
        if (*((i << 3) + &data_315fa30) == arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return (&data_315fa34)[i * 2]
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66b, "VRGetTutorialUI")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
