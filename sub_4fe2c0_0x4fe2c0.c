// 函数名称: sub_4fe2c0
// 虚拟地址: 0x4fe2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fe2c0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0xc)
    int32_t result = *(arg1 + 0xc)
    
    if (result != 0)
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
