// 函数名称: sub_501c40
// 虚拟地址: 0x501c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_501c40(int32_t* arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi_1 = *arg1 + arg2
    int32_t* esi_1 = *arg1 + arg2
    void* entry_ebx
    
    if (*(entry_ebx + 8) == 0)
        *esi_1 = 0
        return 
    
    int32_t eax_1 = *(arg1[6] + 0xc)
    
    if (eax_1 != 0)
        int32_t* eax_3 = sub_4cce80(eax_1)
        *esi_1 = eax_3
        sub_501f80(eax_3, arg1[6], *(entry_ebx + 8), 0)
        return 
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
