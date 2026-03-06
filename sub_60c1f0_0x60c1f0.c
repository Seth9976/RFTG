// 函数名称: sub_60c1f0
// 虚拟地址: 0x60c1f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60c1f0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg2 + 0x44)
    int32_t* esi = *(arg2 + 0x44)
    void* edi = *(arg1 + 0x134)
    int32_t result = sub_609b10(arg1)
    
    if (esi != 0)
        if (*esi != 0)
            (*(edi + 0x50))(1, esi)
        
        if (esi[0xc] != 0)
            (*(edi + 0x50))(1, &esi[0xd])
            (*(edi + 0x50))(1, &esi[0xe])
        
        int32_t var_14_4 = esi[6]
        sub_5d0af0()
        int32_t* var_18_1 = esi
        result = sub_5d0af0()
        *(arg2 + 0x44) = 0
    
    return result
}
