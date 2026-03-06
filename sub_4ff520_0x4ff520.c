// 函数名称: sub_4ff520
// 虚拟地址: 0x4ff520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ff520(void* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t* result = sub_4cce80(0x10)
    int32_t* result = sub_4cce80(0x10)
    *result = 0
    result[1] = 0
    result[2] = 0
    result[3] = 0
    *arg2
    int32_t eax_1 = *(arg1 + 0xc)
    
    if (eax_1 != 0)
        int128_t* eax_3 = sub_4cce80(eax_1)
        sub_4ff3b0(eax_3, arg1)
        result[3] = arg1
        *result = eax_3
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
