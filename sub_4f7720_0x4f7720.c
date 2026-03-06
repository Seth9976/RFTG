// 函数名称: sub_4f7720
// 虚拟地址: 0x4f7720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f7720(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t esi
    
    if (arg3[0x48] s<= *arg3)
        esi = arg2[0x23]
        eax_1 = arg2[0x22]
    else
        esi = arg3[0x4b]
        eax_1 = arg3[0x4c]
    
    int32_t var_8 = eax_1
    int32_t eax_4 = arg1[1] * esi + *arg1
    
    if (eax_4 s>= 0x1e)
        sub_4c5870("slotIdx < 30", &data_83f3d3, "UIDef.cpp", 0x6a9, "UIStateSubstate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_4 s>= 0)
        sub_4f7660(arg1, &arg3[eax_4 + 0x29], arg2, arg3)
        return sub_4fc3d0(&data_be1cb8, arg3[eax_4 + 0x29])
    
    sub_4c5870("slotIdx >= 0", &data_83f3d3, "UIDef.cpp", 0x6aa, "UIStateSubstate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
