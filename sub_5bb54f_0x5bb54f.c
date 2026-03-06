// 函数名称: sub_5bb54f
// 虚拟地址: 0x5bb54f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bb54f(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_1 = arg3 & 0xfff7ffff
    int32_t eax_1 = arg3 & 0xfff7ffff
    int32_t mxcsr
    int16_t x87control
    
    if ((arg2 & eax_1 & 0xfcf0fce0) == 0)
        if (arg1 == 0)
            sub_5bc59e(mxcsr, x87control, arg2, eax_1)
        else
            *arg1 = sub_5bc59e(mxcsr, x87control, arg2, eax_1)
        
        return 0
    
    if (arg1 != 0)
        *arg1 = sub_5bc59e(mxcsr, x87control, 0, 0)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
