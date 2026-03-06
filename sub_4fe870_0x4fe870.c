// 函数名称: sub_4fe870
// 虚拟地址: 0x4fe870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fe870(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result != 0)
        if (result != arg2)
            result = _aligned_free_base(result)
            *arg1 = 0
        
        return result
    
    sub_4c5870("*pString", &data_83f3d3, "Definition.cpp", 0x16a, "DefinitionDeleteString")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
