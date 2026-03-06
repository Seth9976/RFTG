// 函数名称: sub_6124a0
// 虚拟地址: 0x6124a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6124a0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = data_8baed0
    
    if (result == 0xffffffff)
        data_8baed0 = 0
        int32_t esi
        
        if (sub_612120(esi) != 0)
            data_8baed0 |= 1
        
        if (sub_612190(esi) != 0)
            data_8baed0 |= 4
        
        if (sub_612200() != 0)
            data_8baed0 |= 8
        
        if (sub_612270(esi) != 0)
            data_8baed0 |= 0x10
        
        if (sub_6122e0(esi) != 0)
            data_8baed0 |= 0x20
        
        if (sub_612350() != 0)
            data_8baed0 |= 0x40
        
        if (sub_6123c0() != 0)
            data_8baed0 |= 0x100
        
        bool cond:0_1 = sub_612430() == 0
        result = data_8baed0
        
        if (not(cond:0_1))
            result |= 0x200
            data_8baed0 = result
    
    return result
}
