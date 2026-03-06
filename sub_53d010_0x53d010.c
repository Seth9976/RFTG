// 函数名称: sub_53d010
// 虚拟地址: 0x53d010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_53d010(char** arg1, int128_t* arg2 @ edi)
{
    // 第一条实际指令: char* eax = arg2
    char* eax = arg2
    int32_t var_8 = 0
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    
    for (void* i_1 = eax - &eax[1]; i_1 s> 0; i_1 -= 1)
        if (sub_5a8426(sx.d(*(arg2 + i_1 - 1))) == 0)
            break
    
    if (arg2 != 0)
        *arg1 = &data_83f3d3
        sub_4c4690(arg1, arg2)
        return arg1
    
    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
