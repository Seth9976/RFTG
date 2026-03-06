// 函数名称: sub_4ff4d0
// 虚拟地址: 0x4ff4d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4ff4d0(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0xc)
    int32_t eax = *(arg1 + 0xc)
    
    if (eax != 0)
        int128_t* result = sub_4cce80(eax)
        sub_4ff3b0(result, arg1)
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
