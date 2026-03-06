// 函数名称: sub_503910
// 虚拟地址: 0x503910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_503910(int32_t* arg1, int32_t arg2, char* arg3, int32_t* arg4, void* arg5, char arg6)
{
    // 第一条实际指令: char* var_8 = arg3
    char* var_8 = arg3
    int32_t* edi = arg4
    char* var_14
    
    if ((arg6 & 0x40) == 0)
        var_14 = arg3
        arg6.d = &var_14
        
        if (arg1 == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edi = sub_5029b0(arg4, sub_4c42b0(&var_14, arg1), arg3, arg4)
    
    int32_t i = 0
    int32_t* entry_ebx
    
    if (*entry_ebx s<= 0)
        return 
    
    do
        int32_t* ecx = entry_ebx[1]
        char* edx_1 = &ecx[i * 2]
        var_14 = edx_1
        int32_t* var_18_2 = edi
        sub_503180(arg5, edx_1, ecx)
        i += 1
    while (i s< *entry_ebx)
}
