// 函数名称: sub_501e60
// 虚拟地址: 0x501e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_501e60(int32_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: void* ebx = arg2
    void* ebx = arg2
    int32_t esi = *(ebx + 8)
    int32_t esi_1 = neg.d(esi)
    int32_t i = neg.d(sbb.d(esi_1, esi_1, esi != 0)) - 1
    
    while (i != 0xffffffff)
        uint32_t eax = i * 0xf
        i += 1
        int32_t* ecx_2 = *(ebx + 4) + (eax << 2)
        
        if (i s>= *(ebx + 8))
            i = 0xffffffff
        
        int32_t edx_1 = ecx_2[0xa]
        
        if ((edx_1.b & 8) == 0)
            eax = ecx_2[3]
            int32_t edi_1 = *(eax + 0x10)
            
            if (edi_1 == 6)
                sub_5014a0(arg1, ecx_2, arg3)
                ebx = arg2
                continue
            else if ((edx_1.b & 0x40) != 0)
                if (edi_1 == 0x13)
                    *ecx_2
                    sub_501b20(arg3, edx_1, ecx_2)
                    ebx = arg2
                    continue
                else if (edi_1 != 0x14)
                    if (edi_1 s> 0 && edi_1 s< 0x12)
                        sub_4c5870("!DefTypeIsBuiltIn(pField->pDefMap)", &data_83f3d3, 
                            "DefParseTree.cpp", 0x43b, "DefParseReadBlockNoVersion")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_501f80(*ecx_2 + arg1, eax, arg3, 0)
                else
                    sub_501970(arg1, *ecx_2 + arg1, ecx_2, arg3)
                    ebx = arg2
                    continue
        
        ebx = arg2
    
    int32_t** i_1 = *(arg3 + 4)
    
    while (i_1 != 0)
        int32_t* edx_6 = *i_1
        i_1 = i_1[1]
        sub_501de0(arg1, edx_6)
}
