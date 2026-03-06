// 函数名称: sub_54a2f0
// 虚拟地址: 0x54a2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_54a2f0(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int128_t* edi = *arg2
    char* eax = edi
    ecx.b = *eax
    int32_t var_8_1 = 0
    
    while (ecx.b != 0)
        if (ecx.b != 0xd)
            if (ecx.b == 0xa)
                eax = &eax[1]
                break
        else if (eax[1] == 0xa)
            eax = &eax[2]
            break
        
        ecx.b = eax[1]
        eax = &eax[1]
    
    *arg2 = eax
    
    if (edi != 0)
        *arg1 = &data_83f3d3
        sub_4c4690(arg1, edi)
        return arg1
    
    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
