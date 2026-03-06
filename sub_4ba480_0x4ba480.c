// 函数名称: sub_4ba480
// 虚拟地址: 0x4ba480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ba480(void* arg1 @ edi)
{
    // 第一条实际指令: void* result = *(arg1 + 0x290)
    void* result = *(arg1 + 0x290)
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(arg1 + 0x290)
        
        if (*(result + 8) s>= 1)
            char* const esi_1 = *(arg1 + 0x290)
            
            if (esi_1 == 0)
                esi_1 = &data_83f3d3
            
            result = _strncpy(data_27e7a54, esi_1, 0x10)
            *(data_27e7a54 + 0xf) = 0
    
    *(arg1 + 0x29c) = *(arg1 + 0x294)
    *(arg1 + 0x2e1) = 0
    return result
}
