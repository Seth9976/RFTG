// 函数名称: sub_46cc00
// 虚拟地址: 0x46cc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* const __convention("regparm")sub_46cc00(int32_t arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* var_a84
    void* var_a84
    int32_t eax_1 = __security_cookie ^ &var_a84
    var_a84 = arg4
    void* eax_3
    void* edx
    eax_3, edx = sub_46b2b0(arg3)
    
    if (*arg2 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x601, 
            "RFTGHandleDiscardProduceSelection")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* var_a94 = arg2
    void* eax_6 = sub_46a2e0(arg3, edx)
    void* const eax_7
    
    if (eax_6.b == 0)
        sub_46a670(eax_6, arg2, arg3, var_a84)
        eax_7 = 1
    else
        int32_t ecx = *(eax_3 + 0xa94)
        eax_7 = 1
        
        if (ecx s> 1)
            sub_4c5870("pgui.numCurrentSpecials <= 1", &data_83f3d3, "..\code\RFTGShared.cpp", 0x606, 
                "RFTGHandleDiscardProduceSelection")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx != 0)
            int32_t ebx_1 = *(arg2 + 0xac)
            
            if (*(eax_3 + 0x574) != ebx_1)
                *(eax_3 + 0x574) = ebx_1
            else
                *(eax_3 + 0xa94) = 0
        else
            *(eax_3 + 0xa94) = 1
            *(eax_3 + 0x574) = *(arg2 + 0xac)
    
    int32_t ecx_3 = *(eax_3 + 0x550)
    
    if (ecx_3 == 0 && *(eax_3 + 0xa94) == ecx_3)
        eax_7 = data_27e7a40
        void* esi_1 = *(eax_7 + 0x548)
        
        if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == ecx_3)
            sub_4d6480(data_307bef0)
            void var_a80
            eax_7 = sub_4d66f0(&var_a80)
        
        *(esi_1 + 0x210) = 2
        *(esi_1 + 0x2c078) = 0
        *(esi_1 + 0x214) = 0
    else if (ecx_3 == 1 && (*(eax_3 + 0xa94) == 1 || *(eax_3 + 0x1f30) == 1))
        void var_530
        sub_469fa0(1, eax_3 + 0x30, &var_530)
        void* ebx_2 = *(eax_3 + 0xa94)
        void* eax_9 = 1
        void* edx_4
        
        if (*(eax_3 + 0x1f30) != 1)
            if (ebx_2 != 1)
                sub_4c5870(
                    "(num_special == 1 && num_list == 1) || (num_special == 0 && num_list == 0)", 
                    &data_83f3d3, "..\code\RFTGShared.cpp", 0x637, "RFTGHandleDiscardProduceSelection")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx_4 = eax_3 + 0x574
            eax_9 = ebx_2
        else
            ebx_2 = 1
            edx_4 = eax_3 + 0x1a10
        
        void var_a50
        sub_469fa0(eax_9, edx_4, &var_a50)
        int32_t var_a94_3 = 1
        sub_469e10(var_a84, arg3, 0x15, 0, &var_530, 1, &var_a50, ebx_2)
        sub_469ff0(arg3)
        void* eax_10 = *(data_27e7a40 + 0x548)
        *(eax_10 + 0x2c0a1) = 1
        sub_5a6aba(eax_1 ^ &var_a84)
        return eax_10
    
    sub_5a6aba(eax_1 ^ &var_a84)
    return eax_7
}
