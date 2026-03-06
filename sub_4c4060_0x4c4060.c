// 函数名称: sub_4c4060
// 虚拟地址: 0x4c4060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4c4060(int32_t* arg1)
{
    // 第一条实际指令: char* eax_2 = *arg1
    char* eax_2 = *arg1
    char const* const var_14
    int32_t var_8
    
    if (eax_2 == 0 || *eax_2 == 0)
        char const* const var_4 = "XStringMagicDataStructFromCharPtr"
        var_8 = 0x1c
        char const* const var_c = "xString.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "!str->IsEmpty()"
    else
        if (*(eax_2 - 0x10) == 0xfafafafa)
            return &eax_2[0xfffffff0]
        
        char const* const var_4_1 = "XStringMagicDataStructFromCharPtr"
        var_8 = 0x20
        char const* const var_c_1 = "xString.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
    
    sub_4c5870(var_14, &data_83f3d3, "xString.cpp", var_8, "XStringMagicDataStructFromCharPtr")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
