// 函数名称: zip_get_num_entries
// 虚拟地址: 0x5bed60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_get_num_entries(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    int32_t result = *(arg1 + 0x30)
    int32_t edx_1 = *(arg1 + 0x34)
    
    if ((arg2 & 8) != 0 && (edx_1 != 0 || result != 0))
        while (*(*(arg1 + 0x40) + result * 0x10 - 0x10) == 0)
            int32_t result_1 = result
            result -= 1
            edx_1 = adc.d(edx_1, 0xffffffff, result_1 u>= 1)
            
            if (edx_1 u<= 0)
                if (edx_1 u< 0)
                    break
                
                if (result == 0)
                    break
    
    return result
}
