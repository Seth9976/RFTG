// 函数名称: sub_4cdfd0
// 虚拟地址: 0x4cdfd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4cdfd0(void* arg1, int32_t* arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: int32_t* eax = *arg2
    int32_t* eax = *arg2
    *(eax + arg3)
    arg2[0xa].b
    sub_4cd9d0(arg1, *(arg1 + 4) + *arg1 + eax)
    char* eax_2 = *(arg3 + *arg2)
    int32_t esi_1 = *(arg3 + arg2[4])
    
    if (eax_2 == 0)
        sub_4c5870("pString", &data_83f3d3, "DefBin.cpp", 0x250, "DefBinSerializeHashedName")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t result = sub_519130(eax_2)
    
    if (result == esi_1)
        return result
    
    sub_4c5870("strcrc32(pString) == hash", &data_83f3d3, "DefBin.cpp", 0x251, 
        "DefBinSerializeHashedName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
