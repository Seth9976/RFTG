// 函数名称: sub_5da660
// 虚拟地址: 0x5da660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da660(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = data_bf7fc8
    int32_t edi = data_bf7fc8
    int32_t result = 0
    
    if (edi s> 0)
        do
            int32_t* ecx_1 = *(data_bf7fcc + (result << 2))
            
            if (*ecx_1 == arg1 && ecx_1[1] == arg2)
                return result
            
            result += 1
        while (result s< edi)
    
    return 0xffffffff
}
