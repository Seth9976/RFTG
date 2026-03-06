// 函数名称: sub_67cdc0
// 虚拟地址: 0x67cdc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_67cdc0(int32_t* arg1)
{
    // 第一条实际指令: void* edi = arg1[0x69]
    void* edi = arg1[0x69]
    sub_67ca90(arg1)
    int32_t ecx = sub_67cd30()
    *(edi + 0xc) = 0
    *(edi + 0x10) = sub_67ca10(ecx, arg1)
    *(edi + 0x14) = 0
    *(edi + 0x18) = 0
    int32_t eax_1 = arg1[0x15]
    
    if (eax_1 == 0 || arg1[0x10] == 0)
        arg1[0x19] = 0
        arg1[0x1a] = 0
        arg1[0x1b] = 0
    
    if (eax_1 != 0)
        if (arg1[0x11] != 0)
            *(*arg1 + 0x14) = 0x2f
            (**arg1)(arg1)
        
        if (arg1[0x1e] != 3)
            arg1[0x1a] = 0
            arg1[0x1b] = 0
            arg1[0x22] = 0
            arg1[0x19] = 1
        else if (arg1[0x22] != 0)
            arg1[0x1a] = 1
        else if (arg1[0x17] == 0)
            arg1[0x19] = 1
        else
            arg1[0x1b] = 1
        
        if (arg1[0x19] != 0)
            sub_683d60(arg1)
            *(edi + 0x14) = arg1[0x73]
        
        if (arg1[0x1b] != 0 || arg1[0x1a] != 0)
            sub_683190(arg1)
            *(edi + 0x18) = arg1[0x73]
    
    if (arg1[0x11] == 0)
        if (*(edi + 0x10) == 0)
            sub_6814c0(arg1)
            sub_680e90(arg1)
        else
            sub_681b70(arg1)
        
        sub_680950(arg1, arg1[0x1b])
    
    sub_6805f0(arg1)
    
    if (arg1[0x38] != 0)
        *(*arg1 + 0x14) = 1
        (**arg1)(arg1)
    else if (arg1[0x37] == 0)
        sub_67f500(arg1)
    else
        sub_680290(arg1)
    
    void* eax_6
    
    if (*(arg1[0x6d] + 0x10) != 0 || arg1[0x10] != 0)
        eax_6 = 1
    else
        eax_6 = nullptr
    
    sub_67e870(arg1, eax_6)
    
    if (arg1[0x11] == 0)
        sub_67d8a0(arg1, nullptr)
    
    (*(arg1[1] + 0x18))(arg1)
    void* result = (*(arg1[0x6d] + 8))(arg1)
    void* ecx_6 = arg1[2]
    
    if (ecx_6 != 0 && arg1[0x10] == 0 && *(arg1[0x6d] + 0x10) != 0)
        int32_t eax_8 = arg1[9]
        
        if (arg1[0x37] != 0)
            eax_8 = eax_8 * 3 + 2
        
        *(ecx_6 + 4) = 0
        *(arg1[2] + 8) = arg1[0x50] * eax_8
        result = arg1[2]
        *(result + 0xc) = 0
        int32_t ecx_9
        ecx_9.b = arg1[0x1b] != 0
        *(arg1[2] + 0x10) = ecx_9 + 2
        *(edi + 0xc) += 1
    
    return result
}
