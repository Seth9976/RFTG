// 函数名称: sub_5c89a0
// 虚拟地址: 0x5c89a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c89a0(void* arg1 @ esi)
{
    // 第一条实际指令: void* eax_3 = *(arg1 + 0x98)
    void* eax_3 = *(arg1 + 0x98)
    *(arg1 + 0x84) = 0
    
    if (eax_3 != 0)
        sub_5d4790(eax_3, nullptr)
    
    CRITICAL_SECTION* eax = *(arg1 + 0x94)
    
    if (eax != 0)
        sub_5d1170(eax)
    
    int32_t var_4_2 = *(arg1 + 0x90)
    sub_5d0af0()
    
    if (*(arg1 + 0x18) != 0)
        int32_t var_4_3 = *(arg1 + 0x28)
        sub_5d0af0()
    
    if (*(arg1 + 0x8c) != 0)
        data_bed7e4(arg1)
        *(arg1 + 0x8c) = 0
    
    void* var_4_5 = arg1
    return sub_5d0af0()
}
