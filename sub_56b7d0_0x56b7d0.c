// 函数名称: sub_56b7d0
// 虚拟地址: 0x56b7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_56b7d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    data_3078820 = arg1
    sub_56b9d0(arg1)
    
    switch (arg1[1])
        case 2
            sub_56ee50(arg1)
            return sub_56e480()
        case 0x12
            return sub_56efe0(arg1)
        case 0x18
            sub_56efe0(arg1)
            return sub_56e480()
        case 0x19
            sub_56efe0(arg1)
            sub_5428d0()
            return sub_56e480()
        case 0x1d
            sub_56efe0(arg1)
            sub_5428d0()
            arg1[7] -= 1
            sub_5096c0(arg1)
            sub_4b4a90(arg1)
            int32_t eax_7
            int80_t st0_2
            st0_2, eax_7 = sub_5836f0(arg1)
            return eax_7
        case 0x1e
            sub_56efe0(arg1)
            sub_5428d0()
            arg1[7] -= 1
            sub_5096c0(arg1)
            sub_4b4a90(arg1)
            int32_t eax_6
            int80_t st0_1
            st0_1, eax_6 = sub_5755c0(arg1)
            return eax_6
        case 0x20
            sub_56ee50(arg1)
            sub_5428d0()
            arg1[7] -= 1
            sub_5096c0(arg1)
            sub_4b4a90(arg1)
            return sub_56f310(arg1)
        case 0x22
            sub_56efe0(arg1)
            sub_5428d0()
            arg1[7] -= 1
            sub_5096c0(arg1)
            sub_4b4a90(arg1)
            return sub_52ff20(arg1)
    
    sub_4c5870("Halt", &data_83f3d3, "Editor\EditMode.cpp", 0x822, "HolodeckView")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
