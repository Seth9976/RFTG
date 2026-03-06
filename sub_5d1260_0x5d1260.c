// 函数名称: sub_5d1260
// 虚拟地址: 0x5d1260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d1260(void* arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x201c)
    int32_t result = *(arg1 + 0x201c)
    void* esi_1 = result * 0x204
    void* var_10 = esi_1 + 0x204
    int32_t var_14 = *(arg1 + 0x2020)
    int32_t eax_1 = sub_5d0ae0()
    
    if (eax_1 == 0)
        sub_5cd050(eax_1)
        return 0xffffffff
    
    int32_t var_10_2 = 0x200
    void* esi_2 = esi_1 + eax_1
    int32_t var_14_1 = arg2
    void* var_18 = esi_2
    *(arg1 + 0x2020) = eax_1
    sub_5cd110()
    int16_t x87control
    *(esi_2 + 0x200) = sub_5d11f0(esi_2, x87control)
    *(arg1 + 0x201c) += 1
    return result
}
