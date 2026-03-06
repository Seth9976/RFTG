// 函数名称: sub_5d9870
// 虚拟地址: 0x5d9870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9870(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc5)
    if (arg1 == 0 || *arg1 != 0xbf7fc5)
        sub_5cce60("Invalid texture")
        return 0xffffffff
    
    void* edi = arg1[8]
    
    if (arg1 == *(edi + 0x128))
        sub_5d93b0(edi, nullptr)
    
    void* eax = arg1[0x13]
    *arg1 = 0
    
    if (eax != 0)
        *(eax + 0x48) = arg1[0x12]
    
    void* eax_1 = arg1[0x12]
    
    if (eax_1 == 0)
        *(edi + 0x124) = arg1[0x13]
    else
        *(eax_1 + 0x4c) = arg1[0x13]
    
    int32_t eax_3 = arg1[9]
    
    if (eax_3 != 0)
        sub_5d9870(eax_3)
    
    void* eax_4 = arg1[0xa]
    
    if (eax_4 != 0)
        sub_610c20(eax_4)
    
    int32_t ecx_2 = arg1[0xb]
    sub_5d0af0()
    (*(edi + 0x58))(edi, arg1, ecx_2)
    int32_t* var_1c = arg1
    return sub_5d0af0()
}
