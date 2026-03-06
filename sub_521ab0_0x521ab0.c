// 函数名称: sub_521ab0
// 虚拟地址: 0x521ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_521ab0(int32_t* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: arg1[1]
    arg1[1]
    int128_t* eax = *arg1
    int32_t var_8 = 0
    
    if (eax != 0)
        *arg3 = &data_83f3d3
        sub_4c4690(arg3, eax)
        return arg3
    
    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
