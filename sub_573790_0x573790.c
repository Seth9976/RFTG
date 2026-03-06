// 函数名称: sub_573790
// 虚拟地址: 0x573790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_573790()
{
    // 第一条实际指令: int32_t result = sub_50c140(data_26a6760)
    int32_t result = sub_50c140(data_26a6760)
    int32_t i = 0
    
    if (data_26a7764 s> 0)
        do
            int32_t* ecx_3 = (&data_26a6764)[i] * 0xb8 + *result
            int32_t edx_1 = *ecx_3
            
            if (edx_1 == 3 || edx_1 == 2 || edx_1 == 1)
                ecx_3[8] = 0x3f800000
                ecx_3[9] = 0x3f800000
                ecx_3[0xa] = 0x3f800000
            
            i += 1
        while (i s< data_26a7764)
    
    return result
}
