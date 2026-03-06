// 函数名称: sub_4032d0
// 虚拟地址: 0x4032d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4032d0(int32_t* arg1 @ esi, char arg2)
{
    // 第一条实际指令: void var_3c
    void var_3c
    int32_t eax_1 = __security_cookie ^ &var_3c
    sub_448bc0(arg1, arg2)
    void* eax_3 = data_27e7a40
    int32_t ecx = *(eax_3 + 0x78)
    int32_t edx = *arg1
    
    if (ecx == 0xe && edx == 0x10)
        if (arg1[1] != *(eax_3 + 0x7c))
            goto label_403350
        
        sub_5a6aba(eax_1 ^ &var_3c)
        return eax_3
    
    if (ecx != edx)
    label_403350:
        int32_t edx_3 = *(eax_3 + 0xc)
        *(eax_3 + 0x98) = *(eax_3 + 8)
        *(eax_3 + 0x9c) = edx_3
        
        if (*arg1 != 0xe)
            sub_5a6aba(eax_1 ^ &var_3c)
            return eax_3
        
        sub_4d6480(data_307bf0c)
        int32_t eax_4 = sub_4d66f0(&var_3c)
        sub_5a6aba(eax_1 ^ &var_3c)
        return eax_4
    
    bool cond:0_1
    
    switch (ecx)
        case 0, 2, 9, 0xd, 0xf, 0x15
            sub_5a6aba(eax_1 ^ &var_3c)
            return eax_3
        case 1, 0xe, 0x10, 0x11, 0x12, 0x13
            cond:0_1 = *(eax_3 + 0x7c) == arg1[1]
        case 3, 4, 5, 6, 7, 0xa, 0xb, 0xc, 0x14
            cond:0_1 = *(eax_3 + 0x80) == arg1[2]
        default
            sub_4c5870("Halt", &data_83f3d3, "..\code\CClient.cpp", 0x18a, "HitResultSame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    ecx.b = cond:0_1
    
    if (ecx.b == 0)
        goto label_403350
    
    sub_5a6aba(eax_1 ^ &var_3c)
    return eax_3
}
