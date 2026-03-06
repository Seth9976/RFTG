// 函数名称: sub_46a670
// 虚拟地址: 0x46a670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46a670(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_4c
    void* var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    void* ebx = sub_46b2b0(arg3)
    bool cond:0 = *(arg4 + *(arg2 + 0x7c) * 0x14 + 0x465) == 2
    var_4c = ebx
    
    if (not(cond:0))
        sub_4c5870("g->deck[gfx.cidx].where == WHERE_HAND", &data_83f3d3, "..\code\RFTGShared.cpp", 
            0x188, "RFTGHandleDiscardSelection")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_6 = sub_46b2b0(arg3)
    int32_t edx = *(eax_6 + 0x550)
    int32_t ecx_1 = 0
    
    if (edx s<= 0)
        goto label_46a70e
    
    void* eax_7 = eax_6 + 0x30
    
    while (*eax_7 != *(arg2 + 0xac))
        ecx_1 += 1
        eax_7 += 4
        
        if (ecx_1 s>= edx)
            goto label_46a701
    
    if (ecx_1 == 0xffffffff)
    label_46a701:
        ebx = var_4c
    label_46a70e:
        char eax_9
        void* ecx_2
        int32_t edx_2
        eax_9, ecx_2, edx_2 = sub_436960(*(data_27e7a40 + 0x74))
        
        if (eax_9 == 0)
        label_46a782:
            int32_t eax_16 = *(ebx + 0x550)
            *(ebx + 0x550) = eax_16 + 1
            *(ebx + (eax_16 << 2) + 0x30) = *(arg2 + 0xac)
            
            if (arg3 != 0xffffffff)
                var_4c = *sub_46b2b0(arg3)
            else
                var_4c = arg3
            
            int32_t ecx_4 = data_315fba4
            data_315fba4 = ecx_4 + 1
            int32_t var_44_1 = 0x11
            int32_t var_40_1 = ecx_4
            void* var_48 = var_4c
            sub_46b1d0(arg2, &var_48)
            sub_424740(arg3, arg2)
        else
            int32_t eax_10 = *(ebx + 0x1c)
            
            if (eax_10 != 9 && eax_10 != 0xb)
                if (eax_10 != 7 || *(ebx + 0x550) != 0)
                    goto label_46a782
                
                goto label_46a732
            
            if (*(ebx + 0x550) != 0)
                goto label_46a782
            
        label_46a732:
            *(ebx + 0x550) = 1
            *(ebx + 0x30) = *(arg2 + 0xac)
            int32_t var_5c_1 = 0x10
            sub_46b460(arg3, edx_2, ecx_2, arg2)
            sub_424690(arg3, arg2)
    else
        void* var_5c_2 = arg3
        sub_46a330(ecx_1, edx)
        sub_46b410(arg2)
        sub_4245c0()
        ebx = var_4c
    
    int32_t eax_21 = *(ebx + 0x550)
    
    if (eax_21 s> *(ebx + 0x558) || eax_21 s< *(ebx + 0x554))
        void* eax_22 = *(data_27e7a40 + 0x548)
        *(eax_22 + 0x210) = 0
        *(eax_22 + 0x2c078) = 1
        *(eax_22 + 0x214) = 0
        sub_5a6aba(eax_1 ^ &var_4c)
        return eax_22
    
    void* esi_1 = *(data_27e7a40 + 0x548)
    
    if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        eax_21 = sub_4d66f0(&var_3c)
    
    *(esi_1 + 0x210) = 0
    *(esi_1 + 0x2c078) = 0
    *(esi_1 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &var_4c)
    return eax_21
}
