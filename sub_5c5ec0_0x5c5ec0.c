// 函数名称: sub_5c5ec0
// 虚拟地址: 0x5c5ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c5ec0(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 8)
    int32_t* eax = *(arg1 + 8)
    
    if (eax != 0)
        zip_source_free(eax)
        *(arg1 + 8) = 0
    
    char* result = *(arg1 + 4)
    
    if (result != 0 && (*result & 1) != 0 && *(result + 0xc) == 0xfffffffe)
        *result &= 0xfffffffe
        result = *(arg1 + 4)
        
        if (*result == 0)
            result = sub_5bf7f0(result)
            *(arg1 + 4) = 0
    
    *(arg1 + 0xc) = 0
    return result
}
