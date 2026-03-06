// 函数名称: sub_46a440
// 虚拟地址: 0x46a440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46a440(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    void* eax_1 = sub_46b2b0(arg1)
    int32_t ecx = *(eax_1 + 0xa94)
    
    if (ecx s> 0)
        void* eax_2 = eax_1 + 0x574
        int32_t edi_1 = 0
        
        do
            if (*eax_2 == *(arg2 + 0xac))
                if (edi_1 == 0xffffffff)
                    break
                
                void* eax_6 = sub_46b2b0(arg1)
                sub_5a6c10(eax_6 + (edi_1 << 2) + 0x574, eax_6 + (edi_1 << 2) + 0x578, 
                    ((*(eax_6 + 0xa94) - edi_1) << 2) + 0xfffffffc)
                *(eax_6 + 0xa94) -= 1
                return sub_46b410(arg2) __tailcall
            
            edi_1 += 1
            eax_2 += 4
        while (edi_1 s< ecx)
    
    int32_t eax_3 = *(eax + 0xa94)
    *(eax + 0xa94) = eax_3 + 1
    int32_t edx_3 = *(arg2 + 0xac)
    *(eax + (eax_3 << 2) + 0x574) = edx_3
    int32_t var_14 = 0xffffffff
    return sub_46bde0(*(arg2 + 0x7c), edx_3)
}
