// 函数名称: sub_4ff5f0
// 虚拟地址: 0x4ff5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ff5f0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t* result = sub_4cce80(0x10)
    int32_t* result = sub_4cce80(0x10)
    *result = 0
    result[1] = 0
    result[2] = 0
    result[3] = 0
    int32_t eax = *(arg1 + 0xc)
    
    if (eax != 0)
        int32_t* eax_2 = sub_4cce80(eax)
        sub_4fe7d0(eax_2, arg1)
        *result = eax_2
        result[3] = arg1
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
