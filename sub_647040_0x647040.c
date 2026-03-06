// 函数名称: sub_647040
// 虚拟地址: 0x647040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_647040(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void var_20
        sub_68af60(&var_20, *arg1, arg1[1])
        
        if (arg1[2] != 0 && sub_68b0a0(&var_20, 8) == 1)
            int32_t var_c = 0
            int16_t var_8_1 = 0
            int32_t i_1 = 6
            int32_t* edi_1 = &var_c
            int32_t i
            
            do
                *edi_1 = sub_68b0a0(&var_20, 8)
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (var_c == 0x62726f76 && var_8_1.b == 0x69 && var_8_1:1.b == 0x73)
                return i_1 + 1
    
    return 0
}
