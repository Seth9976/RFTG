// 函数名称: sub_46d020
// 虚拟地址: 0x46d020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46d020(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ edi, void* arg5)
{
    // 第一条实际指令: void var_50
    void var_50
    int32_t eax_1 = __security_cookie ^ &var_50
    void* eax_3
    void* edx
    eax_3, edx = sub_46b2b0(arg3)
    
    if (*arg4 != 1)
        sub_4c5870("gfx.type == RFTGGFX_GOOD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x6b3, 
            "RFTGHandleConsumeGood")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_3 + 0x558) == 1)
        int32_t eax_5 = *(eax_3 + 0x550)
        *(eax_3 + 0x550) = eax_5 + 1
        *(eax_3 + (eax_5 << 2) + 0x30) = *(arg4 + 0xac)
        sub_46cf50(arg3, arg5)
        int32_t esi_1
        
        if (arg3 != 0xffffffff)
            esi_1 = *sub_46b2b0(arg3)
        else
            esi_1 = arg3
        
        int32_t ecx_2 = data_315fba4
        int32_t var_44 = 0x11
        int32_t var_40 = ecx_2
        data_315fba4 = ecx_2 + 1
        int32_t var_48 = esi_1
        sub_46b1d0(arg4, &var_48)
        int32_t eax_9 = sub_4247f0(arg4)
        *(eax_3 + 0x1c) = 0
        sub_5a6aba(eax_1 ^ &var_50)
        return eax_9
    
    void* var_5c_1 = arg4
    int32_t eax_11
    int32_t edx_4
    eax_11, edx_4 = sub_46b4b0(arg3, edx)
    
    if (eax_11 == 0xffffffff)
        void* eax_13 = *(eax_3 + 0x550)
        *(eax_3 + 0x550) = eax_13 + 1
        int32_t edx_5 = *(arg4 + 0xac)
        *(eax_3 + (eax_13 << 2) + 0x30) = edx_5
        
        if (*(eax_3 + 0x550) s> *(eax_3 + 0x558))
            sub_4c5870("pgui.numCurrentDiscards <= pgui.numToChooseMax", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x6cb, "RFTGHandleConsumeGood")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_5c_3 = 0x11
        sub_46b460(arg3, edx_5, eax_13 + 1, arg4)
        sub_4247f0(arg4)
    else
        int32_t var_5c_2 = arg3
        sub_46a330(eax_11, edx_4)
        sub_46b410(arg4)
        
        if (*(arg4 + 0x74) != 2)
            *(arg4 + 0x74) = 0
        else
            data_c020d4 -= 1
            *(arg4 + 0x74) = 7
    
    int32_t eax_17 = *(eax_3 + 0x550)
    
    if (eax_17 s> *(eax_3 + 0x558) || eax_17 s< *(eax_3 + 0x554))
        void* eax_18 = *(data_27e7a40 + 0x548)
        *(eax_18 + 0x210) = 0
        *(eax_18 + 0x214) = 0
        *(eax_18 + 0x2c078) = 1
        sub_5a6aba(eax_1 ^ &var_50)
        return eax_18
    
    void* esi_2 = *(data_27e7a40 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        eax_17 = sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 0
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &var_50)
    return eax_17
}
