// 函数名称: sub_460d30
// 虚拟地址: 0x460d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_460d30(void* arg1)
{
    // 第一条实际指令: void var_c
    void var_c
    void var_8
    
    if (sub_42bac0(&var_c, &var_8) == 0)
        return data_307c398
    
    switch (sx.d(*(*(sub_418a10() + *(arg1 + 0x8c) * 0x14 + 0x46c) + 4)) - 0x80)
        case 0
            return data_307c39c
        case 1, 0x38
            return data_307c3a4
        case 8, 0x2a
            return data_307c3a0
        case 0x25
            return data_307c390
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x64da, "TakeoverGetTexture")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
