// 函数名称: sub_468990
// 虚拟地址: 0x468990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_468990(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t ecx_1 = arg1[0x12]
    int32_t ecx_1 = arg1[0x12]
    void* edx = data_27e7a44
    void* result
    
    if (ecx_1 == 0)
    label_4689c0:
        result = sub_4b7170(*arg1)
        
        if (result != 0)
            arg1[0x12] = *(result + 0x1c0)
    else
        uint32_t eax_1 = zx.d(ecx_1.w)
        
        if (eax_1 u>= *(edx + 0x20))
            goto label_4689c0
        
        result = eax_1 * 0x1c4 + *(edx + 0x1c)
        
        if (*(result + 0x1c0) != ecx_1 || *(result + 4) != *arg1)
            goto label_4689c0
    
    return result
}
