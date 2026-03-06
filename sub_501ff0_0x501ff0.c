// 函数名称: sub_501ff0
// 虚拟地址: 0x501ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_501ff0(int32_t* arg1 @ edi, void* arg2)
{
    // 第一条实际指令: int32_t eax = arg1[3]
    int32_t eax = arg1[3]
    
    if (eax != 0)
        int32_t* result = sub_4cce80(eax)
        sub_501f80(result, arg1, arg2, 0)
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
