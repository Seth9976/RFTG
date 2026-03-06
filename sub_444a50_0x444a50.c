// 函数名称: sub_444a50
// 虚拟地址: 0x444a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_444a50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697cec
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_134
    int32_t eax_2 = __security_cookie ^ &var_134
    int32_t __saved_edi
    int32_t var_144 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_60
    void arg_c
    int32_t* ecx = __builtin_memcpy(&var_60, &arg_c, 0x40)
    int32_t* esi = data_307c208
    
    if (arg1 - 1 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4205, "GoodIconGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* var_130
    int32_t* edx
    
    switch (arg1)
        case 1
            var_130 = data_307c290
        case 2
            ecx = data_307c294
            var_130 = ecx
        case 3
            edx = data_307c298
            var_130 = edx
        case 4
            var_130 = data_307c29c
        case 5
            ecx = data_307c2a0
            var_130 = ecx
    
    int32_t eax_9
    
    if ((data_3166550 & 1) != 0)
        eax_9 = data_316654c
    else
        data_3166550.d |= 1
        int32_t var_c_1 = 0
        eax_9, edx = sub_4f5220(esi, "Good")
        data_316654c = eax_9
        int32_t var_c_2 = 0xffffffff
    
    void* var_148_2 = &var_60
    int32_t* var_14c_2 = ecx
    void var_120
    __builtin_memcpy(&var_120, sub_4f62d0(eax_9, fconvert.s(float.t(1)), edx), 0x40)
    void* var_150 = nullptr
    int32_t* var_154 = nullptr
    float var_158 = &var_120
    int32_t* var_15c = &data_be1ae0
    char const* const var_160 = eax_9 * 0x118 + *sub_4f4890(esi)
    char* result
    int32_t edx_1
    int80_t st0
    st0, result, edx_1 =
        sub_4f67d0(&var_120, nullptr, var_130, var_160, var_15c, var_158, var_154, var_150)
    
    if (arg2 != 0xffffffff)
        if ((data_3166550 & 2) == 0)
            data_3166550.d |= 2
            int32_t var_c_3 = 1
            char const* const var_150_1 = "TradeBlue"
            data_315fc44 = sub_4f5220(esi, "TradeYellow")
            char const* const var_158_1 = "TradeBrown"
            data_315fc48 = sub_4f5220(esi, var_150_1)
            int32_t eax_15 = sub_4f5220(esi, var_158_1)
            var_160 = "TradeGreen"
            data_315fc4c = eax_15
            data_315fc50 = sub_4f5220(esi, var_160)
            int32_t eax_17
            eax_17, edx_1 = sub_4f5220(esi, "TradeYellow")
            data_315fc54 = eax_17
            int32_t var_c_4 = 0xffffffff
        
        int32_t eax_18 = (&data_315fc40)[arg1]
        
        if (arg2 == 0)
            void* var_148_5 = &var_60
            void* var_14c_6 = &var_60
            __builtin_memcpy(&var_120, sub_4f62d0(eax_18, fconvert.s(float.t(1)), edx_1), 0x40)
            result = sub_4f5010(&var_120, eax_18 * 0x118 + *sub_4f4890(esi), &data_85f518, 0)
        else
            result = sub_4f5120(esi, eax_18, &var_60, arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_134)
    return result
}
