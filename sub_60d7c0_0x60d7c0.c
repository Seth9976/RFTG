// 函数名称: sub_60d7c0
// 虚拟地址: 0x60d7c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_60d7c0(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x44)
    int32_t* esi = *(arg1 + 0x44)
    
    if (esi == 0)
        return 
    
    int32_t* eax_1 = *esi
    
    if (eax_1 != 0)
        (*(*eax_1 + 8))(eax_1)
    
    if (esi[3] != 0)
        int32_t* eax_2 = esi[3]
        (*(*eax_2 + 8))(eax_2)
    
    if (esi[4] != 0)
        int32_t* eax_3 = esi[4]
        (*(*eax_3 + 8))(eax_3)
    
    int32_t var_10_4 = esi[5]
    sub_5d0af0()
    int32_t* var_14_1 = esi
    sub_5d0af0()
    *(arg1 + 0x44) = 0
}
