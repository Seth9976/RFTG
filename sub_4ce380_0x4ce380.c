// 函数名称: sub_4ce380
// 虚拟地址: 0x4ce380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4ce380(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4 @ edi, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax = *(arg2 + 0xc)
    int32_t eax = *(arg2 + 0xc)
    
    if (eax == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg3 != 0)
        *arg3 = 0
    
    int32_t* var_8 = arg3
    int32_t var_18 = 0
    int32_t var_14 = 0
    char var_c = 1
    void* result = sub_4ce080(arg5, arg2, 0, &var_18)
    
    if (arg4 != 0)
        *arg4 = eax
    
    return result
}
