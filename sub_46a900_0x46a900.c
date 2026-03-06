// 函数名称: sub_46a900
// 虚拟地址: 0x46a900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46a900(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    void* eax_1 = sub_46b2b0(arg1)
    int32_t ecx = *(eax_1 + 0x1f34)
    int32_t edx = *(eax_1 + 0x1f30)
    
    if (ecx s> edx)
        edx = ecx
    
    if (edx s> 0)
        int32_t edi_2 = *(arg2 + 0xac)
        void* eax_2 = eax_1 + 0x1a10
        int32_t ecx_1 = 0
        
        do
            if (*eax_2 == edi_2)
                if (*(eax + 0xa94) != 0)
                    sub_4c5870("pgui.numCurrentSpecials == 0", &data_83f3d3, "..\code\RFTGShared.cpp", 
                        0x1ba, "RFTGHandleStartingWorld")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                *(eax + 0xa94) = 1
                *(eax + 0x574) = *(arg2 + 0xac)
                *(eax + 0x1c) = 2
                int32_t edi_3
                
                if (arg1 != 0xffffffff)
                    edi_3 = *sub_46b2b0(arg1)
                else
                    edi_3 = edi_2 | arg1
                
                int32_t ecx_3 = data_315fba4
                int32_t var_c = 3
                int32_t var_8 = ecx_3
                data_315fba4 = ecx_3 + 1
                int32_t var_10 = edi_3
                void* var_24 = arg2
                void* eax_9 = sub_46a8a0(arg1, sub_46b1d0(arg2, &var_10))
                int32_t esi_1
                
                if (arg1 != 0xffffffff)
                    esi_1 = *sub_46b2b0(arg1)
                else
                    esi_1 = arg1
                
                int32_t ecx_5 = data_315fba4
                int32_t var_c_1 = 0x11
                int32_t var_8_1 = ecx_5
                data_315fba4 = ecx_5 + 1
                var_10 = esi_1
                sub_46b1d0(eax_9, &var_10)
                sub_4247f0(eax_9)
                int32_t result = 3
                
                if (sub_46a270(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax + 0x574))) == 0)
                    result = 2
                
                *(eax + 0x558) = result
                *(eax + 0x554) = result
                return result
            
            ecx_1 += 1
            eax_2 += 4
        while (ecx_1 s< edx)
    
    sub_4c5870("IsSpecialPayment(who, gfx)", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1b9, 
        "RFTGHandleStartingWorld")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
