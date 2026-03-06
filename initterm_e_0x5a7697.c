// 函数名称: __initterm_e
// 虚拟地址: 0x5a7697
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__initterm_e(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* i = arg1
    int32_t* i = arg1
    int32_t result = 0
    
    for (; i u< arg2; i = &i[1])
        if (result != 0)
            break
        
        int32_t ecx_1 = *i
        
        if (ecx_1 != 0)
            result = ecx_1()
    
    return result
}
