// 函数名称: sub_46c960
// 虚拟地址: 0x46c960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46c960(int32_t arg1, void* arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int128_t* var_74
    int128_t* var_74
    int32_t eax_1 = __security_cookie ^ &var_74
    var_74 = arg4
    void* eax_3
    void* edx
    eax_3, edx = sub_46b2b0(arg3)
    
    if (*arg2 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x5d0, 
            "RFTGHandleTakeoverPower")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* var_84 = arg2
    char eax_6
    void* edx_1
    eax_6, edx_1 = sub_46a2e0(arg3, edx)
    
    if (eax_6 == 0)
        sub_46a500(arg3, arg2)
        int32_t* ecx_2 = data_307bf80
        *(*(data_27e7a40 + 0x548) + 0xbfb0) = 0xffffffff
        sub_4d6480(ecx_2)
        void var_3c
        sub_4d66f0(&var_3c)
    else
        void* var_84_1 = arg2
        sub_46a440(arg3, edx_1)
    
    int32_t eax_8 = *(eax_3 + 0x550)
    void var_6c
    
    if (eax_8 == 0 && *(eax_3 + 0xa94) == eax_8)
        void* esi_2 = *(data_27e7a40 + 0x548)
        
        if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == eax_8)
            sub_4d6480(data_307bef0)
            eax_8 = sub_4d66f0(&var_6c)
        
        *(esi_2 + 0x210) = 2
        *(esi_2 + 0x2c078) = 0
        *(esi_2 + 0x214) = 0
        sub_5a6aba(eax_1 ^ &var_74)
        return eax_8
    
    if (eax_8 == 1 && *(eax_3 + 0xa94) == 1)
        sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_3 + 0x30))
        char eax_12 =
            sub_46c8f0(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_3 + 0x574)), var_74)
        
        if (eax_12 != 0)
            void* esi_6 = *(data_27e7a40 + 0x548)
            
            if (*(esi_6 + 0x2c078) == 1 && *(esi_6 + 0x210) == 0)
                sub_4d6480(data_307bef0)
                eax_12 = sub_4d66f0(&var_6c)
            
            *(esi_6 + 0x210) = 0
            *(esi_6 + 0x2c078) = 0
            *(esi_6 + 0x214) = 1
            sub_5a6aba(eax_1 ^ &var_74)
            return eax_12
    
    void* eax_13 = *(data_27e7a40 + 0x548)
    *(eax_13 + 0x2c078) = 1
    *(eax_13 + 0x210) = 0
    *(eax_13 + 0x214) = 0
    sub_5a6aba(eax_1 ^ &var_74)
    return eax_13
}
