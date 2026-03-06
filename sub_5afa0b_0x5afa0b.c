// 函数名称: sub_5afa0b
// 虚拟地址: 0x5afa0b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5afa0b(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0xfffffffe)
    if (arg1 != 0xfffffffe)
        if (arg1 s>= 0 && arg1 u< data_3166edc)
            int32_t ecx_3 = (&data_3166ee0)[arg1 s>> 5]
            int32_t eax_7 = (arg1 & 0x1f) << 6
            
            if ((*(eax_7 + ecx_3 + 4) & 1) != 0)
                return *(eax_7 + ecx_3)
        
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
    else
        *___doserrno() = 0
        *__errno() = 9
    
    return 0xffffffff
}
