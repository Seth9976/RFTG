// 函数名称: sub_5c79f0
// 虚拟地址: 0x5c79f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5c79f0()
{
    // 第一条实际指令: data_bed768 = 0
    data_bed768 = 0
    int32_t edi
    uint32_t eax = sub_5d2150(edi)
    
    if (eax s< 0)
        return eax
    
    void* var_c_1 = (eax << 2) + 4
    int32_t eax_1 = sub_5d0ac0()
    data_bed76c = eax_1
    
    if (eax_1 == 0)
        data_bed768 = eax_1.b
        return eax_1
    
    void* var_c_2 = (eax << 2) + 4
    int32_t var_10_1 = 0
    int32_t var_14_1 = eax_1
    sub_5cd100()
    data_bed768 = eax.b
    return 0
}
