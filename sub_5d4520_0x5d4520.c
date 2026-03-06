// 函数名称: sub_5d4520
// 虚拟地址: 0x5d4520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4520()
{
    // 第一条实际指令: if (data_bf7c40 == 0)
    if (data_bf7c40 == 0)
        if (data_bf7c44 == 0)
            sub_5dadf0(0xbf7c38)
            
            if (data_bf7c40 == 0)
                data_bf7c44 = 1
                int32_t eax_1 = sub_5d4270()
                data_bf7c44 = 0
                data_bf7c40 = eax_1
            
            sub_5dae20(0xbf7c38)
        
        if (data_bf7c44 != 0 || data_bf7c40 == 0)
            return 0xbf7c50
    
    int32_t eax_4 = sub_5d4280(data_bf7c40)
    
    if (eax_4 != 0xffffffff)
        if (eax_4 != 0)
            return eax_4
        
        sub_5d42b0(data_bf7c40, 0xffffffff, eax_4)
        int32_t var_14_1 = 0x308
        int32_t eax_5 = sub_5d0ac0()
        
        if (eax_5 != 0)
            int32_t var_8_3 = 0x308
            int32_t var_c_2 = 0
            int32_t var_10_3 = eax_5
            sub_5cd100()
            sub_5d42b0(data_bf7c40, eax_5, sub_5d0af0)
            return eax_5
        
        sub_5d42b0(data_bf7c40, eax_5, eax_5)
    
    return 0xbf7c50
}
