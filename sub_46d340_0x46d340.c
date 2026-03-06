// 函数名称: sub_46d340
// 虚拟地址: 0x46d340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46d340(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void var_4c
    void var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    void* ebx = sub_46b2b0(arg3)
    
    if (*arg2 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x6ee, 
            "RFTGHandleConsumeHand")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = sub_46b2b0(arg3)
    int32_t edx = *(eax_5 + 0x550)
    int32_t ecx = 0
    
    if (edx s> 0)
        void* eax_6 = eax_5 + 0x30
        
        while (*eax_6 != *(arg2 + 0xac))
            ecx += 1
            eax_6 += 4
            
            if (ecx s>= edx)
                goto label_46d3d2
    
    if (edx s<= 0 || ecx == 0xffffffff)
    label_46d3d2:
        void* eax_7 = *(ebx + 0x550)
        *(ebx + 0x550) = eax_7 + 1
        int32_t edx_1 = *(arg2 + 0xac)
        *(ebx + (eax_7 << 2) + 0x30) = edx_1
        
        if (*(ebx + 0x550) s> *(ebx + 0x558))
            sub_4c5870("pgui.numCurrentDiscards <= pgui.numToChooseMax", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x6fb, "RFTGHandleConsumeHand")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_5c_1 = 0x11
        sub_46b460(arg3, edx_1, eax_7 + 1, arg2)
        sub_424740(arg3, arg2)
    else
        int32_t var_5c = arg3
        sub_46a330(ecx, edx)
        sub_46b410(arg2)
        sub_4245c0()
    
    int32_t eax_14 = *(ebx + 0x550)
    
    if (eax_14 s> *(ebx + 0x558) || eax_14 s< *(ebx + 0x554))
        void* eax_16 = *(data_27e7a40 + 0x548)
        *(eax_16 + 0x210) = 0
        *(eax_16 + 0x2c078) = 1
        *(eax_16 + 0x214) = 0
        sub_5a6aba(eax_1 ^ &var_4c)
        return eax_16
    
    int32_t ebx_2 = *(ebx + 0x564)
    
    if (ebx_2 != 0xffffffff)
        eax_14 = 0x8a
        
        if (*(*(arg4 + ebx_2 * 0x14 + 0x46c) + 4) == 0x8a)
            sub_46d260(arg3)
            sub_5a6aba(eax_1 ^ &var_4c)
            return 0
    
    void* esi_2 = *(data_27e7a40 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        eax_14 = sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 0
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &var_4c)
    return eax_14
}
