// 函数名称: sub_60d820
// 虚拟地址: 0x60d820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d820(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x134)
    int32_t* esi = *(arg1 + 0x134)
    
    if (esi != 0)
        int32_t* eax_1 = esi[0x1d]
        
        if (eax_1 != 0)
            (*(*eax_1 + 8))(eax_1)
            esi[0x1d] = 0
        
        int32_t* eax_2 = esi[0x1e]
        
        if (eax_2 != 0)
            (*(*eax_2 + 8))(eax_2)
            esi[0x1e] = 0
        
        int32_t* eax_3 = esi[0x21]
        
        if (eax_3 != 0)
            (*(*eax_3 + 8))(eax_3)
        
        int32_t* eax_4 = esi[2]
        
        if (eax_4 != 0)
            (*(*eax_4 + 8))(eax_4)
        
        int32_t* eax_5 = esi[1]
        
        if (eax_5 != 0)
            (*(*eax_5 + 8))(eax_5)
            int32_t* eax_6 = esi[0x20]
            (*(*eax_6 + 8))(eax_6)
            sub_5df000(*esi)
        
        int32_t* var_10_8 = esi
        sub_5d0af0()
    
    void* var_10_9 = arg1
    return sub_5d0af0()
}
