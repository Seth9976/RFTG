// 函数名称: sub_4ce2f0
// 虚拟地址: 0x4ce2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4ce2f0(int32_t arg1, int128_t* arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: sub_5abfc0(arg2, 0xfa, arg1)
    sub_5abfc0(arg2, 0xfa, arg1)
    void* entry_ebx
    void* esi = *(entry_ebx + 0xc)
    
    if (esi != 0)
        sub_5ab990(arg2, arg3, esi)
        int32_t var_14 = 0
        char var_c = 0
        int32_t var_8 = 0
        int128_t* var_18 = arg2
        void* var_10 = esi
        return sub_4ce080(arg3, entry_ebx, 0, &var_18)
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
