// 函数名称: sub_46b660
// 虚拟地址: 0x46b660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46b660(int32_t arg1)
{
    // 第一条实际指令: void* edi = sub_46b2b0(arg1)
    void* edi = sub_46b2b0(arg1)
    int32_t result = *(edi + 0x550)
    void* eax_2 = *(data_27e7a40 + 0x548)
    void* var_14 = edi
    
    if (eax_2 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = *(eax_2 + 0x45844)
    int32_t i_1 = 0
    
    if (*(edi + 0xa94) s> 0)
        void* ebx_1 = edi + 0x574
        int32_t i
        
        do
            void* eax_7 =
                *(edx + *(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *ebx_1) + 0x7c) * 0x14 + 0x46c)
            int32_t j_2 = sx.d(*(eax_7 + 0x15))
            
            if (j_2 s> 0)
                void* edx_2 = eax_7 + 0x20
                int32_t j_1 = j_2
                int32_t j
                
                do
                    int32_t ecx_4 = *edx_2
                    int32_t var_18_1 = *(edx_2 + 4)
                    
                    if ((ecx_4 & 0x100) != 0 && (ecx_4 & 0x90000020) != 0)
                        result += sx.d(*(edx_2 + 8))
                    
                    edx_2 += 0x18
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi = var_14
            
            i = i_1 + 1
            ebx_1 += 4
            i_1 = i
        while (i s< *(edi + 0xa94))
    
    return result
}
