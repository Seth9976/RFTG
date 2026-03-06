// 函数名称: sub_52e660
// 虚拟地址: 0x52e660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_52e660(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* edi = arg3
    int32_t* edi = arg3
    *(arg2 + (*edi << 2)) = arg1
    *edi += 1
    int32_t* result = sub_530500(arg2, arg1)
    int32_t i = 0
    arg3 = result
    
    if (result[0x674] s> 0)
        void* ebx_1 = &result[0x574]
        
        do
            result = sub_52e660(*ebx_1, arg2, edi)
            i += 1
            ebx_1 += 4
        while (i s< arg3[0x674])
    
    return result
}
