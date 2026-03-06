// 函数名称: sub_5c33a0
// 虚拟地址: 0x5c33a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c33a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x44)
    int32_t edi = *(arg1 + 0x44)
    int32_t result = 0
    
    if (edi != 0)
        int32_t* esi_1 = *(arg1 + 0x4c)
        int32_t* edx_1 = esi_1
        
        while (*edx_1 != arg2)
            result += 1
            edx_1 = &edx_1[1]
            
            if (result u>= edi)
                return result
        
        esi_1[result] = esi_1[edi - 1]
        *(arg1 + 0x44) -= 1
    
    return result
}
