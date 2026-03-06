// 函数名称: sub_501640
// 虚拟地址: 0x501640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_501640(int32_t* arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* const eax_1 = *arg4
    char* const eax_1 = *arg4
    
    if (eax_1 == 0)
        eax_1 = &data_83f3d3
    
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_531300(arg3, eax_1)
    *arg1 = eax_2
    
    if (eax_2 == 0xffffffff)
        eax_2.b = 0
        return eax_2
    
    int32_t* eax_3 = sub_531280(eax_2, edx, arg3)
    int32_t eax_4 = eax_3[4]
    
    if (eax_4 == 5)
        sub_4c5870("Halt", &data_83f3d3, "DefParseTree.cpp", 0x2a6, "DefParseReadTagValue")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_8
    
    if (eax_4 s<= 0 || eax_4 s>= 0x12)
        arg1[1] = sub_4cce80(sub_4fe2c0(eax_3))
        bool cond:0_1 = sub_4fe230(eax_3) == 0
        int32_t eax_16 = *arg1
        
        if (not(cond:0_1))
            if (eax_16 s>= 0 && eax_16 s< *(arg3 + 0x10))
                sub_500cb0(eax_16, *(*(arg3 + 0xc) + (eax_16 << 2)), arg1[1], eax_3, arg4)
                char* eax_17
                eax_17.b = 1
                return eax_17
            
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (eax_16 s< 0 || eax_16 s>= *(arg3 + 0x10))
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if ((*(*(*(arg3 + 0xc) + (eax_16 << 2)) + 0x28) & 0x40) != 0)
            int32_t* edi_1 = eax_3[1]
            
            if ((edi_1[0xa].b & 0x40) != 0)
                sub_500cb0(sub_4fe7d0(arg1[1], eax_3), edi_1, arg1[1], edi_1[3], arg4)
                sub_501f80(arg1[1], eax_3, arg4[2], 1)
                int32_t eax_23
                eax_23.b = 1
                return eax_23
            
            sub_4c5870("pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML", &data_83f3d3, 
                "DefParseTree.cpp", 0x2cf, "DefParseReadTagValue")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_501f80(arg1[1], eax_3, arg4[2], 0)
    else
        int32_t eax_6 = *arg1
        
        if (eax_6 s< 0 || eax_6 s>= *(arg3 + 0x10))
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_500cb0(eax_6, *(*(arg3 + 0xc) + (eax_6 << 2)), &arg1[1], eax_3, arg4)
        eax_8 = sub_4fe2c0(eax_3)
        
        if (eax_8 == 1)
            arg1[1] &= 0xff
            eax_8.b = eax_8.b
            return eax_8
        
        if (eax_8 == 2)
            *(arg1 + 6) = 0
            int32_t eax_9
            eax_9.b = 1
            return 1
    
    eax_8.b = 1
    return eax_8
}
