// 函数名称: sub_4c40c0
// 虚拟地址: 0x4c40c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4c40c0(int32_t arg1, void** arg2)
{
    // 第一条实际指令: if (arg1 s<= 0)
    if (arg1 s<= 0)
        sub_4c5870("length > 0", &data_83f3d3, "xString.cpp", 0x27, "sXStringAllocBufferLength")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_1 = sub_4f4380(arg1 + 0x11)
    eax_1[3] += 1
    int32_t* eax_3
    
    if (arg1 + 0x11 s<= 0x400 || eax_1[4] != 0xffffffff)
        if (*eax_1 == 0)
            sub_4f4170(eax_1)
        
        eax_3 = *eax_1
        *eax_1 = *eax_3
    else
        eax_3 = sub_4cce80(arg1 + 0x11)
    
    eax_3[2] = arg1
    eax_3[3] = arg1 + 1
    *eax_3 = 0xfafafafa
    eax_3[1] = 1
    *arg2 = &eax_3[4]
    return &eax_3[4]
}
