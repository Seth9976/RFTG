// 函数名称: sub_5c6e20
// 虚拟地址: 0x5c6e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6e20()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* i_1 = data_bed354
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = i_1[0xd]
            data_bed358 = i_1
            sub_5d0a30(i_1)
            
            if (i_1[0xc].b != 0 && *(i_1 + 0x31) != 0)
                int32_t j = 0
                
                if (i_1[2] s> 0)
                    do
                        sub_5c6c50(i_1, j.b, 0)
                        j += 1
                    while (j s< i_1[2])
                
                int32_t j_1 = 0
                
                if (i_1[8] s> 0)
                    do
                        sub_5c6d80(i_1, j_1.b, 0)
                        j_1 += 1
                    while (j_1 s< i_1[8])
                
                int32_t j_2 = 0
                
                if (i_1[4] s> 0)
                    do
                        sub_5c6cf0(i_1, j_2.b, 0)
                        j_2 += 1
                    while (j_2 s< i_1[4])
                
                *(i_1 + 0x31) = 0
            
            data_bed358 = 0
            
            if (i_1[0xb] s<= 0)
                sub_5c6b50(i_1)
            
            i_1 = i
        while (i != 0)
    
    return sub_5cf5f0()
}
