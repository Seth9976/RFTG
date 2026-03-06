// 函数名称: sub_4ff5a0
// 虚拟地址: 0x4ff5a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ff5a0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t eax_2 = *(arg1 + 0xc)
    int32_t eax_2 = *(arg1 + 0xc)
    
    if (eax_2 != 0)
        int32_t* result = sub_4cce80(eax_2)
        sub_4fe7d0(result, arg1)
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
