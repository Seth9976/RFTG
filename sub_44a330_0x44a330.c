// 函数名称: sub_44a330
// 虚拟地址: 0x44a330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_44a330(int32_t* arg1 @ edi)
{
    // 第一条实际指令: void* result
    void* result
    
    if (arg1[0x17] != 2 || arg1[0x16] != 0)
        result = data_27e7a40
        
        if (*(*(result + 0x548) + 0xbfac) == 0
                && *(sub_46b2b0(*(result + 0x74)) + 0x1f40) == arg1[0x2b])
            int32_t esi_2 = *(*(data_27e7a40 + 0x548) + 0xbfb0)
            
            if (esi_2 != 0xffffffff && arg1[0x17] == 3)
                result = *sub_46b2b0(esi_2)
            
            if (esi_2 == 0xffffffff || arg1[0x17] != 3 || arg1[0x16] == result)
                return sub_44a2e0(arg1) == 0
    
    result.b = 0
    return result
}
