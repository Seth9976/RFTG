// 函数名称: sub_531280
// 虚拟地址: 0x531280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_531280(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* var_4 = arg3
    void* var_4 = arg3
    
    if (arg1 s< 0 || arg1 s>= *(arg3 + 0x10))
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t result = *(*(*(arg3 + 0xc) + (arg1 << 2)) + 0xc)
    
    if (result != 0)
        return result
    
    sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
