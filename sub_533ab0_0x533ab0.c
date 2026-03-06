// 函数名称: sub_533ab0
// 虚拟地址: 0x533ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_533ab0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t result = *(sub_533af0(ecx) + 0xc)
    
    if (result != 0)
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
