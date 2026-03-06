// 函数名称: __set_error_mode
// 虚拟地址: 0x5b91d3
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__set_error_mode(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s>= 0)
    if (arg1 s>= 0)
        if (arg1 s<= 2)
            int32_t result = data_bec5cc
            data_bec5cc = arg1
            return result
        
        if (arg1 == 3)
            return data_bec5cc
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
