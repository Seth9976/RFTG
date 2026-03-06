// 函数名称: sub_5256b0
// 虚拟地址: 0x5256b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5256b0(int32_t* arg1, int32_t* arg2 @ edi, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    *arg2 = arg1
    int32_t entry_ebx
    arg2[1] = entry_ebx
    
    if (entry_ebx s>= *(sub_521460(arg1) + 4))
        sub_4c5870("sourceIndex < def.el.numItems", &data_83f3d3, "UI2.cpp", 0x80a, "UI2MergeAttribs")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (entry_ebx s>= 0)
        return sub_525160(arg2, *sub_521460(*arg2) + arg2[1] * 0xc, arg3, arg4, 0)
    
    sub_4c5870("sourceIndex >= 0", &data_83f3d3, "UI2.cpp", 0x80b, "UI2MergeAttribs")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
