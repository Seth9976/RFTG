// 函数名称: sub_533660
// 虚拟地址: 0x533660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_533660(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (data_8bef0c s<= 1)
    if (data_8bef0c s<= 1)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi = *(data_8bef08 + 4)
    int32_t ecx_1 = *(edi + 0xc)
    
    if (ecx_1 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx_1 != data_30d72f0)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag) == pDefMap", &data_83f3d3, "AttribMap.cpp", 
            0x1da, "AttribMapGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi = *(arg2 + 4)
    int32_t ecx_2 = 0
    int32_t* edx_1
    
    if (esi s<= 0)
    label_533733:
        edx_1 = *(edi + 0x24)
    else
        int32_t* edx = *(arg2 + 8)
        
        while (*edx != 1)
            ecx_2 += 1
            edx = &edx[2]
            
            if (ecx_2 s>= esi)
                goto label_533733
        
        edx_1 = edx[1]
    
    *arg1 = *edx_1
    arg1[1] = edx_1[1]
    int32_t edx_2 = edx_1[3]
    arg1[2] = edx_1[2]
    arg1[3] = edx_2
}
