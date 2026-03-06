// 函数名称: sub_5c4370
// 虚拟地址: 0x5c4370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c4370(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = sub_5a881a(0x38)
    int32_t* result = sub_5a881a(0x38)
    
    if (result != 0)
        *result = arg1
        result[1] = arg2
        __builtin_memset(&result[4], 0, 0x24)
        result[2] = 0
        int32_t eax_1 = sub_5a881a(4)
        result[2] = eax_1
        
        if (eax_1 != 0)
            result[7] = 0
            result[4] = 0
            result[5] = 0
            result[6] = 1
            result[0xc] = 1
            return result
        
        sub_5c4280(result)
    
    return 0
}
